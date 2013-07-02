/*	$NetBSD$	*/

#ifndef _PERFMON_NETBURSTHTREG_H_
#define _PERFMON_NETBURSTHTREG_H_

/*
 * Intel(R) 64 and IA-32 Architectures Software Developer’s Manual
 * Order Number: 325462-046US
 * March 2013
 */

/*
 * 18.12
 * PERFORMANCE MONITORING AND INTEL HYPER-THREADING TECHNOLOGY
 * IN PROCESSORS BASED ON INTEL NETBURST(R) MICROARCHITECTURE
 */

/*
 * Figure 18-39.
 * Event Selection Control Register (ESCR) for the Pentium 4 Processor,
 * Intel Xeon Processor and
 * Intel Xeon Processor MP Supporting Hyper-Threading Technology
 */
#define	ESCR_T1_USR		__BIT(0)
#define	ESCR_T1_OS		__BIT(1)
#define	ESCR_T0_USR		__BIT(2)
#define	ESCR_T0_OS		__BIT(3)
#define	ESCR_TAG_ENABLE		__BIT(4)
#define	ESCR_TAG_VALUE		__BITS(5, 8)
#define	ESCR_EVENT_MASK		__BITS(9, 24)
#define	ESCR_EVENT_SELECT	__BITS(25, 30)
#define	ESCR_RESERVED0		__BITS(31, 63)

/*
 * Figure 18-40. Counter Configuration Control Register (CCCR)
 */
#define	CCCR_RESERVED0		__BITS(0, 11)
#define	CCCR_ENABLE		__BIT(12)
#define	CCCR_ESCR_SELECT	__BITS(13, 15)
#define	CCCR_ACTIVE_THREAD	__BITS(16, 17)
#define	CCCR_COMPARE		__BIT(18)
#define	CCCR_COMPLEMENT		__BIT(19)
#define	CCCR_THRESHOLD		__BITS(20, 23)
#define	CCCR_EDGE		__BIT(24)
#define	CCCR_FORCE_OVF		__BIT(25)
#define	CCCR_OVF_PMI_T0		__BIT(26)
#define	CCCR_OVF_PMI_T1		__BIT(27)
#define	CCCR_RESERVED1		__BITS(28, 29)
#define	CCCR_CASCADE		__BIT(30)
#define	CCCR_OVF		__BIT(31)
#define	CCCR_RESERVED2		__BITS(32, 63)

#endif /* _PERFMON_NETBURSTHTREG_H_ */
