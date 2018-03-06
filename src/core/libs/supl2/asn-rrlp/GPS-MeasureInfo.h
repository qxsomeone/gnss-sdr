/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GPS_MeasureInfo_H_
#define _GPS_MeasureInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfGPS-MsrSetElement.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GPS-MeasureInfo */
    typedef struct GPS_MeasureInfo
    {
        SeqOfGPS_MsrSetElement_t gpsMsrSetList;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GPS_MeasureInfo_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GPS_MeasureInfo;
    extern asn_SEQUENCE_specifics_t asn_SPC_GPS_MeasureInfo_specs_1;
    extern asn_TYPE_member_t asn_MBR_GPS_MeasureInfo_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _GPS_MeasureInfo_H_ */
#include <asn_internal.h>
