/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _ReportData_H_
#define _ReportData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ResultCode.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct PositionData;
    struct MultipleLocationIds;
    struct TimeStamp;

    /* ReportData */
    typedef struct ReportData
    {
        struct PositionData *positionData /* OPTIONAL */;
        struct MultipleLocationIds *multipleLocationIds /* OPTIONAL */;
        ResultCode_t *resultCode /* OPTIONAL */;
        struct TimeStamp *timestamp /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } ReportData_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_ReportData;
    extern asn_SEQUENCE_specifics_t asn_SPC_ReportData_specs_1;
    extern asn_TYPE_member_t asn_MBR_ReportData_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PositionData.h"
#include "MultipleLocationIds.h"
#include "TimeStamp.h"

#endif /* _ReportData_H_ */
#include "asn_internal.h"
