#
# Intel(R) 64 and IA-32 Architectures Software DeveloperÅfs Manual
# Order Number: 325462-046US
# March 2013
#

#
# 18.11
# PERFORMANCE MONITORING (PROCESSORS
# BASED ON INTEL NETBURST(R) MICROARCHITECTURE)
#

#
# Figure 18-35.
# Event Selection Control Register (ESCR) for Pentium 4 and
# Intel Xeon Processors without Intel HT Technology Support
#
prefix	ESCR
endian	little
size	64
2
1	T_USR
1	T_OS
1	TAG_ENABLE
4	TAG_VALUE
16	EVENT_MASK
6	EVENT_SELECT
33

#
# Figure 18-37. Counter Configuration Control Register (CCCR)
#
prefix	CCCR
endian	little
size	64
12
1	ENABLE
3	ESCR_SELECT
2	RESERVED_11B
1	COMPARE
1	COMPLEMENT
4	THRESHOLD
1	EDGE
1	FORCE_OVF
1	OVF_PMI
3
1	CASCADE
1	OVF
32
