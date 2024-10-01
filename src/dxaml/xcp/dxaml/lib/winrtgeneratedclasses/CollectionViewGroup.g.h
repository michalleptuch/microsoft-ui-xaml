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


#define __CollectionViewGroup_GUID "d0133ca0-2b26-41cc-b566-5fae3a65aa65"

namespace DirectUI
{
    class CollectionViewGroup;

    class __declspec(novtable) CollectionViewGroupGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Data::ICollectionViewGroup
        , public ABI::Microsoft::UI::Xaml::Data::ICustomPropertyProvider
    {
        friend class DirectUI::CollectionViewGroup;


        BEGIN_INTERFACE_MAP(CollectionViewGroupGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(CollectionViewGroupGenerated, ABI::Microsoft::UI::Xaml::Data::ICollectionViewGroup)
            INTERFACE_ENTRY(CollectionViewGroupGenerated, ABI::Microsoft::UI::Xaml::Data::ICustomPropertyProvider)
        END_INTERFACE_MAP(CollectionViewGroupGenerated, DirectUI::DependencyObject)

    public:
        CollectionViewGroupGenerated();
        ~CollectionViewGroupGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CollectionViewGroup;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CollectionViewGroup;
        }

        // Properties.
        IFACEMETHOD(get_Group)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(get_GroupItems)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<IInspectable*>** ppValue) override;
        IFACEMETHOD(get_Type)(_Out_ ABI::Windows::UI::Xaml::Interop::TypeName* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(GetCustomProperty)(_In_ HSTRING name, _Outptr_ ABI::Microsoft::UI::Xaml::Data::ICustomProperty** ppReturnValue) override;
        IFACEMETHOD(GetIndexedProperty)(_In_ HSTRING name, _In_ ABI::Windows::UI::Xaml::Interop::TypeName type, _Outptr_ ABI::Microsoft::UI::Xaml::Data::ICustomProperty** ppReturnValue) override;
        IFACEMETHOD(GetStringRepresentation)(_Out_ HSTRING* pReturnValue) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "CollectionViewGroup_Partial.h"
