/**
 * @file  ClipBoard.h
 *
 * @brief ClipBoard helper functions definitions.
 */
// ID line follows -- this is updated by SVN
// $Id$

#ifndef _CLIPBOARD_H_
#define _CLIPBOARD_H_

#include <windows.h>
#include "UnicodeString.h"

bool PutToClipboard(const String & text, HWND currentWindowHandle);
bool GetFromClipboard(String & text, HWND currentWindowHandle);

#endif // _CLIPBOARD_H_