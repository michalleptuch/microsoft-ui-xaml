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

#pragma once

#include "Span.g.h"

#define __Italic_GUID "625d6594-1d04-472b-8de7-7266fd7a6918"

namespace DirectUI
{
    class Italic;

    class __declspec(novtable) __declspec(uuid(__Italic_GUID)) Italic:
        public DirectUI::Span
        , public ABI::Microsoft::UI::Xaml::Documents::IItalic
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Documents.Italic");

        BEGIN_INTERFACE_MAP(Italic, DirectUI::Span)
            INTERFACE_ENTRY(Italic, ABI::Microsoft::UI::Xaml::Documents::IItalic)
        END_INTERFACE_MAP(Italic, DirectUI::Span)

    public:
        Italic();
        ~Italic() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Italic;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Italic;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}

