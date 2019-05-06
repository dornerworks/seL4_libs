/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

/* CPU model specific register (MSR) numbers.
 *     Authors:
 *         Qian Ge
 */

#pragma once

/* Intel MSRs. Some also available on other CPUs */

#define MSR_IA32_PERFCTR0       0x000000c1
#define MSR_IA32_PERFCTR1       0x000000c2
#define MSR_FSB_FREQ            0x000000cd
#define MSR_NHM_PLATFORM_INFO       0x000000ce

#define MSR_NHM_SNB_PKG_CST_CFG_CTL 0x000000e2
#define NHM_C3_AUTO_DEMOTE      (1UL << 25)
#define NHM_C1_AUTO_DEMOTE      (1UL << 26)
#define ATM_LNC_C6_AUTO_DEMOTE      (1UL << 25)
#define SNB_C1_AUTO_UNDEMOTE        (1UL << 27)
#define SNB_C3_AUTO_UNDEMOTE        (1UL << 28)

#define MSR_MTRRcap         0x000000fe
#define MSR_IA32_BBL_CR_CTL     0x00000119
#define MSR_IA32_BBL_CR_CTL3        0x0000011e

#define MSR_IA32_SYSENTER_CS        0x00000174
#define MSR_IA32_SYSENTER_ESP       0x00000175
#define MSR_IA32_SYSENTER_EIP       0x00000176

#define MSR_IA32_MCG_CAP        0x00000179
#define MSR_IA32_MCG_STATUS     0x0000017a
#define MSR_IA32_MCG_CTL        0x0000017b

#define MSR_OFFCORE_RSP_0       0x000001a6
#define MSR_OFFCORE_RSP_1       0x000001a7
#define MSR_NHM_TURBO_RATIO_LIMIT   0x000001ad
#define MSR_IVT_TURBO_RATIO_LIMIT   0x000001ae

#define MSR_LBR_SELECT          0x000001c8
#define MSR_LBR_TOS         0x000001c9
#define MSR_LBR_NHM_FROM        0x00000680
#define MSR_LBR_NHM_TO          0x000006c0
#define MSR_LBR_CORE_FROM       0x00000040
#define MSR_LBR_CORE_TO         0x00000060

#define MSR_IA32_PEBS_ENABLE        0x000003f1
#define MSR_IA32_DS_AREA        0x00000600
#define MSR_IA32_PERF_CAPABILITIES  0x00000345

#define MSR_MTRRfix64K_00000        0x00000250
#define MSR_MTRRfix16K_80000        0x00000258
#define MSR_MTRRfix16K_A0000        0x00000259
#define MSR_MTRRfix4K_C0000     0x00000268
#define MSR_MTRRfix4K_C8000     0x00000269
#define MSR_MTRRfix4K_D0000     0x0000026a
#define MSR_MTRRfix4K_D8000     0x0000026b
#define MSR_MTRRfix4K_E0000     0x0000026c
#define MSR_MTRRfix4K_E8000     0x0000026d
#define MSR_MTRRfix4K_F0000     0x0000026e
#define MSR_MTRRfix4K_F8000     0x0000026f
#define MSR_MTRRdefType         0x000002ff

#define MSR_IA32_CR_PAT         0x00000277

#define MSR_IA32_DEBUGCTLMSR        0x000001d9
#define MSR_IA32_LASTBRANCHFROMIP   0x000001db
#define MSR_IA32_LASTBRANCHTOIP     0x000001dc
#define MSR_IA32_LASTINTFROMIP      0x000001dd
#define MSR_IA32_LASTINTTOIP        0x000001de

/* DEBUGCTLMSR bits (others vary by model): */
#define DEBUGCTLMSR_LBR         (1UL <<  0) /* last branch recording */
#define DEBUGCTLMSR_BTF         (1UL <<  1) /* single-step on branches */
#define DEBUGCTLMSR_TR          (1UL <<  6)
#define DEBUGCTLMSR_BTS         (1UL <<  7)
#define DEBUGCTLMSR_BTINT       (1UL <<  8)
#define DEBUGCTLMSR_BTS_OFF_OS      (1UL <<  9)
#define DEBUGCTLMSR_BTS_OFF_USR     (1UL << 10)
#define DEBUGCTLMSR_FREEZE_LBRS_ON_PMI  (1UL << 11)

