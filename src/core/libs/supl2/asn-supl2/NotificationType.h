/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _NotificationType_H_
#define _NotificationType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum NotificationType
    {
        NotificationType_noNotificationNoVerification = 0,
        NotificationType_notificationOnly = 1,
        NotificationType_notificationAndVerficationAllowedNA = 2,
        NotificationType_notificationAndVerficationDeniedNA = 3,
        NotificationType_privacyOverride = 4
        /*
	 * Enumeration is extensible
	 */
    } e_NotificationType;

    /* NotificationType */
    typedef long NotificationType_t;

    /* Implementation */
    extern asn_per_constraints_t asn_PER_type_NotificationType_constr_1;
    extern asn_TYPE_descriptor_t asn_DEF_NotificationType;
    extern const asn_INTEGER_specifics_t asn_SPC_NotificationType_specs_1;
    asn_struct_free_f NotificationType_free;
    asn_struct_print_f NotificationType_print;
    asn_constr_check_f NotificationType_constraint;
    ber_type_decoder_f NotificationType_decode_ber;
    der_type_encoder_f NotificationType_encode_der;
    xer_type_decoder_f NotificationType_decode_xer;
    xer_type_encoder_f NotificationType_encode_xer;
    per_type_decoder_f NotificationType_decode_uper;
    per_type_encoder_f NotificationType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _NotificationType_H_ */
#include "asn_internal.h"
