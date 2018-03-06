/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _TimeslotISCP_List_H_
#define _TimeslotISCP_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimeslotISCP.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* TimeslotISCP-List */
    typedef struct TimeslotISCP_List
    {
        A_SEQUENCE_OF(TimeslotISCP_t)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } TimeslotISCP_List_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_TimeslotISCP_List;
    extern asn_SET_OF_specifics_t asn_SPC_TimeslotISCP_List_specs_1;
    extern asn_TYPE_member_t asn_MBR_TimeslotISCP_List_1[1];
    extern asn_per_constraints_t asn_PER_type_TimeslotISCP_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _TimeslotISCP_List_H_ */
#include "asn_internal.h"
