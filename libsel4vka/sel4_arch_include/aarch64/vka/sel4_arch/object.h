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

#include <vka/vka.h>
#include <vka/kobject_t.h>
#include <utils/util.h>

/*resource allocation interfaces for virtual machine extensions on ARM */
#ifdef CONFIG_ARM_HYPERVISOR_SUPPORT
static inline int vka_alloc_vcpu(vka_t *vka, vka_object_t *result)
{
    return vka_alloc_object(vka, seL4_ARM_VCPUObject, seL4_ARM_VCPUBits, result);
}

LEAKY(vcpu)
#endif


static inline int vka_alloc_page_global_directory(vka_t *vka, vka_object_t *result)
{
    return vka_alloc_object(vka, kobject_get_type(KOBJECT_PAGE_GLOBAL_DIRECTORY, 0), seL4_PGDBits, result);
}

static inline int vka_alloc_page_upper_directory(vka_t *vka, vka_object_t *result)
{
    return vka_alloc_object(vka, kobject_get_type(KOBJECT_PAGE_UPPER_DIRECTORY, 0), seL4_PUDBits, result);
}

LEAKY(page_global_directory)
LEAKY(page_upper_directory)

static inline int vka_alloc_vspace_root(vka_t *vka, vka_object_t *result)
{
#ifdef CONFIG_START_L1
    return vka_alloc_page_upper_directory(vka, result);
#endif
    return vka_alloc_page_global_directory(vka, result);
}

/*
 * Get the size (in bits) of the untyped memory required to create an object of
 * the given size.
 */
static inline unsigned long
vka_arm_mode_get_object_size(seL4_Word objectType)
{
    switch (objectType) {
    case seL4_ARM_HugePageObject:
        return seL4_HugePageBits;
    case seL4_ARM_PageGlobalDirectoryObject:
        return seL4_PGDBits;
    case seL4_ARM_PageUpperDirectoryObject:
        return seL4_PUDBits;
#ifdef CONFIG_ARM_HYPERVISOR_SUPPORT
    case seL4_ARM_VCPUObject:
        return seL4_ARM_VCPUBits;
#endif
    default:
        /* Unknown object type. */
        ZF_LOGF("Unknown object type");
        return -1;
    }
}
