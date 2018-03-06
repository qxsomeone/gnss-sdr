/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _AccuracyOpt_H_
#define _AccuracyOpt_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Accuracy.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* AccuracyOpt */
    typedef struct AccuracyOpt
    {
        Accuracy_t *accuracy /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } AccuracyOpt_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_AccuracyOpt;
    extern asn_SEQUENCE_specifics_t asn_SPC_AccuracyOpt_specs_1;
    extern asn_TYPE_member_t asn_MBR_AccuracyOpt_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _AccuracyOpt_H_ */
#include <asn_internal.h>