#define MSR_IA32_MC0_CTL        0x00000400
#define MSR_IA32_MC0_STATUS     0x00000401
#define MSR_IA32_MC0_ADDR       0x00000402
#define MSR_IA32_MC0_MISC       0x00000403

/* C-state Residency Counters */
#define MSR_PKG_C3_RESIDENCY        0x000003f8
#define MSR_PKG_C6_RESIDENCY        0x000003f9
#define MSR_PKG_C7_RESIDENCY        0x000003fa
#define MSR_CORE_C3_RESIDENCY       0x000003fc
#define MSR_CORE_C6_RESIDENCY       0x000003fd
#define MSR_CORE_C7_RESIDENCY       0x000003fe
#define MSR_PKG_C2_RESIDENCY        0x0000060d

/* Run Time Average Power Limiting (RAPL) Interface */

#define MSR_RAPL_POWER_UNIT     0x00000606

#define MSR_PKG_POWER_LIMIT     0x00000610
#define MSR_PKG_ENERGY_STATUS       0x00000611
#define MSR_PKG_PERF_STATUS     0x00000613
#define MSR_PKG_POWER_INFO      0x00000614

#define MSR_DRAM_POWER_LIMIT        0x00000618
#define MSR_DRAM_ENERGY_STATUS      0x00000619
#define MSR_DRAM_PERF_STATUS        0x0000061b
#define MSR_DRAM_POWER_INFO     0x0000061c

#define MSR_PP0_POWER_LIMIT     0x00000638
#define MSR_PP0_ENERGY_STATUS       0x00000639
#define MSR_PP0_POLICY          0x0000063a
#define MSR_PP0_PERF_STATUS     0x0000063b

#define MSR_PP1_POWER_LIMIT     0x00000640
#define MSR_PP1_ENERGY_STATUS       0x00000641
#define MSR_PP1_POLICY          0x00000642

#define MSR_AMD64_MC0_MASK      0xc0010044

#define MSR_IA32_MCx_CTL(x)     (MSR_IA32_MC0_CTL + 4*(x))
#define MSR_IA32_MCx_STATUS(x)      (MSR_IA32_MC0_STATUS + 4*(x))
#define MSR_IA32_MCx_ADDR(x)        (MSR_IA32_MC0_ADDR + 4*(x))
#define MSR_IA32_MCx_MISC(x)        (MSR_IA32_MC0_MISC + 4*(x))

#define MSR_AMD64_MCx_MASK(x)       (MSR_AMD64_MC0_MASK + (x))

/* These are consecutive and not in the normal 4er MCE bank block */
#define MSR_IA32_MC0_CTL2       0x00000280
#define MSR_IA32_MCx_CTL2(x)        (MSR_IA32_MC0_CTL2 + (x))

#define MSR_P6_PERFCTR0         0x000000c1
#define MSR_P6_PERFCTR1         0x000000c2
#define MSR_P6_EVNTSEL0         0x00000186
#define MSR_P6_EVNTSEL1         0x00000187

#define MSR_KNC_PERFCTR0               0x00000020
#define MSR_KNC_PERFCTR1               0x00000021
#define MSR_KNC_EVNTSEL0               0x00000028
#define MSR_KNC_EVNTSEL1               0x00000029

/* Intel VT MSRs */
#define MSR_IA32_VMX_BASIC              0x00000480
#define MSR_IA32_VMX_PINBASED_CTLS      0x00000481
#define MSR_IA32_VMX_PROCBASED_CTLS     0x00000482
#define MSR_IA32_VMX_EXIT_CTLS          0x00000483
#define MSR_IA32_VMX_ENTRY_CTLS         0x00000484
#define MSR_IA32_VMX_MISC               0x00000485
#define MSR_IA32_VMX_CR0_FIXED0         0x00000486
#define MSR_IA32_VMX_CR0_FIXED1         0x00000487
#define MSR_IA32_VMX_CR4_FIXED0         0x00000488
#define MSR_IA32_VMX_CR4_FIXED1         0x00000489
#define MSR_IA32_VMX_VMCS_ENUM          0x0000048a
#define MSR_IA32_VMX_PROCBASED_CTLS2    0x0000048b
#define MSR_IA32_VMX_EPT_VPID_CAP       0x0000048c
#define MSR_IA32_VMX_TRUE_PINBASED_CTLS  0x0000048d
#define MSR_IA32_VMX_TRUE_PROCBASED_CTLS 0x0000048e
#define MSR_IA32_VMX_TRUE_EXIT_CTLS      0x0000048f
#define MSR_IA32_VMX_TRUE_ENTRY_CTLS     0x00000490

