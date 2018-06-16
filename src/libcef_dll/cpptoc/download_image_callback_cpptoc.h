// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=e278af7b477bed934723e93d749e7e154b0e6c96$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_DOWNLOAD_IMAGE_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_DOWNLOAD_IMAGE_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_client_capi.h"
#include "include/cef_browser.h"
#include "include/cef_client.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefDownloadImageCallbackCppToC
    : public CefCppToCRefCounted<CefDownloadImageCallbackCppToC,
                                 CefDownloadImageCallback,
                                 cef_download_image_callback_t> {
 public:
  CefDownloadImageCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_DOWNLOAD_IMAGE_CALLBACK_CPPTOC_H_
