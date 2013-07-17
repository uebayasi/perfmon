#
# Intel(R) 64 and IA-32 Architectures Software DeveloperÅfs Manual
# Order Number: 325462-046US
# March 2013
#

#
# 18.10
# 4TH GENERATION INTEL(R) CORETM PROCESSOR PERFORMANCE MONITORING FACILITY
#

prefix	PEBS
endian	little
size	1536
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
64	DataLinearAddress
64	DataSourceEncoding
64	LatencyValue
64	EventingIP
64	TXAbortInformation

#
# Figure 18-34.
# Layout of IA32_PERFEVTSELx MSRs Supporting Intel TSX
#
prefix	IA32_PERFEVTSELx
endian	little
size	64
8	EVENT_SELECT
8	UMASK
1	USR
1	OS
1	E
1	PC
1	INT
1	ANY
1	EN
1	INV
8	CMASK
1	IN_TX
1	IN_TXCP
30
