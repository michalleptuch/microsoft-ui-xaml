// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
#include "PickerFlyoutThemeTransition.g.h"

namespace DirectUI
{
    PARTIAL_CLASS(PickerFlyoutThemeTransition)
    {

    public:
        _Check_return_ HRESULT CreateStoryboardImpl(_In_ xaml::IUIElement* element, _In_ wf::Rect start, _In_ wf::Rect destination, _In_ xaml::TransitionTrigger transitionTrigger, _In_ wfc::IVector<xaml_animation::Storyboard*>* storyboards, _Out_ xaml::TransitionParent* parentForTransition) override;
        _Check_return_ HRESULT ParticipatesInTransitionImpl(_In_ xaml::IUIElement* element, _In_ xaml::TransitionTrigger transitionTrigger, _Out_ BOOLEAN* returnValue) override;

    public:
        static const INT64 s_OpenDuration = 250;
        static const INT64 s_CloseDuration = 167;
        static const INT64 s_OpacityChangeDuration = 83;
        static const INT64 s_OpacityChangeBeginTime = s_CloseDuration - s_OpacityChangeDuration;
    };
}