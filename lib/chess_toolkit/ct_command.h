/*
 * Chess Toolkit: a software library for creating chess programs
 * Copyright (C) 2013 Steve Ortiz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CT_COMMAND_H
#define CT_COMMAND_H

#include "ct_types.h"

CtCommand ct_command_new(void *delegate, CtCommandMethod method);
void ct_command_free(CtCommand command);

CtCommandStruct ct_command_make(void *delegate, CtCommandMethod method);

void ct_command_execute(CtCommand command);

#endif                                /* CT_COMMAND_H */
