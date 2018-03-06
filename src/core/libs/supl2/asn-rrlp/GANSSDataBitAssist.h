/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GANSSDataBitAssist_H_
#define _GANSSDataBitAssist_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SVID.h"
#include "SeqOf-GANSSDataBits.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSSDataBitAssist */
    typedef struct GANSSDataBitAssist
    {
        long ganssTOD;
        SVID_t svID;
        long ganssDataTypeID;
        SeqOf_GANSSDataBits_t ganssDataBits;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSDataBitAssist_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSDataBitAssist;
    extern asn_SEQUENCE_specifics_t asn_SPC_GANSSDataBitAssist_specs_1;
    extern asn_TYPE_member_t asn_MBR_GANSSDataBitAssist_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _GANSSDataBitAssist_H_ */
#include <asn_internal.h>
