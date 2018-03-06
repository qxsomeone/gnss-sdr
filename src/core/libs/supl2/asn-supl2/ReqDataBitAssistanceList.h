/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _ReqDataBitAssistanceList_H_
#define _ReqDataBitAssistanceList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GANSSSignals.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* ReqDataBitAssistanceList */
    typedef struct ReqDataBitAssistanceList
    {
        GANSSSignals_t gnssSignals;
        long ganssDataBitInterval;
        struct ReqDataBitAssistanceList__ganssDataBitSatList
        {
            A_SEQUENCE_OF(long)
            list;

            /* Context for parsing across buffer boundaries */
            asn_struct_ctx_t _asn_ctx;
        } * ganssDataBitSatList;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } ReqDataBitAssistanceList_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_ReqDataBitAssistanceList;
    extern asn_SEQUENCE_specifics_t asn_SPC_ReqDataBitAssistanceList_specs_1;
    extern asn_TYPE_member_t asn_MBR_ReqDataBitAssistanceList_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _ReqDataBitAssistanceList_H_ */
#include "asn_internal.h"
