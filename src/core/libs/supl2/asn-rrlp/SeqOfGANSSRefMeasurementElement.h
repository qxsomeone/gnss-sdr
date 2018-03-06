/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _SeqOfGANSSRefMeasurementElement_H_
#define _SeqOfGANSSRefMeasurementElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GANSSRefMeasurementElement;

    /* SeqOfGANSSRefMeasurementElement */
    typedef struct SeqOfGANSSRefMeasurementElement
    {
        A_SEQUENCE_OF(struct GANSSRefMeasurementElement)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SeqOfGANSSRefMeasurementElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSSRefMeasurementElement;
    extern asn_SET_OF_specifics_t asn_SPC_SeqOfGANSSRefMeasurementElement_specs_1;
    extern asn_TYPE_member_t asn_MBR_SeqOfGANSSRefMeasurementElement_1[1];
    extern asn_per_constraints_t asn_PER_type_SeqOfGANSSRefMeasurementElement_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSRefMeasurementElement.h"

#endif /* _SeqOfGANSSRefMeasurementElement_H_ */
#include <asn_internal.h>
