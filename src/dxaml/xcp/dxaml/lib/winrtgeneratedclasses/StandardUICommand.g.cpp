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

#include "StandardUICommand.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::StandardUICommandGenerated::StandardUICommandGenerated()
{
}

DirectUI::StandardUICommandGenerated::~StandardUICommandGenerated()
{
}

HRESULT DirectUI::StandardUICommandGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::StandardUICommand)))
    {
        *ppObject = static_cast<DirectUI::StandardUICommand*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IStandardUICommand)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IStandardUICommand*>(this);
    }
    else
    {
        RRETURN(DirectUI::XamlUICommand::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::StandardUICommandGenerated::get_Kind(_Out_ ABI::Microsoft::UI::Xaml::Input::StandardUICommandKind* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::StandardUICommand_Kind, pValue));
}
IFACEMETHODIMP DirectUI::StandardUICommandGenerated::put_Kind(_In_ ABI::Microsoft::UI::Xaml::Input::StandardUICommandKind value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::StandardUICommand_Kind, value));
}

// Events.

// Methods.

HRESULT DirectUI::StandardUICommandFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IStandardUICommandFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IStandardUICommandFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IStandardUICommandStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IStandardUICommandStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::StandardUICommandFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Input::IStandardUICommand** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Input::IStandardUICommand);
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
IFACEMETHODIMP DirectUI::StandardUICommandFactory::CreateInstanceWithKind(_In_ ABI::Microsoft::UI::Xaml::Input::StandardUICommandKind kind, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Input::IStandardUICommand** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithKindImpl(kind, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.


// Attached properties.

// Static properties.
IFACEMETHODIMP DirectUI::StandardUICommandFactory::get_KindProperty(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckActivationAllowed());
    IFC(get_KindPropertyImpl(ppValue));
Cleanup:
    RRETURN(hr);
}

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_StandardUICommand()
    {
        RRETURN(ctl::ActivationFactoryCreator<StandardUICommandFactory>::CreateActivationFactory());
    }
}
