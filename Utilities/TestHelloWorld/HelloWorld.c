/** @file
  Copyright (c) 2020, PMheart. All rights reserved.
  SPDX-License-Identifier: BSD-3-Clause
**/

#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>

STATIC
EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  DEBUG ((DEBUG_ERROR, "Hello world\n"));
  return EFI_SUCCESS;
}

INT32
ENTRY_POINT (
  IN INT32        Argc,
  IN CONST CHAR8  *Argv[]
  )
{
  UefiMain (gImageHandle, gST);

  return 0;
}
