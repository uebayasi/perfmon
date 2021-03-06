#
# Intel(R) 64 and IA-32 Architectures Software Developer�fs Manual
# Order Number: 325462-046US
# March 2013
#

#
# 18.6
# PERFORMANCE MONITORING FOR PROCESSORS
# BASED ON INTEL(R) MICROARCHITECTURE CODE NAME NEHALEM
#

#
# Figure 18-14. IA32_PERF_GLOBAL_STATUS MSR
#
prefix	IA32_PERF_GLOBAL_STATUS
endian	little
size	64
1	OVF_PC0
1	OVF_PC1
1	OVF_PC2
1	OVF_PC3
1	OVF_PC4
1	OVF_PC5
1	OVF_PC6
1	OVF_PC7
24
1	OVF_FC0
1	OVF_FC1
1	OVF_FC2
26
1	OVF_PMI
1
1	CHG

#
# Figure 18-15. Layout of IA32_PEBS_ENABLE MSR
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
28

#
# Table 18-12. PEBS Record Format for Intel Core i7 Processor Family
#
prefix	PEBS
endian	little
size	1408
64	EFLAGS
64	EIP
64	EAX
64	EBX
64	ECX
64	EDX
64	ESI
64	EDI
64	EBP
64	ESP
64	R8
64	R9
64	R10
64	R11
64	R12
64	R13
64	R14
64	R15
64	IA32_PERF_GLOBAL_STATUS
64	DATA_LINEAR_ADDRESS
64	DATA_SOURCE_ENCODING
64	LATENCY_VALUE
