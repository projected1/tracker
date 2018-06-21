// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "tracker/browser/root_window.h"

#include "tracker/browser/main_context.h"
#include "tracker/browser/root_window_manager.h"

namespace client {

RootWindowConfig::RootWindowConfig()
    : with_controls(false),
      with_osr(false),
      with_extension(false),
      initially_hidden(false),
      url(MainContext::Get()->GetMainURL()) {}

RootWindow::RootWindow() : delegate_(NULL) {}

RootWindow::~RootWindow() {}

// static
scoped_refptr<RootWindow> RootWindow::GetForBrowser(int browser_id) {
  return MainContext::Get()->GetRootWindowManager()->GetWindowForBrowser(
      browser_id);
}

void RootWindow::OnExtensionsChanged(const ExtensionSet& extensions) {
  REQUIRE_MAIN_THREAD();
  DCHECK(delegate_);
  DCHECK(!WithExtension());

  if (extensions.empty())
    return;

  ExtensionSet::const_iterator it = extensions.begin();
  for (; it != extensions.end(); ++it) {
    delegate_->CreateExtensionWindow(*it, CefRect(), NULL, base::Closure(),
                                     WithWindowlessRendering());
  }
}

}  // namespace client
