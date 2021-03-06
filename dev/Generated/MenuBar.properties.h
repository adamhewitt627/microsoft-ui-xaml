// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class MenuBarProperties
{
public:
    MenuBarProperties();

    void Items(winrt::IVector<winrt::MenuBarItem> const& value);
    winrt::IVector<winrt::MenuBarItem> Items();

    static winrt::DependencyProperty ItemsProperty() { return s_ItemsProperty; }

    static GlobalDependencyProperty s_ItemsProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
