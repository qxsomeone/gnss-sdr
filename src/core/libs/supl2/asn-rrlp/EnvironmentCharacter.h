/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _EnvironmentCharacter_H_
#define _EnvironmentCharacter_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum EnvironmentCharacter
    {
        EnvironmentCharacter_badArea = 0,
        EnvironmentCharacter_notBadArea = 1,
        EnvironmentCharacter_mixedArea = 2
        /*
	 * Enumeration is extensible
	 */
    } e_EnvironmentCharacter;

    /* EnvironmentCharacter */
    typedef long EnvironmentCharacter_t;

    /* Implementation */
    extern asn_per_constraints_t asn_PER_type_EnvironmentCharacter_constr_1;
    extern asn_TYPE_descriptor_t asn_DEF_EnvironmentCharacter;
    extern const asn_INTEGER_specifics_t asn_SPC_EnvironmentCharacter_specs_1;
    asn_struct_free_f EnvironmentCharacter_free;
    asn_struct_print_f EnvironmentCharacter_print;
    asn_constr_check_f EnvironmentCharacter_constraint;
    ber_type_decoder_f EnvironmentCharacter_decode_ber;
    der_type_encoder_f EnvironmentCharacter_encode_der;
    xer_type_decoder_f EnvironmentCharacter_decode_xer;
    xer_type_encoder_f EnvironmentCharacter_encode_xer;
    oer_type_decoder_f EnvironmentCharacter_decode_oer;
    oer_type_encoder_f EnvironmentCharacter_encode_oer;
    per_type_decoder_f EnvironmentCharacter_decode_uper;
    per_type_encoder_f EnvironmentCharacter_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _EnvironmentCharacter_H_ */
#include <asn_internal.h>
