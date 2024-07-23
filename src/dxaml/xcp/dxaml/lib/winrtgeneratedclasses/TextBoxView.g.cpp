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

#include "TextBoxView.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::TextBoxViewGenerated::TextBoxViewGenerated()
{
}

DirectUI::TextBoxViewGenerated::~TextBoxViewGenerated()
{
}

HRESULT DirectUI::TextBoxViewGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextBoxView)))
    {
        *ppObject = static_cast<DirectUI::TextBoxView*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IScrollInfo)))
    {
        *ppObject = static_cast<DirectUI::IScrollInfo*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_CanHorizontallyScroll(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_CanHorizontallyScrollImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::put_CanHorizontallyScroll(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->put_CanHorizontallyScrollImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_CanVerticallyScroll(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_CanVerticallyScrollImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::put_CanVerticallyScroll(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->put_CanVerticallyScrollImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_ExtentHeight(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_ExtentHeightImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_ExtentWidth(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_ExtentWidthImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_HorizontalOffset(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_HorizontalOffsetImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_MinHorizontalOffset(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_MinHorizontalOffsetImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_MinVerticalOffset(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_MinVerticalOffsetImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_ScrollOwner(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_ScrollOwnerImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::put_ScrollOwner(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->put_ScrollOwnerImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_VerticalOffset(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_VerticalOffsetImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_ViewportHeight(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_ViewportHeightImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::get_ViewportWidth(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<TextBoxView*>(this)->get_ViewportWidthImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::LineDown()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_LineDown", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->LineDownImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_LineDown", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::LineLeft()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_LineLeft", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->LineLeftImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_LineLeft", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::LineRight()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_LineRight", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->LineRightImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_LineRight", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::LineUp()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_LineUp", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->LineUpImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_LineUp", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::MakeVisible(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pVisual, _In_ ABI::Windows::Foundation::Rect rectangle, _In_ BOOLEAN useAnimation, _In_ DOUBLE horizontalAlignmentRatio, _In_ DOUBLE verticalAlignmentRatio, _In_ DOUBLE offsetX, _In_ DOUBLE offsetY, _Out_ ABI::Windows::Foundation::Rect* pResultRectangle, _Out_ DOUBLE* pAppliedOffsetX, _Out_ DOUBLE* pAppliedOffsetY)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_MakeVisible", 0);
    }
    ARG_NOTNULL(pVisual, "visual");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->MakeVisibleImpl(pVisual, rectangle, useAnimation, horizontalAlignmentRatio, verticalAlignmentRatio, offsetX, offsetY, pResultRectangle, pAppliedOffsetX, pAppliedOffsetY));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_MakeVisible", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::PageDown()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_PageDown", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->PageDownImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_PageDown", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::PageLeft()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_PageLeft", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->PageLeftImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_PageLeft", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::PageRight()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_PageRight", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->PageRightImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_PageRight", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::PageUp()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_PageUp", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->PageUpImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_PageUp", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::SetHorizontalOffset(_In_ DOUBLE offset)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_SetHorizontalOffset", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->SetHorizontalOffsetImpl(offset));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_SetHorizontalOffset", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextBoxViewGenerated::SetVerticalOffset(_In_ DOUBLE offset)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "TextBoxView_SetVerticalOffset", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<TextBoxView*>(this)->SetVerticalOffsetImpl(offset));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "TextBoxView_SetVerticalOffset", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}
