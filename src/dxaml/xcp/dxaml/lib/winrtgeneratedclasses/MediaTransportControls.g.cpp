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

#include "MediaTransportControls.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::MediaTransportControlsGenerated::MediaTransportControlsGenerated()
{
}

DirectUI::MediaTransportControlsGenerated::~MediaTransportControlsGenerated()
{
}

HRESULT DirectUI::MediaTransportControlsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MediaTransportControls)))
    {
        *ppObject = static_cast<DirectUI::MediaTransportControls*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControls)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControls>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener)))
    {
        *ppObject = static_cast<ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_FastPlayFallbackBehaviour(_Out_ ABI::Microsoft::UI::Xaml::Media::FastPlayFallbackBehaviour* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_FastPlayFallbackBehaviour, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_FastPlayFallbackBehaviour(_In_ ABI::Microsoft::UI::Xaml::Media::FastPlayFallbackBehaviour value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_FastPlayFallbackBehaviour, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsCompact(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsCompact, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsCompact(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsCompact, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsFastForwardButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastForwardButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsFastForwardButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastForwardButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsFastForwardEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastForwardEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsFastForwardEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastForwardEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsFastRewindButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastRewindButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsFastRewindButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastRewindButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsFastRewindEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastRewindEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsFastRewindEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsFastRewindEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsNextTrackButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsNextTrackButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsNextTrackButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsNextTrackButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsPlaybackRateButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsPlaybackRateButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsPlaybackRateEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsPlaybackRateEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsPreviousTrackButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPreviousTrackButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsPreviousTrackButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsPreviousTrackButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsRepeatButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsRepeatButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsRepeatButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsRepeatButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsRepeatEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsRepeatEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsRepeatEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsRepeatEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSeekBarVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSeekBarVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSeekBarVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSeekBarVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSeekEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSeekEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSeekEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSeekEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSkipBackwardButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSkipBackwardButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSkipBackwardEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSkipBackwardEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSkipForwardButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipForwardButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSkipForwardButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipForwardButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsSkipForwardEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipForwardEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsSkipForwardEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsSkipForwardEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsStopButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsStopButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsStopButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsStopButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsStopEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsStopEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsStopEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsStopEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsVolumeButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsVolumeButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsVolumeButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsVolumeButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsVolumeEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsVolumeEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsVolumeEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsVolumeEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsZoomButtonVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsZoomButtonVisible, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsZoomButtonVisible(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsZoomButtonVisible, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_IsZoomEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsZoomEnabled, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_IsZoomEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_IsZoomEnabled, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::get_ShowAndHideAutomatically(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_ShowAndHideAutomatically, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::put_ShowAndHideAutomatically(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaTransportControls_ShowAndHideAutomatically, value));
}

// Events.
_Check_return_ HRESULT DirectUI::MediaTransportControlsGenerated::GetThumbnailRequestedEventSourceNoRef(_Outptr_ ThumbnailRequestedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::MediaTransportControls_ThumbnailRequested, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ThumbnailRequestedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::MediaTransportControls_ThumbnailRequested, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::MediaTransportControls_ThumbnailRequested, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::add_ThumbnailRequested(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::MediaTransportControls*, ABI::Microsoft::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ThumbnailRequestedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetThumbnailRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::remove_ThumbnailRequested(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ThumbnailRequestedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::MediaTransportControls*, ABI::Microsoft::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::MediaTransportControls*, ABI::Microsoft::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetThumbnailRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::MediaTransportControls_ThumbnailRequested));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::Hide()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MediaTransportControls_Hide", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MediaTransportControls*>(this)->HideImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MediaTransportControls_Hide", hr);
    }
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::OnBackButtonPressed(_Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MediaTransportControls_OnBackButtonPressed", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    *pResult={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MediaTransportControls*>(this)->OnBackButtonPressedImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MediaTransportControls_OnBackButtonPressed", hr);
    }
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaTransportControlsGenerated::Show()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MediaTransportControls_Show", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MediaTransportControls*>(this)->ShowImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MediaTransportControls_Show", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::MediaTransportControlsGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::MediaTransportControls_ThumbnailRequested:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::MediaTransportControls*, ABI::Microsoft::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                ThumbnailRequestedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetThumbnailRequestedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::MediaTransportControlsGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::MediaTransportControls_ThumbnailRequested:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::MediaTransportControls*, ABI::Microsoft::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ThumbnailRequestedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetThumbnailRequestedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::MediaTransportControlsFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControlsFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControlsFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControlsStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControlsStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControls** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaTransportControls);
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
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsZoomButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsZoomButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsZoomEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsZoomEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsFastForwardButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsFastForwardButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsFastForwardEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsFastForwardEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsFastRewindButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsFastRewindButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsFastRewindEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsFastRewindEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsStopButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsStopButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsStopEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsStopEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsVolumeButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsVolumeButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsVolumeEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsVolumeEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsPlaybackRateButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsPlaybackRateEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsPlaybackRateEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSeekBarVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSeekBarVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSeekEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSeekEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsCompactProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsCompact, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSkipForwardButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSkipForwardButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSkipForwardEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSkipForwardEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSkipBackwardButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsSkipBackwardEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsSkipBackwardEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsNextTrackButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsNextTrackButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsPreviousTrackButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsPreviousTrackButtonVisible, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_FastPlayFallbackBehaviourProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_FastPlayFallbackBehaviour, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_ShowAndHideAutomaticallyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_ShowAndHideAutomatically, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsRepeatEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsRepeatEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MediaTransportControlsFactory::get_IsRepeatButtonVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaTransportControls_IsRepeatButtonVisible, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_MediaTransportControls()
    {
        RRETURN(ctl::ActivationFactoryCreator<MediaTransportControlsFactory>::CreateActivationFactory());
    }
}