/* VMX_BASIC bits and bitmasks */
#define VMX_BASIC_VMCS_SIZE_SHIFT   32
#define VMX_BASIC_64        0x0001000000000000LLU
#define VMX_BASIC_MEM_TYPE_SHIFT    50
#define VMX_BASIC_MEM_TYPE_MASK 0x003c000000000000LLU
#define VMX_BASIC_MEM_TYPE_WB   6LLU
#define VMX_BASIC_INOUT     0x0040000000000000LLU

/* Intel defined MSRs. */
#define MSR_IA32_P5_MC_ADDR     0x00000000
#define MSR_IA32_P5_MC_TYPE     0x00000001
#define MSR_IA32_TSC            0x00000010
#define MSR_IA32_PLATFORM_ID        0x00000017
#define MSR_IA32_EBL_CR_POWERON     0x0000002a
#define MSR_EBC_FREQUENCY_ID        0x0000002c
#define MSR_IA32_FEATURE_CONTROL        0x0000003a
#define MSR_IA32_TSC_ADJUST             0x0000003b

#define FEATURE_CONTROL_LOCKED              (1<<0)
#define FEATURE_CONTROL_VMXON_ENABLED_INSIDE_SMX    (1<<1)
#define FEATURE_CONTROL_VMXON_ENABLED_OUTSIDE_SMX   (1<<2)

#define MSR_IA32_APICBASE       0x0000001b
#define MSR_IA32_APICBASE_BSP       (1<<8)
#define MSR_IA32_APICBASE_ENABLE    (1<<11)
#define MSR_IA32_APICBASE_BASE      (0xfffff<<12)

#define MSR_IA32_TSCDEADLINE        0x000006e0

#define MSR_IA32_UCODE_WRITE        0x00000079
#define MSR_IA32_UCODE_REV      0x0000008b

#define MSR_IA32_PERF_STATUS        0x00000198
#define MSR_IA32_PERF_CTL       0x00000199
#define MSR_IA32_PERF_GLOBAL_STATUS_SET     0x00000391
#define MSR_AMD_PSTATE_DEF_BASE     0xc0010064
#define MSR_AMD_PERF_STATUS     0xc0010063
#define MSR_AMD_PERF_CTL        0xc0010062

#define MSR_IA32_MPERF          0x000000e7
#define MSR_IA32_APERF          0x000000e8

#define MSR_IA32_THERM_CONTROL      0x0000019a
#define MSR_IA32_THERM_INTERRUPT    0x0000019b

#define THERM_INT_HIGH_ENABLE       (BIT(0))
#define THERM_INT_LOW_ENABLE        (BIT(1))
#define THERM_INT_PLN_ENABLE        (BIT(24))

#define MSR_IA32_THERM_STATUS       0x0000019c

#define THERM_STATUS_PROCHOT        (BIT(0))
#define THERM_STATUS_POWER_LIMIT    (BIT(10))

#define MSR_THERM2_CTL          0x0000019d

#define MSR_THERM2_CTL_TM_SELECT    (1ULL << 16)

#define MSR_IA32_MISC_ENABLE        0x000001a0

#define MSR_IA32_TEMPERATURE_TARGET 0x000001a2

#define MSR_IA32_ENERGY_PERF_BIAS   0x000001b0
#define ENERGY_PERF_BIAS_PERFORMANCE    0
#define ENERGY_PERF_BIAS_NORMAL     6
#define ENERGY_PERF_BIAS_POWERSAVE  15

#define MSR_IA32_PACKAGE_THERM_STATUS       0x000001b1

#define PACKAGE_THERM_STATUS_PROCHOT        (BIT(0))
#define PACKAGE_THERM_STATUS_POWER_LIMIT    (BIT(10))

#define MSR_IA32_PACKAGE_THERM_INTERRUPT    0x000001b2

#define PACKAGE_THERM_INT_HIGH_ENABLE       (BIT(0))
#define PACKAGE_THERM_INT_LOW_ENABLE        (BIT(1))
#define PACKAGE_THERM_INT_PLN_ENABLE        (BIT(24))

