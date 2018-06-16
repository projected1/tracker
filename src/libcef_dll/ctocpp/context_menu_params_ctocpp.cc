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
// $hash=3135a7e1229fdd3fe6fe93580c1af3e0ac1aab32$
//

#include "libcef_dll/ctocpp/context_menu_params_ctocpp.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

int CefContextMenuParamsCToCpp::GetXCoord() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_xcoord))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_xcoord(_struct);

  // Return type: simple
  return _retval;
}

int CefContextMenuParamsCToCpp::GetYCoord() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_ycoord))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_ycoord(_struct);

  // Return type: simple
  return _retval;
}

CefContextMenuParams::TypeFlags CefContextMenuParamsCToCpp::GetTypeFlags() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type_flags))
    return CM_TYPEFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_type_flags_t _retval = _struct->get_type_flags(_struct);

  // Return type: simple
  return _retval;
}

CefString CefContextMenuParamsCToCpp::GetLinkUrl() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetUnfilteredLinkUrl() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_unfiltered_link_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_unfiltered_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetSourceUrl() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_source_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_source_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefContextMenuParamsCToCpp::HasImageContents() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_image_contents))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_image_contents(_struct);

  // Return type: bool
  return _retval ? true : false;
}

CefString CefContextMenuParamsCToCpp::GetTitleText() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_title_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_title_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetPageUrl() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_page_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_page_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetFrameUrl() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_frame_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetFrameCharset() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_charset))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_frame_charset(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefContextMenuParams::MediaType CefContextMenuParamsCToCpp::GetMediaType() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_media_type))
    return CM_MEDIATYPE_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_media_type_t _retval = _struct->get_media_type(_struct);

  // Return type: simple
  return _retval;
}

CefContextMenuParams::MediaStateFlags
CefContextMenuParamsCToCpp::GetMediaStateFlags() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_media_state_flags))
    return CM_MEDIAFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_media_state_flags_t _retval =
      _struct->get_media_state_flags(_struct);

  // Return type: simple
  return _retval;
}

CefString CefContextMenuParamsCToCpp::GetSelectionText() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selection_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefContextMenuParamsCToCpp::GetMisspelledWord() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_misspelled_word))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_misspelled_word(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefContextMenuParamsCToCpp::GetDictionarySuggestions(
    std::vector<CefString>& suggestions) {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_dictionary_suggestions))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: suggestions; type: string_vec_byref
  cef_string_list_t suggestionsList = cef_string_list_alloc();
  DCHECK(suggestionsList);
  if (suggestionsList)
    transfer_string_list_contents(suggestions, suggestionsList);

  // Execute
  int _retval = _struct->get_dictionary_suggestions(_struct, suggestionsList);

  // Restore param:suggestions; type: string_vec_byref
  if (suggestionsList) {
    suggestions.clear();
    transfer_string_list_contents(suggestionsList, suggestions);
    cef_string_list_free(suggestionsList);
  }

  // Return type: bool
  return _retval ? true : false;
}

bool CefContextMenuParamsCToCpp::IsEditable() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_editable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_editable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefContextMenuParamsCToCpp::IsSpellCheckEnabled() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_spell_check_enabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_spell_check_enabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

CefContextMenuParams::EditStateFlags
CefContextMenuParamsCToCpp::GetEditStateFlags() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_edit_state_flags))
    return CM_EDITFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_edit_state_flags_t _retval =
      _struct->get_edit_state_flags(_struct);

  // Return type: simple
  return _retval;
}

bool CefContextMenuParamsCToCpp::IsCustomMenu() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_custom_menu))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_custom_menu(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefContextMenuParamsCToCpp::IsPepperMenu() {
  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_pepper_menu))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_pepper_menu(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefContextMenuParamsCToCpp::CefContextMenuParamsCToCpp() {}

template <>
cef_context_menu_params_t* CefCToCppRefCounted<
    CefContextMenuParamsCToCpp,
    CefContextMenuParams,
    cef_context_menu_params_t>::UnwrapDerived(CefWrapperType type,
                                              CefContextMenuParams* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefContextMenuParamsCToCpp,
                                         CefContextMenuParams,
                                         cef_context_menu_params_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefContextMenuParamsCToCpp,
                                   CefContextMenuParams,
                                   cef_context_menu_params_t>::kWrapperType =
    WT_CONTEXT_MENU_PARAMS;
