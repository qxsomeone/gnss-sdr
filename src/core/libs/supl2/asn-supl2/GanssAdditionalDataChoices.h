/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _GanssAdditionalDataChoices_H_
#define _GanssAdditionalDataChoices_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* GanssAdditionalDataChoices */
    typedef struct GanssAdditionalDataChoices
    {
        long *orbitModelID /* OPTIONAL */;
        long *clockModelID /* OPTIONAL */;
        long *utcModelID /* OPTIONAL */;
        long *almanacModelID /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GanssAdditionalDataChoices_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GanssAdditionalDataChoices;
    extern asn_SEQUENCE_specifics_t asn_SPC_GanssAdditionalDataChoices_specs_1;
    extern asn_TYPE_member_t asn_MBR_GanssAdditionalDataChoices_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _GanssAdditionalDataChoices_H_ */
#include "asn_internal.h"
