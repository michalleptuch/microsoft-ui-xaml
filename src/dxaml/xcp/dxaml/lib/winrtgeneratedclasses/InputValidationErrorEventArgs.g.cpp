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

#include "precomp.h"
#include "InputValidationErrorEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::InputValidationErrorEventArgs::InputValidationErrorEventArgs()
{
}

DirectUI::InputValidationErrorEventArgs::~InputValidationErrorEventArgs()
{
}

HRESULT DirectUI::InputValidationErrorEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::InputValidationErrorEventArgs)))
    {
        *ppObject = static_cast<DirectUI::InputValidationErrorEventArgs*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_InputValidation)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IInputValidationErrorEventArgs)) && Feature_InputValidation::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IInputValidationErrorEventArgs*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::InputValidationErrorEventArgs::get_Action(_Out_ ABI::Microsoft::UI::Xaml::Controls::InputValidationErrorEventAction* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::InputValidationErrorEventAction valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CInputValidationErrorEventArgs*>(pCoreEventArgsNoRef)->get_Action(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::InputValidationErrorEventArgs::put_Action(_In_ ABI::Microsoft::UI::Xaml::Controls::InputValidationErrorEventAction value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::InputValidationErrorEventAction valueCore = static_cast<DirectUI::InputValidationErrorEventAction>(value);

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CInputValidationErrorEventArgs*>(pCoreEventArgsNoRef)->put_Action(valueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::InputValidationErrorEventArgs::get_Error(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationError** ppValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    IUnknown* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CInputValidationErrorEventArgs*>(pCoreEventArgsNoRef)->get_Error(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::InputValidationErrorEventArgs::put_Error(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IInputValidationError* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    IUnknown* pValueCore = pValue;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CInputValidationErrorEventArgs*>(pCoreEventArgsNoRef)->put_Error(pValueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.

// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateInputValidationErrorEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::InputValidationErrorEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_InputValidationErrorEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<InputValidationErrorEventArgsFactory>::CreateActivationFactory());
    }
}