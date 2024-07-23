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

#include "XamlUICommand.g.h"
#include "IconSource.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::XamlUICommandGenerated::XamlUICommandGenerated()
{
}

DirectUI::XamlUICommandGenerated::~XamlUICommandGenerated()
{
}

HRESULT DirectUI::XamlUICommandGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlUICommand)))
    {
        *ppObject = static_cast<DirectUI::XamlUICommand*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IXamlUICommand)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IXamlUICommand*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::ICommand)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::ICommand*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_AccessKey(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_AccessKey, pValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::put_AccessKey(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_AccessKey, value));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_Command(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::ICommand** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Command, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::put_Command(_In_opt_ ABI::Microsoft::UI::Xaml::Input::ICommand* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Command, pValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_Description(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Description, pValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::put_Description(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Description, value));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_IconSource(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IIconSource** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_IconSource, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::put_IconSource(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IIconSource* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_IconSource, pValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_KeyboardAccelerators(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Input::KeyboardAccelerator*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_KeyboardAccelerators, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::get_Label(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Label, pValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::put_Label(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlUICommand_Label, value));
}

// Events.
_Check_return_ HRESULT DirectUI::XamlUICommandGenerated::GetCanExecuteChangedEventSourceNoRef(_Outptr_ CanExecuteChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::XamlUICommand_CanExecuteChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CanExecuteChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::XamlUICommand_CanExecuteChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::XamlUICommand_CanExecuteChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::add_CanExecuteChanged(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CanExecuteChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCanExecuteChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::remove_CanExecuteChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CanExecuteChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue = (ABI::Windows::Foundation::IEventHandler<IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCanExecuteChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::XamlUICommand_CanExecuteChanged));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::XamlUICommandGenerated::GetCanExecuteRequestedEventSourceNoRef(_Outptr_ CanExecuteRequestedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::XamlUICommand_CanExecuteRequested, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CanExecuteRequestedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::XamlUICommand_CanExecuteRequested, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::XamlUICommand_CanExecuteRequested, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::add_CanExecuteRequested(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::CanExecuteRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CanExecuteRequestedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCanExecuteRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::remove_CanExecuteRequested(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CanExecuteRequestedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::CanExecuteRequestedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::CanExecuteRequestedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCanExecuteRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::XamlUICommand_CanExecuteRequested));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::XamlUICommandGenerated::GetExecuteRequestedEventSourceNoRef(_Outptr_ ExecuteRequestedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::XamlUICommand_ExecuteRequested, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ExecuteRequestedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::XamlUICommand_ExecuteRequested, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::XamlUICommand_ExecuteRequested, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::add_ExecuteRequested(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::ExecuteRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ExecuteRequestedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetExecuteRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlUICommandGenerated::remove_ExecuteRequested(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ExecuteRequestedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::ExecuteRequestedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Input::XamlUICommand*, ABI::Microsoft::UI::Xaml::Input::ExecuteRequestedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetExecuteRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::XamlUICommand_ExecuteRequested));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::CanExecute(_In_opt_ IInspectable* pParameter, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlUICommand_CanExecute", 0);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    *pReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlUICommand*>(this)->CanExecuteImpl(pParameter, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlUICommand_CanExecute", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::Execute(_In_opt_ IInspectable* pParameter)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlUICommand_Execute", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlUICommand*>(this)->ExecuteImpl(pParameter));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlUICommand_Execute", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlUICommandGenerated::NotifyCanExecuteChanged()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlUICommand_NotifyCanExecuteChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlUICommand*>(this)->NotifyCanExecuteChangedImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlUICommand_NotifyCanExecuteChanged", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::XamlUICommandFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IXamlUICommandFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IXamlUICommandFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IXamlUICommandStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IXamlUICommandStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::XamlUICommandFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Input::IXamlUICommand** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Input::IXamlUICommand);
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
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_LabelProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_Label, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_IconSourceProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_IconSource, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_KeyboardAcceleratorsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_KeyboardAccelerators, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_AccessKeyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_AccessKey, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_DescriptionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_Description, ppValue));
}
IFACEMETHODIMP DirectUI::XamlUICommandFactory::get_CommandProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlUICommand_Command, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlUICommand()
    {
        RRETURN(ctl::ActivationFactoryCreator<XamlUICommandFactory>::CreateActivationFactory());
    }
}
