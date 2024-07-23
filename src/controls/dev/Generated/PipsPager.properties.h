// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class PipsPagerProperties
{
public:
    PipsPagerProperties();

    void MaxVisiblePips(int value);
    int MaxVisiblePips();

    void NextButtonStyle(winrt::Style const& value);
    winrt::Style NextButtonStyle();

    void NextButtonVisibility(winrt::PipsPagerButtonVisibility const& value);
    winrt::PipsPagerButtonVisibility NextButtonVisibility();

    void NormalPipStyle(winrt::Style const& value);
    winrt::Style NormalPipStyle();

    void NumberOfPages(int value);
    int NumberOfPages();

    void Orientation(winrt::Orientation const& value);
    winrt::Orientation Orientation();

    void PreviousButtonStyle(winrt::Style const& value);
    winrt::Style PreviousButtonStyle();

    void PreviousButtonVisibility(winrt::PipsPagerButtonVisibility const& value);
    winrt::PipsPagerButtonVisibility PreviousButtonVisibility();

    void SelectedPageIndex(int value);
    int SelectedPageIndex();

    void SelectedPipStyle(winrt::Style const& value);
    winrt::Style SelectedPipStyle();

    void TemplateSettings(winrt::PipsPagerTemplateSettings const& value);
    winrt::PipsPagerTemplateSettings TemplateSettings();

    void WrapMode(winrt::PipsPagerWrapMode const& value);
    winrt::PipsPagerWrapMode WrapMode();

    static winrt::DependencyProperty MaxVisiblePipsProperty() { return s_MaxVisiblePipsProperty; }
    static winrt::DependencyProperty NextButtonStyleProperty() { return s_NextButtonStyleProperty; }
    static winrt::DependencyProperty NextButtonVisibilityProperty() { return s_NextButtonVisibilityProperty; }
    static winrt::DependencyProperty NormalPipStyleProperty() { return s_NormalPipStyleProperty; }
    static winrt::DependencyProperty NumberOfPagesProperty() { return s_NumberOfPagesProperty; }
    static winrt::DependencyProperty OrientationProperty() { return s_OrientationProperty; }
    static winrt::DependencyProperty PreviousButtonStyleProperty() { return s_PreviousButtonStyleProperty; }
    static winrt::DependencyProperty PreviousButtonVisibilityProperty() { return s_PreviousButtonVisibilityProperty; }
    static winrt::DependencyProperty SelectedPageIndexProperty() { return s_SelectedPageIndexProperty; }
    static winrt::DependencyProperty SelectedPipStyleProperty() { return s_SelectedPipStyleProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }
    static winrt::DependencyProperty WrapModeProperty() { return s_WrapModeProperty; }

    static GlobalDependencyProperty s_MaxVisiblePipsProperty;
    static GlobalDependencyProperty s_NextButtonStyleProperty;
    static GlobalDependencyProperty s_NextButtonVisibilityProperty;
    static GlobalDependencyProperty s_NormalPipStyleProperty;
    static GlobalDependencyProperty s_NumberOfPagesProperty;
    static GlobalDependencyProperty s_OrientationProperty;
    static GlobalDependencyProperty s_PreviousButtonStyleProperty;
    static GlobalDependencyProperty s_PreviousButtonVisibilityProperty;
    static GlobalDependencyProperty s_SelectedPageIndexProperty;
    static GlobalDependencyProperty s_SelectedPipStyleProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;
    static GlobalDependencyProperty s_WrapModeProperty;

    winrt::event_token SelectedIndexChanged(winrt::TypedEventHandler<winrt::PipsPager, winrt::PipsPagerSelectedIndexChangedEventArgs> const& value);
    void SelectedIndexChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::PipsPager, winrt::PipsPagerSelectedIndexChangedEventArgs>> m_selectedIndexChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnMaxVisiblePipsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnNextButtonStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnNextButtonVisibilityPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnNormalPipStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnNumberOfPagesPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnOrientationPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPreviousButtonStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPreviousButtonVisibilityPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedPageIndexPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedPipStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTemplateSettingsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnWrapModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
