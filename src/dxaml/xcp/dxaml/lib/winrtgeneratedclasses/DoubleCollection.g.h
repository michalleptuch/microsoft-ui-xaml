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


#define __DoubleCollection_GUID "5e54181a-5b45-4480-b620-dac941726ed4"

namespace DirectUI
{
    class DoubleCollection;

    class __declspec(novtable) __declspec(uuid(__DoubleCollection_GUID)) DoubleCollection:
        public DirectUI::PresentationFrameworkCollection<DOUBLE>
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.DoubleCollection");


    public:
        DoubleCollection();
        ~DoubleCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DoubleCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DoubleCollection;
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

