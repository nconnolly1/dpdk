# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2020, MayaData Inc. All rights reserved.
# Copyright (c) 2020, DataCore Software Corporation. All rights reserved.

# Copy the headers to the build directory to implement the exclude list.

includes += include_directories('.')

foreach h : eal_netinet_headers
	if not eal_exclude_list.contains('netinet/' + h)
		configure_file(copy: true, input: join_paths('../../netinet', h), output: h)
	endif
endforeach
