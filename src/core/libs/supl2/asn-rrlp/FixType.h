/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _FixType_H_
#define _FixType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum FixType
    {
        FixType_twoDFix = 0,
        FixType_threeDFix = 1
    } e_FixType;

    /* FixType */
    typedef long FixType_t;

    /* Implementation */
    extern asn_per_constraints_t asn_PER_type_FixType_constr_1;
    extern asn_TYPE_descriptor_t asn_DEF_FixType;
    asn_struct_free_f FixType_free;
    asn_struct_print_f FixType_print;
    asn_constr_check_f FixType_constraint;
    ber_type_decoder_f FixType_decode_ber;
    der_type_encoder_f FixType_encode_der;
    xer_type_decoder_f FixType_decode_xer;
    xer_type_encoder_f FixType_encode_xer;
    oer_type_decoder_f FixType_decode_oer;
    oer_type_encoder_f FixType_encode_oer;
    per_type_decoder_f FixType_decode_uper;
    per_type_encoder_f FixType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _FixType_H_ */
#include <asn_internal.h>
