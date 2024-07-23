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

#include "DebugSettings.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::DebugSettingsGenerated::DebugSettingsGenerated()
{
}

DirectUI::DebugSettingsGenerated::~DebugSettingsGenerated()
{
}

HRESULT DirectUI::DebugSettingsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DebugSettings)))
    {
        *ppObject = static_cast<DirectUI::DebugSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDebugSettings)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IDebugSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDebugSettings2)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IDebugSettings2>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDebugSettings3)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IDebugSettings3>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::get_EnableFrameRateCounter(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_EnableFrameRateCounterImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::put_EnableFrameRateCounter(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_EnableFrameRateCounterImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::get_FailFastOnErrors(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_FailFastOnErrorsImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::put_FailFastOnErrors(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_FailFastOnErrorsImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::get_IsBindingTracingEnabled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_IsBindingTracingEnabledImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::put_IsBindingTracingEnabled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_IsBindingTracingEnabledImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::get_IsTextPerformanceVisualizationEnabled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_IsTextPerformanceVisualizationEnabledImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DebugSettingsGenerated::put_IsTextPerformanceVisualizationEnabled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_IsTextPerformanceVisualizationEnabledImpl(value));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::get_IsXamlResourceReferenceTracingEnabled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_IsXamlResourceReferenceTracingEnabledImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::put_IsXamlResourceReferenceTracingEnabled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_IsXamlResourceReferenceTracingEnabledImpl(value));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::get_LayoutCycleDebugBreakLevel(_Out_ ABI::Microsoft::UI::Xaml::LayoutCycleDebugBreakLevel* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_LayoutCycleDebugBreakLevelImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::put_LayoutCycleDebugBreakLevel(_In_ ABI::Microsoft::UI::Xaml::LayoutCycleDebugBreakLevel value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_LayoutCycleDebugBreakLevelImpl(value));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::get_LayoutCycleTracingLevel(_Out_ ABI::Microsoft::UI::Xaml::LayoutCycleTracingLevel* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    
    IFC(static_cast<DebugSettings*>(this)->get_LayoutCycleTracingLevelImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::put_LayoutCycleTracingLevel(_In_ ABI::Microsoft::UI::Xaml::LayoutCycleTracingLevel value)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<DebugSettings*>(this)->put_LayoutCycleTracingLevelImpl(value));
Cleanup:
    RRETURN(hr);
}

// Events.
_Check_return_ HRESULT DirectUI::DebugSettingsGenerated::GetBindingFailedEventSourceNoRef(_Outptr_ BindingFailedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::DebugSettings_BindingFailed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<BindingFailedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::DebugSettings_BindingFailed, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::DebugSettings_BindingFailed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::DebugSettingsGenerated::add_BindingFailed(_In_ ABI::Microsoft::UI::Xaml::IBindingFailedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    BindingFailedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetBindingFailedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::DebugSettingsGenerated::remove_BindingFailed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    BindingFailedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IBindingFailedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IBindingFailedEventHandler*)tToken.value;

    IFC(DefaultStrictApiCheck(this));
    IFC(GetBindingFailedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::DebugSettings_BindingFailed));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::DebugSettingsGenerated::GetXamlResourceReferenceFailedEventSourceNoRef(_Outptr_ XamlResourceReferenceFailedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::DebugSettings_XamlResourceReferenceFailed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<XamlResourceReferenceFailedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::DebugSettings_XamlResourceReferenceFailed, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::DebugSettings_XamlResourceReferenceFailed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::add_XamlResourceReferenceFailed(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::DebugSettings*, ABI::Microsoft::UI::Xaml::XamlResourceReferenceFailedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    XamlResourceReferenceFailedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetXamlResourceReferenceFailedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DebugSettingsGenerated::remove_XamlResourceReferenceFailed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    XamlResourceReferenceFailedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::DebugSettings*, ABI::Microsoft::UI::Xaml::XamlResourceReferenceFailedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::DebugSettings*, ABI::Microsoft::UI::Xaml::XamlResourceReferenceFailedEventArgs*>*)tToken.value;

    IFC(DefaultStrictApiCheck(this));
    IFC(GetXamlResourceReferenceFailedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::DebugSettings_XamlResourceReferenceFailed));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DebugSettings()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::DebugSettings));
    }
}
