/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GANSSGenericAssistDataElement_H_
#define _GANSSGenericAssistDataElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct SeqOfGANSSTimeModel;
    struct GANSSDiffCorrections;
    struct GANSSNavModel;
    struct GANSSRealTimeIntegrity;
    struct GANSSDataBitAssist;
    struct GANSSRefMeasurementAssist;
    struct GANSSAlmanacModel;
    struct GANSSUTCModel;

    /* GANSSGenericAssistDataElement */
    typedef struct GANSSGenericAssistDataElement
    {
        long *ganssID /* OPTIONAL */;
        struct SeqOfGANSSTimeModel *ganssTimeModel /* OPTIONAL */;
        struct GANSSDiffCorrections *ganssDiffCorrections /* OPTIONAL */;
        struct GANSSNavModel *ganssNavigationModel /* OPTIONAL */;
        struct GANSSRealTimeIntegrity *ganssRealTimeIntegrity /* OPTIONAL */;
        struct GANSSDataBitAssist *ganssDataBitAssist /* OPTIONAL */;
        struct GANSSRefMeasurementAssist *ganssRefMeasurementAssist /* OPTIONAL */;
        struct GANSSAlmanacModel *ganssAlmanacModel /* OPTIONAL */;
        struct GANSSUTCModel *ganssUTCModel /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSGenericAssistDataElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSGenericAssistDataElement;
    extern asn_SEQUENCE_specifics_t asn_SPC_GANSSGenericAssistDataElement_specs_1;
    extern asn_TYPE_member_t asn_MBR_GANSSGenericAssistDataElement_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SeqOfGANSSTimeModel.h"
#include "GANSSDiffCorrections.h"
#include "GANSSNavModel.h"
#include "GANSSRealTimeIntegrity.h"
#include "GANSSDataBitAssist.h"
#include "GANSSRefMeasurementAssist.h"
#include "GANSSAlmanacModel.h"
#include "GANSSUTCModel.h"

#endif /* _GANSSGenericAssistDataElement_H_ */
#include <asn_internal.h>
