/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _ErrorCodes_H_
#define _ErrorCodes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum ErrorCodes
    {
        ErrorCodes_unDefined = 0,
        ErrorCodes_missingComponet = 1,
        ErrorCodes_incorrectData = 2,
        ErrorCodes_missingIEorComponentElement = 3,
        ErrorCodes_messageTooShort = 4,
        ErrorCodes_unknowReferenceNumber = 5
        /*
	 * Enumeration is extensible
	 */
    } e_ErrorCodes;

    /* ErrorCodes */
    typedef long ErrorCodes_t;

    /* Implementation */
    extern asn_per_constraints_t asn_PER_type_ErrorCodes_constr_1;
    extern asn_TYPE_descriptor_t asn_DEF_ErrorCodes;
    extern const asn_INTEGER_specifics_t asn_SPC_ErrorCodes_specs_1;
    asn_struct_free_f ErrorCodes_free;
    asn_struct_print_f ErrorCodes_print;
    asn_constr_check_f ErrorCodes_constraint;
    ber_type_decoder_f ErrorCodes_decode_ber;
    der_type_encoder_f ErrorCodes_encode_der;
    xer_type_decoder_f ErrorCodes_decode_xer;
    xer_type_encoder_f ErrorCodes_encode_xer;
    oer_type_decoder_f ErrorCodes_decode_oer;
    oer_type_encoder_f ErrorCodes_encode_oer;
    per_type_decoder_f ErrorCodes_decode_uper;
    per_type_encoder_f ErrorCodes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _ErrorCodes_H_ */
#include <asn_internal.h>
