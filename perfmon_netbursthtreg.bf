#
# Intel(R) 64 and IA-32 Architectures Software DeveloperÅfs Manual
# Order Number: 325462-046US
# March 2013
#

#
# 18.12
# PERFORMANCE MONITORING AND INTEL HYPER-THREADING TECHNOLOGY
# IN PROCESSORS BASED ON INTEL NETBURST(R) MICROARCHITECTURE
#

#
# Figure 18-39.
# Event Selection Control Register (ESCR) for the Pentium 4 Processor,
# Intel Xeon Processor and
# Intel Xeon Processor MP Supporting Hyper-Threading Technology
#
prefix	ESCR
endian	little
size	64
1	T1_USR
1	T1_OS
1	T0_USR
1	T0_OS
1	TAG_ENABLE
4	TAG_VALUE
16	EVENT_MASK
6	EVENT_SELECT
33

#
# Figure 18-40.
# Counter Configuration Control Register (CCCR)
#
prefix	CCCR
endian	little
size	64
12
1	ENABLE
3	ESCR_SELECT
2	ACTIVE_THREAD 0 NONE 1 SINGLE 2 BOTH 3 ANY
1	COMPARE
1	COMPLEMENT
4	THRESHOLD
1	EDGE
1	FORCE_OVF
1	OVF_PMI_T0
1	OVF_PMI_T1
2
1	CASCADE
1	OVF
32
