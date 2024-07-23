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

#include "IsApiContractPresent.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::IsApiContractPresentGenerated::IsApiContractPresentGenerated()
{
}

DirectUI::IsApiContractPresentGenerated::~IsApiContractPresentGenerated()
{
}

HRESULT DirectUI::IsApiContractPresentGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IsApiContractPresent)))
    {
        *ppObject = static_cast<DirectUI::IsApiContractPresent*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IXamlPredicate)))
    {
        *ppObject = static_cast<DirectUI::IXamlPredicate*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::IsApiContractPresentGenerated::Evaluate(_In_ ABI::Windows::Foundation::Collections::IVectorView<HSTRING>* pArguments, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "IsApiContractPresent_Evaluate", 0);
    }
    ARG_NOTNULL(pArguments, "arguments");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    *pReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<IsApiContractPresent*>(this)->EvaluateImpl(pArguments, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "IsApiContractPresent_Evaluate", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}
