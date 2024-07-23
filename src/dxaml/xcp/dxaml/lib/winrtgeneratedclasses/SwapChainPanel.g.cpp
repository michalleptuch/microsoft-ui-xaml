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

#include "SwapChainPanel.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SwapChainPanelGenerated::SwapChainPanelGenerated()
{
}

DirectUI::SwapChainPanelGenerated::~SwapChainPanelGenerated()
{
}

HRESULT DirectUI::SwapChainPanelGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SwapChainPanel)))
    {
        *ppObject = static_cast<DirectUI::SwapChainPanel*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanel)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanel*>(this);
    }
    else
    {
        RRETURN(DirectUI::Grid::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SwapChainPanelGenerated::get_CompositionScaleX(_Out_ FLOAT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SwapChainPanel_CompositionScaleX, pValue));
}
IFACEMETHODIMP DirectUI::SwapChainPanelGenerated::get_CompositionScaleY(_Out_ FLOAT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SwapChainPanel_CompositionScaleY, pValue));
}

// Events.
_Check_return_ HRESULT DirectUI::SwapChainPanelGenerated::GetCompositionScaleChangedEventSourceNoRef(_Outptr_ CompositionScaleChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::SwapChainPanel_CompositionScaleChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CompositionScaleChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::SwapChainPanel_CompositionScaleChanged, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::SwapChainPanel_CompositionScaleChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SwapChainPanelGenerated::add_CompositionScaleChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::SwapChainPanel*, IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CompositionScaleChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompositionScaleChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SwapChainPanelGenerated::remove_CompositionScaleChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CompositionScaleChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::SwapChainPanel*, IInspectable*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::SwapChainPanel*, IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompositionScaleChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::SwapChainPanel_CompositionScaleChanged));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::SwapChainPanelGenerated::CreateCoreIndependentInputSource(_In_ ABI::Microsoft::UI::Input::InputPointerSourceDeviceKinds deviceKinds, _Outptr_ ABI::Microsoft::UI::Input::IInputPointerSource** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "SwapChainPanel_CreateCoreIndependentInputSource", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    *ppReturnValue={};
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SwapChainPanel*>(this)->CreateCoreIndependentInputSourceImpl(deviceKinds, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "SwapChainPanel_CreateCoreIndependentInputSource", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::SwapChainPanelFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanelFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanelFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanelStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanelStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::SwapChainPanelFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanel** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISwapChainPanel);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::SwapChainPanelFactory::get_CompositionScaleXProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SwapChainPanel_CompositionScaleX, ppValue));
}
IFACEMETHODIMP DirectUI::SwapChainPanelFactory::get_CompositionScaleYProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SwapChainPanel_CompositionScaleY, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SwapChainPanel()
    {
        RRETURN(ctl::ActivationFactoryCreator<SwapChainPanelFactory>::CreateActivationFactory());
    }
}
