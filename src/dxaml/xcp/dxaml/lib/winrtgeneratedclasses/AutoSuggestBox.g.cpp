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

#include "AutoSuggestBox.g.h"
#include "DataTemplate.g.h"
#include "IconElement.g.h"
#include "InputValidationCommand.g.h"
#include "InputValidationContext.g.h"
#include "Style.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::AutoSuggestBoxGenerated::AutoSuggestBoxGenerated()
{
}

DirectUI::AutoSuggestBoxGenerated::~AutoSuggestBoxGenerated()
{
}

HRESULT DirectUI::AutoSuggestBoxGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AutoSuggestBox)))
    {
        *ppObject = static_cast<DirectUI::AutoSuggestBox*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBox)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBox*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxFeature_HeaderPlacement)) && Feature_HeaderPlacement::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxFeature_HeaderPlacement*>(this);
    }
#endif
#if WI_IS_FEATURE_PRESENT(Feature_InputValidation)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl2)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl2*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::ItemsControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_AutoMaximizeSuggestionArea(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_AutoMaximizeSuggestionArea, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_AutoMaximizeSuggestionArea(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_AutoMaximizeSuggestionArea, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_Description(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Description, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_Description(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Description, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_ErrorTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ErrorTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_ErrorTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ErrorTemplate, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_HasValidationErrors(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_HasValidationErrors, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_Header(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Header, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_Header(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Header, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_HeaderPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_HeaderPlacement, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_HeaderPlacement(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_HeaderPlacement, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_InputValidationKind(_Out_ ABI::Microsoft::UI::Xaml::Controls::InputValidationKind* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_InputValidationKind, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_InputValidationKind(_In_ ABI::Microsoft::UI::Xaml::Controls::InputValidationKind value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_InputValidationKind, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_InputValidationMode(_Out_ ABI::Microsoft::UI::Xaml::Controls::InputValidationMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_InputValidationMode, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_InputValidationMode(_In_ ABI::Microsoft::UI::Xaml::Controls::InputValidationMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_InputValidationMode, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_IsSuggestionListOpen(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_IsSuggestionListOpen, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_IsSuggestionListOpen(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_IsSuggestionListOpen, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_LightDismissOverlayMode(_Out_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_LightDismissOverlayMode, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_LightDismissOverlayMode(_In_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_LightDismissOverlayMode, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_MaxSuggestionListHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_MaxSuggestionListHeight, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_MaxSuggestionListHeight(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_MaxSuggestionListHeight, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_PlaceholderText(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_PlaceholderText, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_PlaceholderText(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_PlaceholderText, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_QueryIcon(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_QueryIcon, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_QueryIcon(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IIconElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_QueryIcon, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_Text(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Text, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_Text(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_Text, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_TextBoxStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_TextBoxStyle, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_TextBoxStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_TextBoxStyle, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_TextMemberPath(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_TextMemberPath, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_TextMemberPath(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_TextMemberPath, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_UpdateTextOnSelect(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_UpdateTextOnSelect, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_UpdateTextOnSelect(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_UpdateTextOnSelect, value));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_ValidationCommand(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationCommand** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ValidationCommand, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_ValidationCommand(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationCommand* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ValidationCommand, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_ValidationContext(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationContext** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ValidationContext, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::put_ValidationContext(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationContext* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ValidationContext, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::get_ValidationErrors(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<ABI::Microsoft::UI::Xaml::Controls::InputValidationError*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBox_ValidationErrors, ppValue));
}

// Events.
#if WI_IS_FEATURE_PRESENT(Feature_InputValidation)
_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::GetHasValidationErrorsChangedEventSourceNoRef(_Outptr_ HasValidationErrorsChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::AutoSuggestBox_HasValidationErrorsChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<HasValidationErrorsChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::AutoSuggestBox_HasValidationErrorsChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::AutoSuggestBox_HasValidationErrorsChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::add_HasValidationErrorsChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::HasValidationErrorsChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    HasValidationErrorsChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetHasValidationErrorsChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::remove_HasValidationErrorsChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    HasValidationErrorsChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::HasValidationErrorsChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::HasValidationErrorsChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetHasValidationErrorsChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::AutoSuggestBox_HasValidationErrorsChanged));
    }

