// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include "Types.h"
#include "AboutPage.h"
#include "ICallback.h"
#include "IAboutPageViewModel.h"
#include "IAboutPageView.h"
#include "IMetricsService.h"
#include "BidirectionalBus.h"
#include "AppModeChangedMessage.h"

namespace ExampleApp
{
    namespace AboutPage
    {
        namespace View
        {
            class AboutPageController : private Eegeo::NonCopyable
            {
            private:
                IAboutPageView& m_view;
                IAboutPageViewModel& m_viewModel;

                Eegeo::Helpers::TCallback0<AboutPageController> m_viewOpened;
                Eegeo::Helpers::TCallback0<AboutPageController> m_viewClosed;
                Eegeo::Helpers::TCallback0<AboutPageController> m_viewCloseTapped;
                Eegeo::Helpers::TCallback1<AboutPageController, const AppModes::AppModeChangedMessage&> m_appModeChangedHandler;
                
                Metrics::IMetricsService& m_metricsService;

                ExampleAppMessaging::TMessageBus& m_messageBus;

                void OnOpen();

                void OnClose();

                void OnCloseTapped();

                void OnAppModeChangedMessage(const AppModes::AppModeChangedMessage& message);
            public:
                AboutPageController(IAboutPageView& view, IAboutPageViewModel& viewModel, Metrics::IMetricsService& metricsService, ExampleAppMessaging::TMessageBus& messageBus);

                ~AboutPageController();
            };
        }
    }
}
