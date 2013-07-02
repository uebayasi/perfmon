/*	$NetBSD$	*/

#ifndef _PERFMON_SANDYBRIDGEREG_H_
#define _PERFMON_SANDYBRIDGEREG_H_

/*
 * Intel(R) 64 and IA-32 Architectures Software Developer’s Manual
 * Order Number: 325462-046US
 * March 2013
 */

/*
 * 18.8
 * PERFORMANCE MONITORING FOR PROCESSORS BASED ON INTEL® MICROARCHITECTURE
 * CODE NAME SANDY BRIDGE
 */

/*
 * 18.8.1
 * Global Counter Control Facilities In Intel(R) Microarchitecture
 * Code Name Sandy Bridge
 */

/*
 * Figure 18-26.
 * IA32_PERF_GLOBAL_CTRL MSR in Intel® Microarchitecture Code Name Sandy Bridge
 */

/* XXX */

/*
 * 18.8.6
 * Uncore Performance Monitoring Facilities In
 * Intel(R) CoreTM i7-2xxx, Intel(R) CoreTM i5- 2xxx,
 * Intel(R) CoreTM i3-2xxx Processor Series
 *
 * Figure 18-32.
 * Layout of Uncore PERFEVTSEL MSR for a C-Box Unit or the ARB Unit
 */
#define	PERFEVSELx_EVENT_SELECT		__BITS(0, 7)
#define	PERFEVSELx_UNIT_MASK		__BITS(8, 15)
#define	PERFEVSELx_RESERVED0		__BITS(16, 17)
#define	PERFEVSELx_E			__BIT(18)
#define	PERFEVSELx_RESERVED1		__BIT(19)
#define	PERFEVSELx_OVF_EN		__BIT(20)
#define	PERFEVSELx_RESERVED2		__BIT(21)
#define	PERFEVSELx_EN			__BIT(22)
#define	PERFEVSELx_INV			__BIT(23)
#define	PERFEVSELx_CMASK		__BITS(24, 28)
#define	PERFEVSELx_RESERVED1		__BITS(29, 63)

/*
 * Figure 18-27.
 * IA32_PERF_GLOBAL_STATUS MSR in Intel(R) Microarchitecture Code Name Sandy Bridge
 */
/*
63	CondChgd
62	OvfBuffer
34	FIXED_CTR2 Overflow (RO)
33	FIXED_CTR1 Overflow (RO)
32	FIXED_CTR0 Overflow (RO)
7	PMC7_OVF (RO, If PMC7 present)
6	PMC6_OVF (RO, If PMC6 present)
5	PMC5_OVF (RO, If PMC5 present)
4	PMC4_OVF (RO, If PMC4 present)
3	PMC3_OVF (RO)
2	PMC2_OVF (RO)
1	PMC1_OVF (RO)
0	PMC0_OVF (RO)
 */
/*
 * Figure 18-28.
 * IA32_PERF_GLOBAL_OVF_CTRL MSR in Intel microarchitecture code name Sandy Bridge
 *
63	ClrCondChgd
62	ClrOvfBuffer
34	FIXED_CTR2
33	FIXED_CTR1
32	FIXED_CTR0
7	PMC7_ClrOvf
6	PMC6_ClrOvf
5	PMC5_ClrOvf
4	PMC4_ClrOvf
3	PMC3_ClrOvf
2	PMC2_ClrOvf
1	PMC1_ClrOvf
0	PMC0_ClrOvf
 */
/*
 * 18.8.2 Counter Coalescence
 * 18.8.3 Full Width Writes to Performance Counters
 * 18.8.4 PEBS Support in Intel® Microarchitecture Code Name Sandy Bridge
 */
/*
 * Figure 18-29. Layout of IA32_PEBS_ENABLE MSR
PS_EN (R/W)
LL_EN_PMC3 (R/W)
LL_EN_PMC2 (R/W)
LL_EN_PMC1 (R/W)
LL_EN_PMC0 (R/W)
PEBS_EN_PMC3 (R/W)
PEBS_EN_PMC2 (R/W)
PEBS_EN_PMC1 (R/W)
PEBS_EN_PMC0 (R/W)
 */

/*
 * 18.8.4.1 PEBS Record Format
 * 18.8.4.2 Load Latency Performance Monitoring Facility
 * 18.8.4.3 Precise Store Facility
 * 18.8.4.4 Precise Distribution of Instructions Retired (PDIR)
 * 18.8.5 Off-core Response Performance Monitoring
 */
/*
 * Figure 18-30. Request_Type Fields for MSR_OFFCORE_RSP_x
RESPONSE TYPE - Other (R/W)
RESERVED
REQUEST TYPE - STRM_ST (R/W)
REQUEST TYPE - BUS_LOCKS (R/W)
REQUEST TYPE - PF_LLC_IFETCH (R/W)
REQUEST TYPE - PF_LLC_RFO (R/W)
REQUEST TYPE - PF_LLC_DATA_RD (R/W)
REQUEST TYPE - PF_IFETCH (R/W)
REQUEST TYPE - PF_RFO (R/W)
REQUEST TYPE - PF_DATA_RD (R/W)
REQUEST TYPE - WB (R/W)
REQUEST TYPE - DMND_IFETCH (R/W)
REQUEST TYPE - DMND_RFO (R/W)
REQUEST TYPE - DMND_DATA_RD (R/W)
 */
/*
 * Figure 18-31. Response_Supplier and Snoop Info Fields for MSR_OFFCORE_RSP_x
 *
RESPONSE TYPE - NON_DRAM (R/W)
RSPNS_SNOOP - HITM (R/W)
RSPNS_SNOOP - HIT_FWD RSPNS_SNOOP - HIT_NO_FWD (R/W)
RSPNS_SNOOP - SNP_MISS (R/W)
RSPNS_SNOOP - SNP_NOT_NEEDED (R/W)
RSPNS_SNOOP - SNPl_NONE (R/W)
RSPNS_SUPPLIER - RESERVED
RSPNS_SUPPLIER - Local
RSPNS_SUPPLIER - LLC_HITF (R/W)
RSPNS_SUPPLIER - LLC_HITS (R/W)
RSPNS_SUPPLIER - LLC_HITE (R/W)
RSPNS_SUPPLIER - LLC_HITM (R/W)
RSPNS_SUPPLIER - No_SUPP (R/W)
RSPNS_SUPPLIER - ANY (R/W)
 */

#endif /* _PERFMON_SANDYBRIDGEREG_H_ */