Cleanup:
    RRETURN(hr);
}
#endif
_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::GetQuerySubmittedEventSourceNoRef(_Outptr_ QuerySubmittedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::AutoSuggestBox_QuerySubmitted, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<QuerySubmittedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::AutoSuggestBox_QuerySubmitted, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::AutoSuggestBox_QuerySubmitted, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::add_QuerySubmitted(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    QuerySubmittedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetQuerySubmittedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::remove_QuerySubmitted(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    QuerySubmittedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetQuerySubmittedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::AutoSuggestBox_QuerySubmitted));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::GetSuggestionChosenEventSourceNoRef(_Outptr_ SuggestionChosenEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::AutoSuggestBox_SuggestionChosen, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<SuggestionChosenEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::AutoSuggestBox_SuggestionChosen, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::AutoSuggestBox_SuggestionChosen, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::add_SuggestionChosen(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    SuggestionChosenEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSuggestionChosenEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::remove_SuggestionChosen(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    SuggestionChosenEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSuggestionChosenEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::AutoSuggestBox_SuggestionChosen));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::GetTextChangedEventSourceNoRef(_Outptr_ TextChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::AutoSuggestBox_TextChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<TextChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::AutoSuggestBox_TextChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::AutoSuggestBox_TextChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::add_TextChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    TextChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetTextChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::remove_TextChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    TextChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetTextChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::AutoSuggestBox_TextChanged));
    }

Cleanup:
    RRETURN(hr);
}
#if WI_IS_FEATURE_PRESENT(Feature_InputValidation)
_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::GetValidationErrorEventSourceNoRef(_Outptr_ ValidationErrorEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::AutoSuggestBox_ValidationError, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ValidationErrorEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::AutoSuggestBox_ValidationError, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::AutoSuggestBox_ValidationError, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::add_ValidationError(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::InputValidationErrorEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ValidationErrorEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetValidationErrorEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::AutoSuggestBoxGenerated::remove_ValidationError(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ValidationErrorEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::InputValidationErrorEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::IInputValidationControl*, ABI::Microsoft::UI::Xaml::Controls::InputValidationErrorEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetValidationErrorEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::AutoSuggestBox_ValidationError));
    }

Cleanup:
    RRETURN(hr);
}
#endif

// Methods.

_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::AutoSuggestBox_QuerySubmitted:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                QuerySubmittedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetQuerySubmittedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::AutoSuggestBox_SuggestionChosen:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                SuggestionChosenEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSuggestionChosenEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::AutoSuggestBox_TextChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                TextChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetTextChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ItemsControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::AutoSuggestBoxGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::AutoSuggestBox_QuerySubmitted:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                QuerySubmittedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetQuerySubmittedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::AutoSuggestBox_SuggestionChosen:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                SuggestionChosenEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSuggestionChosenEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::AutoSuggestBox_TextChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBox*, ABI::Microsoft::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                TextChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetTextChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ItemsControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::AutoSuggestBoxFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxStatics*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxStaticsFeature_HeaderPlacement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxStaticsFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_MaxSuggestionListHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_MaxSuggestionListHeight, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_IsSuggestionListOpenProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_IsSuggestionListOpen, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_TextMemberPathProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_TextMemberPath, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_TextProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_Text, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_UpdateTextOnSelectProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_UpdateTextOnSelect, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_PlaceholderTextProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_PlaceholderText, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_HeaderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_Header, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_AutoMaximizeSuggestionAreaProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_AutoMaximizeSuggestionArea, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_TextBoxStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_TextBoxStyle, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_QueryIconProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_QueryIcon, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_LightDismissOverlayModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_LightDismissOverlayMode, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_DescriptionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_Description, ppValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxFactory::get_HeaderPlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBox_HeaderPlacement, ppValue));
}








// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AutoSuggestBox()
    {
        RRETURN(ctl::ActivationFactoryCreator<AutoSuggestBoxFactory>::CreateActivationFactory());
    }
}
