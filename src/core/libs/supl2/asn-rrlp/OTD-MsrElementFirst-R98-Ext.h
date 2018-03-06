/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _OTD_MsrElementFirst_R98_Ext_H_
#define _OTD_MsrElementFirst_R98_Ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct SeqOfOTD_FirstSetMsrs_R98_Ext;

    /* OTD-MsrElementFirst-R98-Ext */
    typedef struct OTD_MsrElementFirst_R98_Ext
    {
        struct SeqOfOTD_FirstSetMsrs_R98_Ext *otd_FirstSetMsrs_R98_Ext /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } OTD_MsrElementFirst_R98_Ext_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_OTD_MsrElementFirst_R98_Ext;
    extern asn_SEQUENCE_specifics_t asn_SPC_OTD_MsrElementFirst_R98_Ext_specs_1;
    extern asn_TYPE_member_t asn_MBR_OTD_MsrElementFirst_R98_Ext_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SeqOfOTD-FirstSetMsrs-R98-Ext.h"

#endif /* _OTD_MsrElementFirst_R98_Ext_H_ */
#include <asn_internal.h>
