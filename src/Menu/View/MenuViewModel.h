// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include "Types.h"
#include "IMenuViewModel.h"
#include "OpenableControlViewModelBase.h"
#include "ScreenControlViewModelBase.h"
#include "IMenuSectionViewModel.h"
#include "IIdentity.h"
#include "MenuOpenableControl.h"
#include "MenuScreenControl.h"
#include "MenuSectionsViewModel.h"
#include "Menu.h"
#include "Reaction.h"
#include <vector>

namespace ExampleApp
{
    namespace Menu
    {
        namespace View
        {
            class MenuViewModel : public IMenuViewModel, private Eegeo::NonCopyable
            {
                Eegeo::Helpers::TIdentity m_identity;
                MenuOpenableControl m_openViewModel;
                MenuScreenControl m_screenViewModel;
                MenuSectionsViewModel m_sectionsViewModel;

            public:
                MenuViewModel(bool isInitiallyOnScreen,
                              Eegeo::Helpers::TIdentity identity,
                              Reaction::View::IReactionControllerModel& reactionControllerModel);

                Eegeo::Helpers::TIdentity GetIdentity() const;

                void AddToScreen();

                void RemoveFromScreen();

                void UpdateOnScreenState(float onScreenState);

                void InsertOnScreenStateChangedCallback(Eegeo::Helpers::ICallback2<ScreenControl::View::IScreenControlViewModel&, float>& callback);

                void RemoveOnScreenStateChangedCallback(Eegeo::Helpers::ICallback2<ScreenControl::View::IScreenControlViewModel&, float>& callback);

                bool IsFullyOffScreen() const;

                bool IsFullyOnScreen() const;

                float OnScreenState() const;
                
                bool IsAddedToScreen() const;

                bool Open(bool acquireReactor = true);

                bool Close(bool releaseReactor = true);

                void UpdateOpenState(float openState);

                void InsertOpenStateChangedCallback(Eegeo::Helpers::ICallback2<OpenableControl::View::IOpenableControlViewModel&, float>& callback);

                void RemoveOpenStateChangedCallback(Eegeo::Helpers::ICallback2<OpenableControl::View::IOpenableControlViewModel&, float>& callback);

                bool IsFullyOpen() const;

                bool IsFullyClosed() const;

                float OpenState() const;

                void AddSection(IMenuSectionViewModel& section);
                void RemoveSection(IMenuSectionViewModel& section);

                size_t SectionsCount() const
                {
                    return m_sectionsViewModel.SectionsCount();
                }

                size_t NumberOfCells() const
                {
                    return m_sectionsViewModel.NumberOfCells();
                }

                IMenuSectionViewModel& GetMenuSection(int index) const;

                void SetOnScreenPosition( ScreenControl::View::IScreenControlViewPosition screenControlViewPosition);

                ScreenControl::View::IScreenControlViewPosition GetOnScreenPosition() { return m_screenViewModel.GetOnScreenPosition(); }
            };
        }
    }
}
