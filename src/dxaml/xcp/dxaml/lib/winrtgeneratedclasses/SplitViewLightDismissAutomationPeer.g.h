// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "FrameworkElementAutomationPeer.g.h"

#define __SplitViewLightDismissAutomationPeer_GUID "41c74c09-09c8-4c78-bbab-cd8f741801be"

namespace DirectUI
{
    class SplitViewLightDismissAutomationPeer;

    class __declspec(novtable) SplitViewLightDismissAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::SplitViewLightDismissAutomationPeer;


        BEGIN_INTERFACE_MAP(SplitViewLightDismissAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)
            INTERFACE_ENTRY(SplitViewLightDismissAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(SplitViewLightDismissAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)

    public:
        SplitViewLightDismissAutomationPeerGenerated();
        ~SplitViewLightDismissAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::SplitViewLightDismissAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::SplitViewLightDismissAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Invoke)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "SplitViewLightDismissAutomationPeer_Partial.h"
