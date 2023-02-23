// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#pragma once

#if defined(__cplusplus) && !LUA_COMPILE_AS_CPP
extern "C" {
#endif

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

#if LUA_VERSION_NUM==501
#include "compat-5.3.h"

#ifndef LUA_GNAME
#define LUA_GNAME "_G"
#endif

#ifndef MAXUPVAL
#define MAXUPVAL 255
#endif

#endif

#if defined(__cplusplus) && !LUA_COMPILE_AS_CPP
}
#endif
