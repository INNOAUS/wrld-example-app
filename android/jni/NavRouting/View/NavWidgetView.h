// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include <string>
#include "Types.h"
#include "AndroidNativeState.h"
#include "CallbackCollection.h"
#include "INavWidgetView.h"
#include "NavRoutingLocationModel.h"

namespace ExampleApp
{
    namespace NavRouting
    {
        namespace View
        {
            class NavWidgetView : public INavWidgetView, Eegeo::NonCopyable
            {
            private:
                AndroidNativeState& m_nativeState;
                Eegeo::Helpers::CallbackCollection0 m_closedCallbacks;
                Eegeo::Helpers::CallbackCollection0 m_startLocationClickedCallbacks;
                Eegeo::Helpers::CallbackCollection0 m_endLocationClickedCallbacks;
                Eegeo::Helpers::CallbackCollection0 m_startLocationClearButtonClickedCallbacks;
                Eegeo::Helpers::CallbackCollection0 m_endLocationClearButtonClickedCallbacks;
                Eegeo::Helpers::CallbackCollection0 m_startEndLocationsSwappedCallbacks;

                jclass m_uiViewClass;
                jobject m_uiView;

            public:
                NavWidgetView(AndroidNativeState& nativeState);

                ~NavWidgetView();

                void Show() override;

                void Hide() override;

                void SetStartLocation(const SdkModel::NavRoutingLocationModel& locationModel) override;

                void ClearStartLocation() override;

                void SetEndLocation(const SdkModel::NavRoutingLocationModel& locationModel) override;

                void ClearEndLocation() override;

                void SetRoute(const SdkModel::NavRoutingRouteModel& routeModel) override;

                void ClearRoute() override;

                void InsertClosedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveClosedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleCloseClicked();

                void InsertStartLocationClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveStartLocationClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleStartLocationClicked();

                void InsertEndLocationClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveEndLocationClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleEndLocationClicked();

                void InsertStartLocationClearButtonClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveStartLocationClearButtonClickedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleStartLocationClearButtonClicked();

                void InsertEndLocationClearButtonCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveEndLocationClearButtonCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleEndLocationClearButtonClicked();

                void InsertStartEndLocationsSwappedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void RemoveStartEndLocationsSwappedCallback(Eegeo::Helpers::ICallback0& callback) override;

                void HandleStartEndLocationsSwapped();

            private:
                void SetLocation(const SdkModel::NavRoutingLocationModel& locationModel, bool isStartLocation);

                void CallVoidMethod(const std::string& methodName);

                jclass CreateJavaClass(const std::string& viewClass);

                jobject CreateJavaObject(jclass uiViewClass);

                jobjectArray CreateJavaArray(const std::vector<std::string>& stringVector);
            };
        }
    }
}
