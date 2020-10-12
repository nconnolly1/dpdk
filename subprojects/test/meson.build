# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2020, MayaData Inc. All rights reserved.
# Copyright (c) 2020, DataCore Software Corporation. All rights reserved.

project('TEST', 'C',
	version: '0.0.0',
	license: 'BSD',
	default_options: ['buildtype=release','default_library=static'],
	meson_version: '>= 0.47.1'
)

cc = meson.get_compiler('c')

includes = include_directories('.')

eal_header_files =[
	'pthread.h',
	'sched.h',
]

test_static_dep = declare_dependency(
	include_directories : includes,
	link_args : [ '-lws2_32', '-lrpcrt4' ],
)

test_shared_dep = declare_dependency(
	include_directories : includes,
	link_args : [ '-lws2_32', '-lrpcrt4' ],
)

test_dep = test_static_dep
