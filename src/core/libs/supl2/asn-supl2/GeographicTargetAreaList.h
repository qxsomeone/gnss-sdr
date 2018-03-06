/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _GeographicTargetAreaList_H_
#define _GeographicTargetAreaList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GeographicTargetArea;

    /* GeographicTargetAreaList */
    typedef struct GeographicTargetAreaList
    {
        A_SEQUENCE_OF(struct GeographicTargetArea)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GeographicTargetAreaList_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GeographicTargetAreaList;
    extern asn_SET_OF_specifics_t asn_SPC_GeographicTargetAreaList_specs_1;
    extern asn_TYPE_member_t asn_MBR_GeographicTargetAreaList_1[1];
    extern asn_per_constraints_t asn_PER_type_GeographicTargetAreaList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeographicTargetArea.h"

#endif /* _GeographicTargetAreaList_H_ */
#include "asn_internal.h"
