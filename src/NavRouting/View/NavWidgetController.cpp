// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#include "NavWidgetController.h"
#include "NavRoutingViewClosedMessage.h"
#include "NavRoutingSelectStartLocationClickedMessage.h"
#include "NavRoutingSelectEndLocationClickedMessage.h"
#include "NavRoutingViewStartEndLocationSwappedMessage.h"

namespace ExampleApp
{
    namespace NavRouting
    {
        namespace View
        {
            void NavWidgetController::OnViewOpened()
            {
                if(!m_viewModel.TryAcquireReactorControl())
                {
                    if (m_viewModel.IsOpen())
                    {
                        m_viewModel.Close();
                    }
                    return;
                }

                m_view.Show();
            }

            void NavWidgetController::OnViewClosed()
            {
                m_view.Hide();

                m_messageBus.Publish(NavRoutingViewClosedMessage());
            }

            void NavWidgetController::OnCloseButtonClicked()
            {
                m_viewModel.Close();
            }

            void NavWidgetController::OnStartLocationClicked()
            {
                m_messageBus.Publish(NavRoutingSelectStartLocationClickedMessage());
                //TODO animate out and show search widget
            }

            void NavWidgetController::OnEndLocationClicked()
            {
                m_messageBus.Publish(NavRoutingSelectEndLocationClickedMessage());
                //TODO animate out and show search widget
            }

            void NavWidgetController::OnStartLocationClearButtonClicked()
            {
                m_viewModel.ClearStartLocation();
            }

            void NavWidgetController::OnEndLocationClearButtonClicked()
            {
                m_viewModel.ClearEndLocation();
            }

            void NavWidgetController::OnStartEndLocationsSwapped()
            {
                m_messageBus.Publish(NavRoutingViewStartEndLocationSwappedMessage());
            }

            void NavWidgetController::OnStartLocationSet(const SdkModel::NavRoutingLocationModel& startLocation)
            {
                m_view.SetStartLocation(startLocation);
            }

            void NavWidgetController::OnStartLocationCleared()
            {
                m_view.ClearStartLocation();
            }

            void NavWidgetController::OnEndLocationSet(const SdkModel::NavRoutingLocationModel& endLocation)
            {
                m_view.SetEndLocation(endLocation);
            }

            void NavWidgetController::OnEndLocationCleared()
            {
                m_view.ClearEndLocation();
            }

            void NavWidgetController::OnDirectionsButtonClicked(const SearchResultPoi::SearchResultPoiDirectionsButtonClickedMessage& message)
            {
                if (!m_viewModel.IsOpen())
                {
                    m_viewModel.Open();

                    const Search::SdkModel::SearchResultModel& searchResultModel = message.GetModel();
                    m_viewModel.SetEndLocation(SdkModel::NavRoutingLocationModel(searchResultModel.GetTitle(),
                                                                                 searchResultModel.GetLocation(),
                                                                                 searchResultModel.IsInterior(),
                                                                                 searchResultModel.GetBuildingId(),
                                                                                 searchResultModel.GetFloor()));

                    if(m_locationService.GetIsAuthorized())
                    {
                        Eegeo::Space::LatLong currentLocation = Eegeo::Space::LatLong::FromDegrees(0.0, 0.0);
                        if(m_locationService.GetLocation(currentLocation))
                        {
                            int indoorMapFloorId = 0;
                            m_locationService.GetFloorIndex(indoorMapFloorId);

                            m_viewModel.SetStartLocation(SdkModel::NavRoutingLocationModel("Current Location",
                                                                                           currentLocation,
                                                                                           m_locationService.IsIndoors(),
                                                                                           m_locationService.GetInteriorId(),
                                                                                           indoorMapFloorId));
                        }
                    }
                }
            }

