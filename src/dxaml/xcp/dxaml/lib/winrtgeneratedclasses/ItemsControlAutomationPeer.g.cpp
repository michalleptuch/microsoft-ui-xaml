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

#include "ItemsControlAutomationPeer.g.h"
#include "AutomationProperty.g.h"
#include "IRawElementProviderSimple.g.h"
#include "ItemAutomationPeer.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ItemsControlAutomationPeerGenerated::ItemsControlAutomationPeerGenerated()
{
}

DirectUI::ItemsControlAutomationPeerGenerated::~ItemsControlAutomationPeerGenerated()
{
}

HRESULT DirectUI::ItemsControlAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ItemsControlAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ItemsControlAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IItemContainerProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IItemContainerProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElementAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ItemsControlAutomationPeerGenerated::CreateItemAutomationPeer(_In_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_CreateItemAutomationPeer", 0);
    }
    ARG_NOTNULL(pItem, "item");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    *ppReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ItemsControlAutomationPeer*>(this)->CreateItemAutomationPeerImpl(pItem, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_CreateItemAutomationPeer", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ItemsControlAutomationPeerGenerated::FindItemByProperty(_In_opt_ ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple* pStartAfter, _In_opt_ ABI::Microsoft::UI::Xaml::Automation::IAutomationProperty* pAutomationProperty, _In_opt_ IInspectable* pValue, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_FindItemByProperty", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    *ppReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ItemsControlAutomationPeer*>(this)->FindItemByPropertyImpl(pStartAfter, pAutomationProperty, pValue, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_FindItemByProperty", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ItemsControlAutomationPeerGenerated::OnCreateItemAutomationPeer(_In_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_OnCreateItemAutomationPeer", 0);
    }
    ARG_NOTNULL(pItem, "item");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    *ppReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ItemsControlAutomationPeer*>(this)->OnCreateItemAutomationPeerImpl(pItem, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ItemsControlAutomationPeer_OnCreateItemAutomationPeer", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ItemsControlAutomationPeerGenerated::OnCreateItemAutomationPeerProtected(_In_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer** ppReturnValue)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnCreateItemAutomationPeer(pItem, ppReturnValue));
    }
    else
    {
        IFC(OnCreateItemAutomationPeer(pItem, ppReturnValue));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::ItemsControlAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ItemsControlAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithOwnerImpl(pOwner, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ItemsControlAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<ItemsControlAutomationPeerFactory>::CreateActivationFactory());
    }
}