/* Thermal Thresholds Support */
#define THERM_INT_THRESHOLD0_ENABLE    (BIT(15))
#define THERM_SHIFT_THRESHOLD0        8
#define THERM_MASK_THRESHOLD0          (0x7f << THERM_SHIFT_THRESHOLD0)
#define THERM_INT_THRESHOLD1_ENABLE    (BIT(23))
#define THERM_SHIFT_THRESHOLD1        16
#define THERM_MASK_THRESHOLD1          (0x7f << THERM_SHIFT_THRESHOLD1)
#define THERM_STATUS_THRESHOLD0        (BIT(6))
#define THERM_LOG_THRESHOLD0           (BIT(7))
#define THERM_STATUS_THRESHOLD1        (BIT(8))
#define THERM_LOG_THRESHOLD1           (BIT(9))

/* MISC_ENABLE bits: architectural */
#define MSR_IA32_MISC_ENABLE_FAST_STRING    (1ULL << 0)
#define MSR_IA32_MISC_ENABLE_TCC        (1ULL << 1)
#define MSR_IA32_MISC_ENABLE_EMON       (1ULL << 7)
#define MSR_IA32_MISC_ENABLE_BTS_UNAVAIL    (1ULL << 11)
#define MSR_IA32_MISC_ENABLE_PEBS_UNAVAIL   (1ULL << 12)
#define MSR_IA32_MISC_ENABLE_ENHANCED_SPEEDSTEP (1ULL << 16)
#define MSR_IA32_MISC_ENABLE_MWAIT      (1ULL << 18)
#define MSR_IA32_MISC_ENABLE_LIMIT_CPUID    (1ULL << 22)
#define MSR_IA32_MISC_ENABLE_XTPR_DISABLE   (1ULL << 23)
#define MSR_IA32_MISC_ENABLE_XD_DISABLE     (1ULL << 34)

/* MISC_ENABLE bits: model-specific, meaning may vary from core to core */
#define MSR_IA32_MISC_ENABLE_X87_COMPAT     (1ULL << 2)
#define MSR_IA32_MISC_ENABLE_TM1        (1ULL << 3)
#define MSR_IA32_MISC_ENABLE_SPLIT_LOCK_DISABLE (1ULL << 4)
#define MSR_IA32_MISC_ENABLE_L3CACHE_DISABLE    (1ULL << 6)
#define MSR_IA32_MISC_ENABLE_SUPPRESS_LOCK  (1ULL << 8)
#define MSR_IA32_MISC_ENABLE_PREFETCH_DISABLE   (1ULL << 9)
#define MSR_IA32_MISC_ENABLE_FERR       (1ULL << 10)
#define MSR_IA32_MISC_ENABLE_FERR_MULTIPLEX (1ULL << 10)
#define MSR_IA32_MISC_ENABLE_TM2        (1ULL << 13)
#define MSR_IA32_MISC_ENABLE_ADJ_PREF_DISABLE   (1ULL << 19)
#define MSR_IA32_MISC_ENABLE_SPEEDSTEP_LOCK (1ULL << 20)
#define MSR_IA32_MISC_ENABLE_L1D_CONTEXT    (1ULL << 24)
#define MSR_IA32_MISC_ENABLE_DCU_PREF_DISABLE   (1ULL << 37)
#define MSR_IA32_MISC_ENABLE_TURBO_DISABLE  (1ULL << 38)
#define MSR_IA32_MISC_ENABLE_IP_PREF_DISABLE    (1ULL << 39)

#define MSR_IA32_TSC_DEADLINE       0x000006E0

/* x86-64 specific MSRs */
#define MSR_EFER            0xc0000080 /* extended feature register */
#define MSR_STAR            0xc0000081 /* legacy mode SYSCALL target */
#define MSR_LSTAR           0xc0000082 /* long mode SYSCALL target */
#define MSR_CSTAR           0xc0000083 /* compat mode SYSCALL target */
#define MSR_SYSCALL_MASK    0xc0000084 /* EFLAGS mask for syscall */
#define MSR_FS_BASE         0xc0000100 /* 64bit FS base */
#define MSR_GS_BASE         0xc0000101 /* 64bit GS base */
#define MSR_SHADOW_GS_BASE  0xc0000102 /* SwapGS GS shadow */
#define MSR_TSC_AUX         0xc0000103 /* Auxiliary TSC */
