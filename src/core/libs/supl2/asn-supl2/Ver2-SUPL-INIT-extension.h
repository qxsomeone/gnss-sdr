/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _Ver2_SUPL_INIT_extension_H_
#define _Ver2_SUPL_INIT_extension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NotificationMode.h"
#include "TriggerType.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct SupportedNetworkInformation;
    struct SLPAddress;
    struct HistoricReporting;
    struct ProtectionLevel;
    struct GNSSPosTechnology;

    /* Ver2-SUPL-INIT-extension */
    typedef struct Ver2_SUPL_INIT_extension
    {
        NotificationMode_t *notificationMode /* OPTIONAL */;
        struct SupportedNetworkInformation *supportedNetworkInformation /* OPTIONAL */;
        TriggerType_t *triggerType /* OPTIONAL */;
        struct SLPAddress *e_SLPAddress /* OPTIONAL */;
        struct HistoricReporting *historicReporting /* OPTIONAL */;
        struct ProtectionLevel *protectionLevel /* OPTIONAL */;
        struct GNSSPosTechnology *gnssPosTechnology /* OPTIONAL */;
        long *minimumMajorVersion /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } Ver2_SUPL_INIT_extension_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_INIT_extension;
    extern asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPL_INIT_extension_specs_1;
    extern asn_TYPE_member_t asn_MBR_Ver2_SUPL_INIT_extension_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedNetworkInformation.h"
#include "SLPAddress.h"
#include "HistoricReporting.h"
#include "ProtectionLevel.h"
#include "GNSSPosTechnology.h"

#endif /* _Ver2_SUPL_INIT_extension_H_ */
#include "asn_internal.h"
