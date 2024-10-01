// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ItemsSourceView.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithBasicFactory(ItemsSourceView)
}

#include "ItemsSourceView.g.cpp"


ItemsSourceViewProperties::ItemsSourceViewProperties()
    : m_collectionChangedEventSource{static_cast<ItemsSourceView*>(this)}
{
}

void ItemsSourceViewProperties::EnsureProperties()
{
}

void ItemsSourceViewProperties::ClearProperties()
{
}

winrt::event_token ItemsSourceViewProperties::CollectionChanged(winrt::NotifyCollectionChangedEventHandler const& value)
{
    return m_collectionChangedEventSource.add(value);
}

void ItemsSourceViewProperties::CollectionChanged(winrt::event_token const& token)
{
    m_collectionChangedEventSource.remove(token);
}