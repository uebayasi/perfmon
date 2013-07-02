/*	$NetBSD$	*/

#ifndef _PERFMON_NETBURSTREG_H_
#define _PERFMON_NETBURSTREG_H_

/*
 * Intel(R) 64 and IA-32 Architectures Software Developer’s Manual
 * Order Number: 325462-046US
 * March 2013
 */

/*
 * 18.11
 * PERFORMANCE MONITORING (PROCESSORS
 * BASED ON INTEL NETBURST(R) MICROARCHITECTURE)
 */

/*
 * Figure 18-35.
 * Event Selection Control Register (ESCR) for Pentium 4 and
 * Intel Xeon Processors without Intel HT Technology Support
 */
#define	ESCR_RESERVED0		__BITS(0, 1)
#define	ESCR_T_USR		__BIT(2)
#define	ESCR_T_OS		__BIT(3)
#define	ESCR_TAG_ENABLE		__BIT(4)
#define	ESCR_TAG_VALUE		__BITS(5, 8)
#define	ESCR_EVENT_MASK		__BITS(9, 24)
#define	ESCR_EVENT_SELECT	__BITS(25, 30)
#define	ESCR_RESERVED1		__BITS(31, 63)

/*
 * Figure 18-37. Counter Configuration Control Register (CCCR)
 */
#define	CCCR_RESERVED0		__BITS(0, 11)
#define	CCCR_ENABLE		__BIT(12)
#define	CCCR_ESCR_SELECT	__BITS(13, 15)
#define	CCCR_RESERVED_11B	__BITS(16, 17)
#define	CCCR_COMPARE		__BIT(18)
#define	CCCR_COMPLEMENT		__BIT(19)
#define	CCCR_THRESHOLD		__BITS(20, 23)
#define	CCCR_EDGE		__BIT(24)
#define	CCCR_FORCE_OVF		__BIT(25)
#define	CCCR_OVF_PMI		__BIT(26)
#define	CCCR_RESERVED1		__BITS(27, 29)
#define	CCCR_CASCADE		__BIT(30)
#define	CCCR_OVF		__BIT(31)
#define	CCCR_RESERVED2		__BITS(32, 63)

#endif /* _PERFMON_NETBURSTREG_H_ */
