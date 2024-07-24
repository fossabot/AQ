// Copyright 2024 AQ author, All Rights Reserved.
// This program is licensed under the AQ License. You can find the AQ license in
// the root directory.

#include "aq/aq.h"

#include <stdio.h>

#include "aqvm/aqvm.h"
#include "aqvm/runtime/debugger/debugger.h"

int main(int argc, char *argv[]) {
  // TODO(Aqvm): Finish this function after completing AQVM development.
  AqvmRuntimeDebugger_OutputReport("\"INFO\"", "\"main_Start\"",
                                   "\"Aq main program has been started.\"",
                                   NULL);
  if (Aqvm_InitVm() != 0) {
    AqvmRuntimeDebugger_OutputReport("\"ERROR\"", "\"main_InitVmError\"",
                                     "\"Initializing Aqvm met error.\"", NULL);
    return -1;
  }
  return 0;
}