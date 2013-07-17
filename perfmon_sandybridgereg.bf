#
# Intel(R) 64 and IA-32 Architectures Software Developer’s Manual
# Order Number: 325462-046US
# March 2013
#

#
# 18.8
# PERFORMANCE MONITORING FOR PROCESSORS BASED ON INTEL® MICROARCHITECTURE
# CODE NAME SANDY BRIDGE
#

#
# 18.8.1
# Global Counter Control Facilities In Intel(R) Microarchitecture
# Code Name Sandy Bridge
#

#
# Figure 18-26.
# IA32_PERF_GLOBAL_CTRL MSR in Intel® Microarchitecture Code Name Sandy Bridge
#
prefix	IA32_PERF_GLOBAL_CTRL
endian	little
size	64
1	PMC0_EN
1	PMC1_EN
1	PMC2_EN
1	PMC3_EN
1	PMC4_EN
1	PMC5_EN
1	PMC6_EN
1	PMC7_EN
24
1	FIXED_CTR0_EN
1	FIXED_CTR1_EN
1	FIXED_CTR2_EN
29

#
# Figure 18-27.
# IA32_PERF_GLOBAL_STATUS MSR in Intel(R) Microarchitecture Code Name Sandy Bridge
#
prefix	IA32_PERF_GLOBAL_STATUS
endian	little
size	64
1	PMC0_OVF
1	PMC1_OVF
1	PMC2_OVF
1	PMC3_OVF
1	PMC4_OVF
1	PMC5_OVF
1	PMC6_OVF
1	PMC7_OVF
24
1	FIXED_CTR0_OVF
1	FIXED_CTR1_OVF
1	FIXED_CTR2_OVF
27
1	OvfBuffer
1	CondChgd

#
# Figure 18-28.
# IA32_PERF_GLOBAL_OVF_CTRL MSR in Intel microarchitecture code name Sandy Bridge
#
prefix	IA32_PERF_GLOBAL_OVF_CTRL
endian	little
size	64
1	PMC0_CLROVF
1	PMC1_CLROVF
1	PMC2_CLROVF
1	PMC3_CLROVF
1	PMC4_CLROVF
1	PMC5_CLROVF
1	PMC6_CLROVF
1	PMC7_CLROVF
24
1	FIXED_CTR0_CLROVF
1	FIXED_CTR1_CLROVF
1	FIXED_CTR2_CLROVF
27
1	ClrOvfBuffer
1	ClrEondChgd

#
# 18.8.4
# PEBS Support in Intel(R) Microarchitecture Code Name Sandy Bridge
#

#
# Figure 18-29.
# Layout of IA32_PEBS_ENABLE MSR 
#
prefix	IA32_PEBS_ENABLE
endian	little
size	64
1	PEBS_EN_PMC0
1	PEBS_EN_PMC1
1	PEBS_EN_PMC2
1	PEBS_EN_PMC3
28
1	LL_EN_PMC0
1	LL_EN_PMC1
1	LL_EN_PMC2
1	LL_EN_PMC3
27
1	PS_EN

#
# 18.8.5
# Off-core Response Performance Monitoring
#

#
# Figure 18-30.
# Request_Type Fields for MSR_OFFCORE_RSP_x
#
# Figure 18-31.
# Response_Supplier and Snoop Info Fields for MSR_OFFCORE_RSP_x
#
prefix	MSR_OFFCORE_RSP_x
endian	little
size	64
1	DMND_DATA_RD
1	DMND_RFO
1	DMND_IFETCH
1	WB
1	PF_DATA_RD
1	PF_RFO
1	PF_IFETCH
1	PF_LLC_DATA_RD
1	PF_LLC_RFO
1	PF_LLC_IFETCH
1	BUS_LOCKS
1	STRM_ST
3
1	OTHER
1	RSPNS_SUPPLIER_ANY
1	RSPNS_SUPPLIER_NO_SUPP
1	RSPNS_SUPPLIER_LLC_HITM
1	RSPNS_SUPPLIER_LLC_HITE
1	RSPNS_SUPPLIER_LLC_HITS
1	RSPNS_SUPPLIER_LLC_HITF
1	RSPNS_SUPPLIER_LOCAL
8
1	RSPNS_SNOOP_SNPI_NONE
1	RSPNS_SNOOP_NOT_NEEDED
1	RSPNS_SNOOP_MISS
1	RSPNS_SNOOP_HIT_NO_FWD
1	RSPNS_SNOOP_HIT_FWD
1	RSPNS_SNOOP_HITM
1	RESPONSE_TYPE_NON_DRAM
26

#
# 18.8.6
# Uncore Performance Monitoring Facilities In
# Intel(R) CoreTM i7-2xxx, Intel(R) CoreTM i5- 2xxx,
# Intel(R) CoreTM i3-2xxx Processor Series
#

#
# Figure 18-32.
# Layout of Uncore PERFEVTSEL MSR for a C-Box Unit or the ARB Unit
#
prefix	PERFEVSEL
endian	little
size	64
8	EVENT_SELECT
8	UNIT_MASK
2
1	E
1
1	OVF_EN
1
1	EN
1	INV
5	CMASK
3
32

#
# Figure 18-33.
# Layout of MSR_UNC_PERF_GLOBAL_CTRL MSR for Uncore
#
prefix	MSR_UNC_PERF_GLOBAL_CTRL
endian	little
size	64
1	PMI_Sel_Core0
1	PMI_Sel_Core1
1	PMI_Sel_Core2
1	PMI_Sel_Core3
25
1	EN
1	WakePMI
1	FREEZE
32
