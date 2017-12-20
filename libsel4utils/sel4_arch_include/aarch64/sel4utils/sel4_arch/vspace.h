/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2018, DornerWorks
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_BSD)
 */

#pragma once

#ifndef CONFIG_ARM_HYPERVISOR_SUPPORT
#define KERNEL_RESERVED_START 0x00007ffffffff000
#else
#define KERNEL_RESERVED_START 0x0000007ffffff000
#endif

#define VSPACE_MAP_PAGING_OBJECTS 5

#define VSPACE_LEVEL_BITS 9
#ifndef CONFIG_ARM_HYPERVISOR_SUPPORT
#define VSPACE_NUM_LEVELS 4
#else
#define VSPACE_NUM_LEVELS 3
#endif
