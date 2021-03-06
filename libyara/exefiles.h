/*
Copyright (c) 2007. The YARA Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef YR_EXEFILES_H
#define YR_EXEFILES_H

int yr_file_is_pe(
		uint8_t* buffer,
		size_t buffer_length);


int yr_file_is_elf(
		uint8_t* buffer,
		size_t buffer_length);


uint64_t yr_get_entry_point_offset(
		uint8_t* buffer,
		size_t buffer_length);


uint64_t yr_get_entry_point_address(
		uint8_t* buffer,
		size_t buffer_length,
		size_t base_address);

#endif

