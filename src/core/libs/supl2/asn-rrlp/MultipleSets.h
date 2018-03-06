/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _MultipleSets_H_
#define _MultipleSets_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ReferenceRelation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* MultipleSets */
    typedef struct MultipleSets
    {
        long nbrOfSets;
        long nbrOfReferenceBTSs;
        ReferenceRelation_t *referenceRelation /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } MultipleSets_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_MultipleSets;
    extern asn_SEQUENCE_specifics_t asn_SPC_MultipleSets_specs_1;
    extern asn_TYPE_member_t asn_MBR_MultipleSets_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _MultipleSets_H_ */
#include <asn_internal.h>
