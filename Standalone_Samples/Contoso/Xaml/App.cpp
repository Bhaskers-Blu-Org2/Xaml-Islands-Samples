﻿#include "pch.h"

#include "App.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Contoso::Xaml::implementation
{
    App::App()
    {
        Initialize();

        AddRef();
        m_inner.as<::IUnknown>()->Release();
    }

    App::~App()
    {
        Close();
    }
}