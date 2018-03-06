/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GANSS_SgnTypeElement_H_
#define _GANSS_SgnTypeElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SeqOfGANSS-SgnElement.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSS-SgnTypeElement */
    typedef struct GANSS_SgnTypeElement
    {
        long ganssSignalID;
        SeqOfGANSS_SgnElement_t ganss_SgnList;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSS_SgnTypeElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSS_SgnTypeElement;
    extern asn_SEQUENCE_specifics_t asn_SPC_GANSS_SgnTypeElement_specs_1;
    extern asn_TYPE_member_t asn_MBR_GANSS_SgnTypeElement_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _GANSS_SgnTypeElement_H_ */
#include <asn_internal.h>