            NavWidgetController::NavWidgetController(INavWidgetView& view,
                                                     INavWidgetViewModel& viewModel,
                                                     Eegeo::Location::ILocationService& locationService,
                                                     ExampleAppMessaging::TMessageBus& messageBus)
                    : m_view(view)
                    , m_viewModel(viewModel)
                    , m_locationService(locationService)
                    , m_messageBus(messageBus)
                    , m_closeButtonCallback(this, &NavWidgetController::OnCloseButtonClicked)
                    , m_startLocationClickedCallback(this, &NavWidgetController::OnStartLocationClicked)
                    , m_endLocationClickedCallback(this, &NavWidgetController::OnEndLocationClicked)
                    , m_startLocationClearButtonClickedCallback(this, &NavWidgetController::OnStartLocationClearButtonClicked)
                    , m_endLocationClearButtonClickedCallback(this, &NavWidgetController::OnEndLocationClearButtonClicked)
                    , m_startEndLocationsSwappedCallback(this, &NavWidgetController::OnStartEndLocationsSwapped)
                    , m_viewOpenedCallback(this, &NavWidgetController::OnViewOpened)
                    , m_viewClosedCallback(this, &NavWidgetController::OnViewClosed)
                    , m_startLocationSetCallback(this, &NavWidgetController::OnStartLocationSet)
                    , m_startLocationClearedCallback(this, &NavWidgetController::OnStartLocationCleared)
                    , m_endLocationSetCallback(this, &NavWidgetController::OnEndLocationSet)
                    , m_endLocationClearedCallback(this, &NavWidgetController::OnEndLocationCleared)
                    , m_directionsButtonClickedMessageHandler(this, &NavWidgetController::OnDirectionsButtonClicked)
            {
                m_view.InsertClosedCallback(m_closeButtonCallback);
                m_view.InsertStartLocationClickedCallback(m_startLocationClickedCallback);
                m_view.InsertEndLocationClickedCallback(m_endLocationClickedCallback);
                m_view.InsertStartLocationClearButtonClickedCallback(m_startLocationClearButtonClickedCallback);
                m_view.InsertEndLocationClearButtonCallback(m_endLocationClearButtonClickedCallback);
                m_view.InsertStartEndLocationsSwappedCallback(m_startEndLocationsSwappedCallback);
                m_viewModel.InsertOpenedCallback(m_viewOpenedCallback);
                m_viewModel.InsertClosedCallback(m_viewClosedCallback);
                m_viewModel.InsertStartLocationSetCallback(m_startLocationSetCallback);
                m_viewModel.InsertStartLocationClearedCallback(m_startLocationClearedCallback);
                m_viewModel.InsertEndLocationSetCallback(m_endLocationSetCallback);
                m_viewModel.InsertEndLocationClearedCallback(m_endLocationClearedCallback);
                m_messageBus.SubscribeUi(m_directionsButtonClickedMessageHandler);
            }

            NavWidgetController::~NavWidgetController()
            {
                m_messageBus.UnsubscribeUi(m_directionsButtonClickedMessageHandler);
                m_viewModel.RemoveEndLocationClearedCallback(m_endLocationClearedCallback);
                m_viewModel.RemoveEndLocationSetCallback(m_endLocationSetCallback);
                m_viewModel.RemoveStartLocationClearedCallback(m_startLocationClearedCallback);
                m_viewModel.RemoveStartLocationSetCallback(m_startLocationSetCallback);
                m_viewModel.RemoveClosedCallback(m_viewClosedCallback);
                m_viewModel.RemoveOpenedCallback(m_viewOpenedCallback);
                m_view.RemoveStartEndLocationsSwappedCallback(m_startEndLocationsSwappedCallback);
                m_view.RemoveEndLocationClearButtonCallback(m_endLocationClearButtonClickedCallback);
                m_view.RemoveStartLocationClearButtonClickedCallback(m_startLocationClearButtonClickedCallback);
                m_view.RemoveEndLocationClickedCallback(m_endLocationClickedCallback);
                m_view.RemoveStartLocationClickedCallback(m_startLocationClickedCallback);
                m_view.RemoveClosedCallback(m_closeButtonCallback);
            }
        }
    }
}
