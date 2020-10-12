# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2020, MayaData Inc. All rights reserved.
# Copyright (c) 2020, DataCore Software Corporation. All rights reserved.

# Copy the headers to the build directory to implement the exclude list.

includes += include_directories('.')

foreach h : eal_headers
	if not eal_exclude_list.contains(h)
		if h.startswith('rte_') or not eal_exclude_list.contains('*')
			configure_file(copy: true, input: join_paths('..', h), output: h)
		endif
	endif
endforeach

if not eal_exclude_list.contains('*')
	subdir('netinet')
	subdir('sys')
endif
