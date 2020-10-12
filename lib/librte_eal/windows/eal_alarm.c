/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2010-2018 Intel Corporation
 */

#include <rte_alarm.h>

#include "eal_private.h"


int
rte_eal_alarm_init(void)
{
	// HACK - not implemented
	return 0;
}


int
rte_eal_alarm_set(uint64_t us, rte_eal_alarm_callback cb_fn, void *cb_arg)
{
	UNREFERENCED_PARAMETER(us);
	UNREFERENCED_PARAMETER(cb_fn);
	UNREFERENCED_PARAMETER(cb_arg);

	// HACK - not implemented
	return 0;
}

int
rte_eal_alarm_cancel(rte_eal_alarm_callback cb_fn, void *cb_arg)
{
	UNREFERENCED_PARAMETER(cb_fn);
	UNREFERENCED_PARAMETER(cb_arg);

	// HACK - not implemented
	return 0;
}