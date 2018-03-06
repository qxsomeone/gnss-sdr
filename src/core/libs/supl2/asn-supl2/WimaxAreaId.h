/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _WimaxAreaId_H_
#define _WimaxAreaId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* WimaxAreaId */
    typedef struct WimaxAreaId
    {
        BIT_STRING_t *bsID_MSB /* OPTIONAL */;
        BIT_STRING_t bsID_LSB;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } WimaxAreaId_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_WimaxAreaId;
    extern asn_SEQUENCE_specifics_t asn_SPC_WimaxAreaId_specs_1;
    extern asn_TYPE_member_t asn_MBR_WimaxAreaId_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _WimaxAreaId_H_ */
#include "asn_internal.h"
