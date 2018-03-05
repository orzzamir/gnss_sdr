/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 */

#ifndef _CellMeasuredResults_H_
#define _CellMeasuredResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PrimaryCPICH-Info.h"
#include "CPICH-Ec-N0.h"
#include "CPICH-RSCP.h"
#include "Pathloss.h"
#include <constr_SEQUENCE.h>
#include "CellParametersID.h"
#include "TGSN.h"
#include "PrimaryCCPCH-RSCP.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum modeSpecificInfo_PR
    {
        modeSpecificInfo_PR_NOTHING, /* No components present */
        modeSpecificInfo_PR_fdd,
        modeSpecificInfo_PR_tdd
    } modeSpecificInfo_PR;

    /* Forward declarations */
    struct TimeslotISCP_List;

    /* CellMeasuredResults */
    typedef struct CellMeasuredResults
    {
        long *cellIdentity /* OPTIONAL */;
        struct modeSpecificInfo
        {
            modeSpecificInfo_PR present;
            union CellMeasuredResults__modeSpecificInfo_u
            {
                struct fdd
                {
                    PrimaryCPICH_Info_t primaryCPICH_Info;
                    CPICH_Ec_N0_t *cpich_Ec_N0 /* OPTIONAL */;
                    CPICH_RSCP_t *cpich_RSCP /* OPTIONAL */;
                    Pathloss_t *pathloss /* OPTIONAL */;

                    /* Context for parsing across buffer boundaries */
                    asn_struct_ctx_t _asn_ctx;
                } fdd;
                struct tdd
                {
                    CellParametersID_t cellParametersID;
                    TGSN_t *proposedTGSN /* OPTIONAL */;
                    PrimaryCCPCH_RSCP_t *primaryCCPCH_RSCP /* OPTIONAL */;
                    Pathloss_t *pathloss /* OPTIONAL */;
                    struct TimeslotISCP_List *timeslotISCP_List /* OPTIONAL */;

                    /* Context for parsing across buffer boundaries */
                    asn_struct_ctx_t _asn_ctx;
                } tdd;
            } choice;

            /* Context for parsing across buffer boundaries */
            asn_struct_ctx_t _asn_ctx;
        } modeSpecificInfo;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } CellMeasuredResults_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_CellMeasuredResults;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimeslotISCP-List.h"

#endif /* _CellMeasuredResults_H_ */
#include <asn_internal.h>
