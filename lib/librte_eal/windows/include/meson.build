# SPDX-License-Identifier: BSD-3-Clause
# Copyright 2020 Mellanox Technologies, Ltd

eal_headers = [
        'rte_os.h',
        'rte_virt2phys.h',
        'rte_windows.h',
]

headers += files(eal_headers)

eal_headers += [
        'dirent.h',
        'fnmatch.h',
        'getopt.h',
        'pthread.h',
        'regex.h',
        'sched.h',
        'unistd.h',
]

eal_sys_headers = [
        'queue.h',
]

eal_netinet_headers = [
        'in.h',
        'ip.h',
]

if eal_exclude_list.length() == 0
        includes += include_directories('.')
else
        subdir('eal')
endif
