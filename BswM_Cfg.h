/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: BswM
 *           Program: MSR_Vector_SLP4
 *          Customer: Continental Teves AG & Co. OHG
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: AWR2944
 *    License Scope : The usage is restricted to CBD2000834_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Cfg.h
 *   Generation Time: 2022-08-12 12:19:15
 *           Project: ARS620_S2A2 - Version 1.0
 *          Delivery: CBD2000834_D01
 *      Tool Version: DaVinci Configurator (beta) 5.24.40 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


#if !defined(BSWM_CFG_H)
#define BSWM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "Std_Types.h"
#include "ComStack_Types.h" 
#include "BswM_ComM.h"
#include "BswM_CanSM.h"
#include "BswM_EthIf.h"
#include "BswM_EthSM.h"
#include "BswM_Dcm.h"
#include "BswM_EcuM.h"
#include "BswM_NvM.h"
#include "Rte_BswM_Type.h"
#include "BswM.h" 
#include "memstack.h" 
#include "Psc.h" 
#include "Dgm.h" 
#include "Csm.h" 
#include "Flsp.h" 
#include "MTSI.h" 
#include "Arb.h" 






/* -----------------------------------------------------------------------------
    &&&~ GENERAL DEFINES
 ----------------------------------------------------------------------------- */
#ifndef BSWM_DEV_ERROR_DETECT
#define BSWM_DEV_ERROR_DETECT STD_ON
#endif
#ifndef BSWM_DEV_ERROR_REPORT
#define BSWM_DEV_ERROR_REPORT STD_ON
#endif
#ifndef BSWM_USE_DUMMY_STATEMENT
#define BSWM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef BSWM_DUMMY_STATEMENT
#define BSWM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef BSWM_DUMMY_STATEMENT_CONST
#define BSWM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef BSWM_ATOMIC_VARIABLE_ACCESS
#define BSWM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef BSWM_PROCESSOR_AWR2944
#define BSWM_PROCESSOR_AWR2944
#endif
#ifndef BSWM_COMP_LLVMDIAB
#define BSWM_COMP_LLVMDIAB
#endif
#ifndef BSWM_GEN_GENERATOR_MSR
#define BSWM_GEN_GENERATOR_MSR
#endif
#ifndef BSWM_CPUTYPE_BITORDER_LSB2MSB
#define BSWM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#define BSWM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_LINKTIME
#define BSWM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef BSWM_CONFIGURATION_VARIANT
#define BSWM_CONFIGURATION_VARIANT BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef BSWM_POSTBUILD_VARIANT_SUPPORT
#define BSWM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#if !defined (BSWM_DUMMY_STATEMENT)
# define BSWM_DUMMY_STATEMENT(statement) (void)statement
#endif

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

/* START of Checksum include for */
/* START of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

#define BSWM_MODE_CHECK                      STD_ON
#define BSWM_ENABLE_CANSM                    STD_ON
#define BSWM_ENABLE_FRSM                     STD_OFF
#define BSWM_ENABLE_LINSM                    STD_OFF
#define BSWM_ENABLE_ETHIF                    STD_ON
#define BSWM_ENABLE_ETHSM                    STD_ON
#define BSWM_ENABLE_LINTP                    STD_OFF
#define BSWM_ENABLE_DCM                      STD_ON
#define BSWM_ENABLE_NVM                      STD_ON
#define BSWM_ENABLE_ECUM                     STD_ON
#define BSWM_ENABLE_COMM                     STD_ON
#define BSWM_ENABLE_J1939DCM                 STD_OFF
#define BSWM_ENABLE_J1939NM                  STD_OFF
#define BSWM_ENABLE_SD                       STD_OFF
#define BSWM_ENABLE_NM                       STD_OFF
#define BSWM_ENABLE_PDUR                     STD_OFF
#define BSWM_ENABLE_WDGM                     STD_OFF
#define BSWM_ENABLE_RULE_CONTROL             STD_ON
#define BSWM_VERSION_INFO_API                STD_OFF
#define BSWM_COMM_PNC_SUPPORT                STD_ON
#define BSWM_COMM_INITIATE_RESET             STD_OFF
#define BSWM_CHANNEL_COUNT                   5u
#define BSWM_WAKEUP_SOURCE_COUNT             7u
#define BSWM_IPDU_GROUP_CONTROL              STD_ON
#define BSWM_ECUM_MODE_HANDLING              STD_ON
#define BSWM_IPDUGROUPVECTORSIZE             1u
#define BSWM_MULTIPARTITION                  STD_OFF



/* END of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

/* END of Checksum include for */

/* -----------------------------------------------------------------------------
    &&&~ RULE DEFINES
 ----------------------------------------------------------------------------- */
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF (3) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON (4) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF (1) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON (2) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF (5) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON (6) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF (7) 
#define BswMConf_BswMRule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON (8) 
#define BswMConf_BswMRule_BswMRule_DcmEcuReset_GotoUFBL (9) 
#define BswMConf_BswMRule_BswMRule_SILENT_COMMUNICATION (0) 
#define BswMConf_BswMRule_DemTimerExpired (10) 
#define BswMConf_BswMRule_DiagHardReset (11) 
#define BswMConf_BswMRule_DiagSoftReset (12) 
#define BswMConf_BswMRule_ExecuteInitList2A (13) 
#define BswMConf_BswMRule_ExecuteInitList2B (14) 
#define BswMConf_BswMRule_ExecuteInitList2C (15) 
#define BswMConf_BswMRule_NoCom_Finished (16) 
#define BswMConf_BswMRule_NvmTimerExpired (17) 
#define BswMConf_BswMRule_Rule_Control_ComMUser_AllNMLightChannels (18) 
#define BswMConf_BswMRule_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active (19) 
#define BswMConf_BswMRule_Rule_PLCM_PNC_FULLCOMM (20) 
#define BswMConf_BswMRule_Shutdown_Com_Dem_FirstRun (21) 
#define BswMConf_BswMRule_Shutdown_Com_Dem_SubsequentRuns (22) 
#define BswMConf_BswMRule_Shutdown_Inactive (23) 
#define BswMConf_BswMRule_Shutdown_Nm (24) 
#define BswMConf_BswMRule_Shutdown_NvM (25) 
#define BswMConf_BswMRule_Shutdown_Pmic (26) 


/* -----------------------------------------------------------------------------
    &&&~ GENERIC DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_GENERIC_BSWM_REQ_PNC_FULLCOMM                        6u 
#define BSWM_GENERIC_BSWM_REQ_SHUT_DOWN                           3u 
#define BSWM_GENERIC_BSWM_REQ_STARTUP_2A                          0u 
#define BSWM_GENERIC_BSWM_REQ_STARTUP_2B                          1u 
#define BSWM_GENERIC_BSWM_REQ_STARTUP_2C                          2u 
#define BSWM_GENERIC_BswMModeRequestPort_DGM_SILENT_COMMUNICATION 10u 
#define BSWM_GENERIC_BswM_ReqMode_DcmEcuReset_GotoUFBL            7u 

#define BSWM_GENERICVALUE_BSWM_REQ_PNC_FULLCOMM_BSWM_FULLCOMM_OFF                               0x0000u 
#define BSWM_GENERICVALUE_BSWM_REQ_PNC_FULLCOMM_BSWM_FULLCOMM_ON                                0x0001u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_ACTIVE                               0x0001u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT                   0x0003u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE                     0x0002u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_INACTIVE                             0x0000u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_NVM                                  0x0004u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_PMIC                                 0x0005u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_WAITFORNVM                           0x0007u 
#define BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_UNDEFINED                                          0x0006u 
#define BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2A_BSWM_STARTUP_TWO_A                                0x0000u 
#define BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2B_BSWM_STARTUP_TWO_B                                0x0000u 
#define BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2C_BSWM_STARTUP_TWO_C                                0x0000u 
#define BSWM_GENERICVALUE_BswMModeRequestPort_DGM_SILENT_COMMUNICATION_SILENT_COMMUNICATION_OFF 0x0000u 
#define BSWM_GENERICVALUE_BswMModeRequestPort_DGM_SILENT_COMMUNICATION_SILENT_COMMUNICATION_ON  0x0001u 
#define BSWM_GENERICVALUE_BswM_ReqMode_DcmEcuReset_GotoUFBL_BswMGenericRequestMode_GotoUFBL     0x0060u 
#define BSWM_GENERICVALUE_BswM_ReqMode_DcmEcuReset_GotoUFBL_BswMGenericRequestMode_InitValue    0x0000u 


/* -----------------------------------------------------------------------------
    &&&~ TIMER DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_TMR_DemShutdownTimer 0u 
#define BSWM_TMR_NvmWriteAllTimer 1u 



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCDataSwitches  BswM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_ACTIONLISTPRIORITYQUEUE                                                                STD_ON
#define BSWM_ACTIONLISTQUEUE                                                                        STD_ON
#define BSWM_ACTIONLISTS                                                                            STD_ON
#define BSWM_FCTPTROFACTIONLISTS                                                                    STD_ON
#define BSWM_CANSMCHANNELMAPPING                                                                    STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_EXTERNALIDOFCANSMCHANNELMAPPING                                                        STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ExternalId' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_INITVALUEOFCANSMCHANNELMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelMapping.InitValue' Reason: 'No Mode Request for BswMCanSMIndication configured.' */
#define BSWM_CANSMCHANNELSTATE                                                                      STD_OFF  /**< Deactivateable: 'BswM_CanSMChannelState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_COMMCHANNELMAPPING                                                                     STD_ON
#define BSWM_EXTERNALIDOFCOMMCHANNELMAPPING                                                         STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMCHANNELMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMCHANNELMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMCHANNELMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_INITVALUEOFCOMMCHANNELMAPPING                                                          STD_ON
#define BSWM_COMMCHANNELSTATE                                                                       STD_ON
#define BSWM_COMMINITIATERESETMAPPING                                                               STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMINITIATERESETMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMINITIATERESETMAPPING                                        STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMINITIATERESETMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_INITVALUEOFCOMMINITIATERESETMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMapping.InitValue' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMINITIATERESETSTATE                                                                 STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetState' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMPNCMAPPING                                                                         STD_ON
#define BSWM_EXTERNALIDOFCOMMPNCMAPPING                                                             STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                                                    STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                                                  STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                                                      STD_ON
#define BSWM_INITVALUEOFCOMMPNCMAPPING                                                              STD_ON
#define BSWM_COMMPNCSTATE                                                                           STD_ON
#define BSWM_DCMAPPLUPDATEMAPPING                                                                   STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_INITVALUEOFDCMAPPLUPDATEMAPPING                                                        STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.InitValue' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMAPPLUPDATESTATE                                                                     STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateState' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMCOMMAPPING                                                                          STD_ON
#define BSWM_EXTERNALIDOFDCMCOMMAPPING                                                              STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                                                     STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                                                   STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                                                       STD_ON
#define BSWM_INITVALUEOFDCMCOMMAPPING                                                               STD_ON
#define BSWM_DCMCOMSTATE                                                                            STD_ON
#define BSWM_DEFERREDRULES                                                                          STD_ON
#define BSWM_RULESIDXOFDEFERREDRULES                                                                STD_ON
#define BSWM_ECUMMODEMAPPING                                                                        STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMMODEMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMMODEMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_INITVALUEOFECUMMODEMAPPING                                                             STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.InitValue' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMMODESTATE                                                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMModeState' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMRUNREQUESTMAPPING                                                                  STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_EXTERNALIDOFECUMRUNREQUESTMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMRUNREQUESTMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMRUNREQUESTMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMRUNREQUESTMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_INITVALUEOFECUMRUNREQUESTMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.InitValue' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMRUNREQUESTSTATE                                                                    STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_ECUMWAKEUPMAPPING                                                                      STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_EXTERNALIDOFECUMWAKEUPMAPPING                                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMWAKEUPMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMWAKEUPMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMWAKEUPMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_INITVALUEOFECUMWAKEUPMAPPING                                                           STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.InitValue' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ECUMWAKEUPSTATE                                                                        STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_ETHIFPORTMAPPING                                                                       STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_EXTERNALIDOFETHIFPORTMAPPING                                                           STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ExternalId' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHIFPORTMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHIFPORTMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHIFPORTMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_INITVALUEOFETHIFPORTMAPPING                                                            STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMapping.InitValue' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_ETHIFPORTSTATE                                                                         STD_OFF  /**< Deactivateable: 'BswM_EthIfPortState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_ETHSMMAPPING                                                                           STD_ON
#define BSWM_EXTERNALIDOFETHSMMAPPING                                                               STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFETHSMMAPPING                                                      STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                                                    STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFETHSMMAPPING                                                        STD_ON
#define BSWM_INITVALUEOFETHSMMAPPING                                                                STD_ON
#define BSWM_ETHSMSTATE                                                                             STD_ON
#define BSWM_FINALMAGICNUMBER                                                                       STD_OFF  /**< Deactivateable: 'BswM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_FORCEDACTIONLISTPRIORITY                                                               STD_ON
#define BSWM_FRSMMAPPING                                                                            STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_EXTERNALIDOFFRSMMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ExternalId' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFFRSMMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFFRSMMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFFRSMMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_INITVALUEOFFRSMMAPPING                                                                 STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.InitValue' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_FRSMSTATE                                                                              STD_OFF  /**< Deactivateable: 'BswM_FrSMState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_GENERICMAPPING                                                                         STD_ON
#define BSWM_EXTERNALIDOFGENERICMAPPING                                                             STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFGENERICMAPPING                                                    STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                                                  STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFGENERICMAPPING                                                      STD_ON
#define BSWM_INITVALUEOFGENERICMAPPING                                                              STD_ON
#define BSWM_GENERICSTATE                                                                           STD_ON
#define BSWM_IMMEDIATEUSER                                                                          STD_ON
#define BSWM_FORCEDOFIMMEDIATEUSER                                                                  STD_OFF  /**< Deactivateable: 'BswM_ImmediateUser.Forced' Reason: 'the value of BswM_ForcedOfImmediateUser is always 'false' due to this, the array is deactivated.' */
#define BSWM_ONINITOFIMMEDIATEUSER                                                                  STD_OFF  /**< Deactivateable: 'BswM_ImmediateUser.OnInit' Reason: 'the value of BswM_OnInitOfImmediateUser is always 'false' due to this, the array is deactivated.' */
#define BSWM_RULESINDENDIDXOFIMMEDIATEUSER                                                          STD_ON
#define BSWM_RULESINDSTARTIDXOFIMMEDIATEUSER                                                        STD_ON
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER                                                            STD_ON
#define BSWM_INITDATAHASHCODE                                                                       STD_OFF  /**< Deactivateable: 'BswM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITGENVARANDINITAL                                                                    STD_ON
#define BSWM_INITIALIZED                                                                            STD_ON
#define BSWM_J1939DCMMAPPING                                                                        STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939DCMMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939DCMMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_INITVALUEOFJ1939DCMMAPPING                                                             STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939DCMSTATE                                                                          STD_OFF  /**< Deactivateable: 'BswM_J1939DcmState' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939NMMAPPING                                                                         STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_EXTERNALIDOFJ1939NMMAPPING                                                             STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ExternalId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939NMMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939NMMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939NMMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_INITVALUEOFJ1939NMMAPPING                                                              STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_J1939NMSTATE                                                                           STD_OFF  /**< Deactivateable: 'BswM_J1939NmState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_LENGTHOFACTIONLISTPRIORITYQUEUE                                                        STD_ON
#define BSWM_LINSMMAPPING                                                                           STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_EXTERNALIDOFLINSMMAPPING                                                               STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ExternalId' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSMMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSMMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSMMAPPING                                                        STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_INITVALUEOFLINSMMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.InitValue' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSMSTATE                                                                             STD_OFF  /**< Deactivateable: 'BswM_LinSMState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_LINSCHEDULEENDMAPPING                                                                  STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEENDMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEENDMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEENDMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEENDMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEENDMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEENDSTATE                                                                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_LINSCHEDULEMAPPING                                                                     STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEMAPPING                                                          STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINSCHEDULESTATE                                                                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_LINTPMAPPING                                                                           STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_EXTERNALIDOFLINTPMAPPING                                                               STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ExternalId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINTPMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINTPMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINTPMAPPING                                                        STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_INITVALUEOFLINTPMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.InitValue' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_LINTPSTATE                                                                             STD_OFF  /**< Deactivateable: 'BswM_LinTPState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_MODENOTIFICATIONFCT                                                                    STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationFct' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_MODENOTIFICATIONMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODENOTIFICATIONMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfModeNotificationMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODENOTIFICATIONMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfModeNotificationMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODENOTIFICATIONMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfModeNotificationMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_MODEREQUESTMAPPING                                                                     STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODEREQUESTMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_MODEREQUESTQUEUE                                                                       STD_ON
#define BSWM_NMMAPPING                                                                              STD_OFF  /**< Deactivateable: 'BswM_NmMapping' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_EXTERNALIDOFNMMAPPING                                                                  STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ExternalId' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNMMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNMMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNMMAPPING                                                           STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_INITVALUEOFNMMAPPING                                                                   STD_OFF  /**< Deactivateable: 'BswM_NmMapping.InitValue' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NMSTATE                                                                                STD_OFF  /**< Deactivateable: 'BswM_NmState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_NVMBLOCKMAPPING                                                                        STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_EXTERNALIDOFNVMBLOCKMAPPING                                                            STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ExternalId' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMBLOCKMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMBLOCKMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMBLOCKMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_INITVALUEOFNVMBLOCKMAPPING                                                             STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.InitValue' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMBLOCKSTATE                                                                          STD_OFF  /**< Deactivateable: 'BswM_NvMBlockState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_NVMJOBMAPPING                                                                          STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_EXTERNALIDOFNVMJOBMAPPING                                                              STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ExternalId' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMJOBMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMJOBMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMJOBMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_INITVALUEOFNVMJOBMAPPING                                                               STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.InitValue' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_NVMJOBSTATE                                                                            STD_OFF  /**< Deactivateable: 'BswM_NvMJobState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PARTITIONIDENTIFIERS                                                                   STD_ON
#define BSWM_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                             STD_ON
#define BSWM_PARTITIONSNVOFPARTITIONIDENTIFIERS                                                     STD_ON
#define BSWM_PDURPRETRANSMITMAPPING                                                                 STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_EXTERNALIDOFPDURPRETRANSMITMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.ExternalId' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURPRETRANSMITMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURPRETRANSMITMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURPRETRANSMITMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_INITVALUEOFPDURPRETRANSMITMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.InitValue' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_PDURPRETRANSMITSTATEIDXOFPDURPRETRANSMITMAPPING                                        STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitMapping.PduRPreTransmitStateIdx' Reason: 'No Mode Request for BswMPduRPreTransmit configured.' */
#define BSWM_PDURPRETRANSMITSTATE                                                                   STD_OFF  /**< Deactivateable: 'BswM_PduRPreTransmitState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURRXINDICATIONMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURRXINDICATIONMAPPING                                                    STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURRXINDICATIONMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURRXINDICATIONMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURRXINDICATIONMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_INITVALUEOFPDURRXINDICATIONMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING                                      STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.PduRRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATE                                                                  STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURTPRXINDICATIONMAPPING                                                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURTPRXINDICATIONMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPRXINDICATIONMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPRXINDICATIONMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPRXINDICATIONMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_INITVALUEOFPDURTPRXINDICATIONMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.PduRTpRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATE                                                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURTPSTARTOFRECEPTIONMAPPING                                                          STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_EXTERNALIDOFPDURTPSTARTOFRECEPTIONMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPSTARTOFRECEPTIONMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPSTARTOFRECEPTIONMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPSTARTOFRECEPTIONMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_INITVALUEOFPDURTPSTARTOFRECEPTIONMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.PduRTpStartOfReceptionStateIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATE                                                            STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURTPTXCONFIRMATIONMAPPING                                                            STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTPTXCONFIRMATIONMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPTXCONFIRMATIONMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPTXCONFIRMATIONMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPTXCONFIRMATIONMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTPTXCONFIRMATIONMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.PduRTpTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATE                                                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURTRANSMITMAPPING                                                                    STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_EXTERNALIDOFPDURTRANSMITMAPPING                                                        STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTRANSMITMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTRANSMITMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTRANSMITMAPPING                                                 STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_INITVALUEOFPDURTRANSMITMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.InitValue' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.PduRTransmitStateIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATE                                                                      STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PDURTXCONFIRMATIONMAPPING                                                              STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTXCONFIRMATIONMAPPING                                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTXCONFIRMATIONMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTXCONFIRMATIONMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTXCONFIRMATIONMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTXCONFIRMATIONMAPPING                                                   STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.PduRTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATE                                                                STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_QUEUESEMAPHORE                                                                         STD_ON
#define BSWM_QUEUEWRITTEN                                                                           STD_ON
#define BSWM_RULESTATES                                                                             STD_ON
#define BSWM_RULES                                                                                  STD_ON
#define BSWM_FCTPTROFRULES                                                                          STD_ON
#define BSWM_IDOFRULES                                                                              STD_ON
#define BSWM_INITOFRULES                                                                            STD_ON
#define BSWM_RULESTATESIDXOFRULES                                                                   STD_ON
#define BSWM_RULESIND                                                                               STD_ON
#define BSWM_SDCLIENTSERVICEMAPPING                                                                 STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCLIENTSERVICEMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ExternalId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCLIENTSERVICEMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCLIENTSERVICEMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCLIENTSERVICEMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_INITVALUEOFSDCLIENTSERVICEMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.InitValue' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCLIENTSERVICESTATE                                                                   STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_SDCONSUMEDEVENTMAPPING                                                                 STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCONSUMEDEVENTMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ExternalId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCONSUMEDEVENTMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCONSUMEDEVENTMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCONSUMEDEVENTMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_INITVALUEOFSDCONSUMEDEVENTMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.InitValue' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTSTATE                                                                   STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_SDEVENTHANDLERMAPPING                                                                  STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDEVENTHANDLERMAPPING                                                      STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ExternalId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDEVENTHANDLERMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDEVENTHANDLERMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDEVENTHANDLERMAPPING                                               STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_INITVALUEOFSDEVENTHANDLERMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.InitValue' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SDEVENTHANDLERSTATE                                                                    STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_SIZEOFACTIONLISTPRIORITYQUEUE                                                          STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUE                                                                  STD_ON
#define BSWM_SIZEOFACTIONLISTS                                                                      STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPING                                                               STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATE                                                                 STD_ON
#define BSWM_SIZEOFCOMMPNCMAPPING                                                                   STD_ON
#define BSWM_SIZEOFCOMMPNCSTATE                                                                     STD_ON
#define BSWM_SIZEOFDCMCOMMAPPING                                                                    STD_ON
#define BSWM_SIZEOFDCMCOMSTATE                                                                      STD_ON
#define BSWM_SIZEOFDEFERREDRULES                                                                    STD_ON
#define BSWM_SIZEOFETHSMMAPPING                                                                     STD_ON
#define BSWM_SIZEOFETHSMSTATE                                                                       STD_ON
#define BSWM_SIZEOFGENERICMAPPING                                                                   STD_ON
#define BSWM_SIZEOFGENERICSTATE                                                                     STD_ON
#define BSWM_SIZEOFIMMEDIATEUSER                                                                    STD_ON
#define BSWM_SIZEOFINITGENVARANDINITAL                                                              STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUE                                                                 STD_ON
#define BSWM_SIZEOFPARTITIONIDENTIFIERS                                                             STD_ON
#define BSWM_SIZEOFRULESTATES                                                                       STD_ON
#define BSWM_SIZEOFRULES                                                                            STD_ON
#define BSWM_SIZEOFRULESIND                                                                         STD_ON
#define BSWM_SIZEOFSWCMODEREQUESTUPDATEFCT                                                          STD_ON
#define BSWM_SIZEOFTIMERSTATE                                                                       STD_ON
#define BSWM_SIZEOFTIMERVALUE                                                                       STD_ON
#define BSWM_SWCMODEREQUESTUPDATEFCT                                                                STD_ON
#define BSWM_TIMERSTATE                                                                             STD_ON
#define BSWM_TIMERVALUE                                                                             STD_ON
#define BSWM_WDGMMAPPING                                                                            STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_EXTERNALIDOFWDGMMAPPING                                                                STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ExternalId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFWDGMMAPPING                                                       STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFWDGMMAPPING                                                     STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFWDGMMAPPING                                                         STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_INITVALUEOFWDGMMAPPING                                                                 STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.InitValue' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_WDGMSTATE                                                                              STD_OFF  /**< Deactivateable: 'BswM_WdgMState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define BSWM_PCCONFIG                                                                               STD_ON
#define BSWM_FINALMAGICNUMBEROFPCCONFIG                                                             STD_OFF  /**< Deactivateable: 'BswM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITDATAHASHCODEOFPCCONFIG                                                             STD_OFF  /**< Deactivateable: 'BswM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_PCPARTITIONCONFIGOFPCCONFIG                                                            STD_ON
#define BSWM_PARTITIONIDENTIFIERSOFPCCONFIG                                                         STD_ON
#define BSWM_SIZEOFPARTITIONIDENTIFIERSOFPCCONFIG                                                   STD_ON
#define BSWM_PCPARTITIONCONFIG                                                                      STD_ON
#define BSWM_ACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                             STD_ON
#define BSWM_ACTIONLISTQUEUEOFPCPARTITIONCONFIG                                                     STD_ON
#define BSWM_ACTIONLISTSOFPCPARTITIONCONFIG                                                         STD_ON
#define BSWM_COMMCHANNELMAPPINGOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_COMMCHANNELSTATEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_COMMPNCMAPPINGOFPCPARTITIONCONFIG                                                      STD_ON
#define BSWM_COMMPNCSTATEOFPCPARTITIONCONFIG                                                        STD_ON
#define BSWM_DCMCOMMAPPINGOFPCPARTITIONCONFIG                                                       STD_ON
#define BSWM_DCMCOMSTATEOFPCPARTITIONCONFIG                                                         STD_ON
#define BSWM_DEFERREDRULESOFPCPARTITIONCONFIG                                                       STD_ON
#define BSWM_ETHSMMAPPINGOFPCPARTITIONCONFIG                                                        STD_ON
#define BSWM_ETHSMSTATEOFPCPARTITIONCONFIG                                                          STD_ON
#define BSWM_FORCEDACTIONLISTPRIORITYOFPCPARTITIONCONFIG                                            STD_ON
#define BSWM_GENERICMAPPINGOFPCPARTITIONCONFIG                                                      STD_ON
#define BSWM_GENERICSTATEOFPCPARTITIONCONFIG                                                        STD_ON
#define BSWM_IMMEDIATEUSEROFPCPARTITIONCONFIG                                                       STD_ON
#define BSWM_INITGENVARANDINITALOFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_INITIALIZEDOFPCPARTITIONCONFIG                                                         STD_ON
#define BSWM_LENGTHOFACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                     STD_ON
#define BSWM_MODEREQUESTQUEUEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_QUEUESEMAPHOREOFPCPARTITIONCONFIG                                                      STD_ON
#define BSWM_QUEUEWRITTENOFPCPARTITIONCONFIG                                                        STD_ON
#define BSWM_RULESTATESOFPCPARTITIONCONFIG                                                          STD_ON
#define BSWM_RULESINDOFPCPARTITIONCONFIG                                                            STD_ON
#define BSWM_RULESOFPCPARTITIONCONFIG                                                               STD_ON
#define BSWM_SIZEOFACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                       STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUEOFPCPARTITIONCONFIG                                               STD_ON
#define BSWM_SIZEOFACTIONLISTSOFPCPARTITIONCONFIG                                                   STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPINGOFPCPARTITIONCONFIG                                            STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATEOFPCPARTITIONCONFIG                                              STD_ON
#define BSWM_SIZEOFCOMMPNCMAPPINGOFPCPARTITIONCONFIG                                                STD_ON
#define BSWM_SIZEOFCOMMPNCSTATEOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_SIZEOFDCMCOMMAPPINGOFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_SIZEOFDCMCOMSTATEOFPCPARTITIONCONFIG                                                   STD_ON
#define BSWM_SIZEOFDEFERREDRULESOFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_SIZEOFETHSMMAPPINGOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_SIZEOFETHSMSTATEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_SIZEOFGENERICMAPPINGOFPCPARTITIONCONFIG                                                STD_ON
#define BSWM_SIZEOFGENERICSTATEOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_SIZEOFIMMEDIATEUSEROFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_SIZEOFINITGENVARANDINITALOFPCPARTITIONCONFIG                                           STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUEOFPCPARTITIONCONFIG                                              STD_ON
#define BSWM_SIZEOFRULESTATESOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_SIZEOFRULESINDOFPCPARTITIONCONFIG                                                      STD_ON
#define BSWM_SIZEOFRULESOFPCPARTITIONCONFIG                                                         STD_ON
#define BSWM_SIZEOFSWCMODEREQUESTUPDATEFCTOFPCPARTITIONCONFIG                                       STD_ON
#define BSWM_SIZEOFTIMERSTATEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_SIZEOFTIMERVALUEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_SWCMODEREQUESTUPDATEFCTOFPCPARTITIONCONFIG                                             STD_ON
#define BSWM_TIMERSTATEOFPCPARTITIONCONFIG                                                          STD_ON
#define BSWM_TIMERVALUEOFPCPARTITIONCONFIG                                                          STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMinNumericValueDefines  BswM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define BSWM_MIN_ACTIONLISTQUEUE                                                                    0u
#define BSWM_MIN_FORCEDACTIONLISTPRIORITY                                                           0u
#define BSWM_MIN_MODEREQUESTQUEUE                                                                   0u
#define BSWM_MIN_QUEUESEMAPHORE                                                                     0u
#define BSWM_MIN_RULESTATES                                                                         0u
#define BSWM_MIN_TIMERSTATE                                                                         0u
#define BSWM_MIN_TIMERVALUE                                                                         0u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaxNumericValueDefines  BswM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define BSWM_MAX_ACTIONLISTQUEUE                                                                    255u
#define BSWM_MAX_FORCEDACTIONLISTPRIORITY                                                           255u
#define BSWM_MAX_MODEREQUESTQUEUE                                                                   255u
#define BSWM_MAX_QUEUESEMAPHORE                                                                     255u
#define BSWM_MAX_RULESTATES                                                                         255u
#define BSWM_MAX_TIMERSTATE                                                                         255u
#define BSWM_MAX_TIMERVALUE                                                                         4294967295u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCNoReferenceDefines  BswM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define BSWM_NO_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                                                 255u
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                                               255u
#define BSWM_NO_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                                                  255u
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                                                255u
#define BSWM_NO_IMMEDIATEUSERENDIDXOFETHSMMAPPING                                                   255u
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                                                 255u
#define BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING                                                 255u
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                                               255u
#define BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER                                                       255u
#define BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER                                                     255u
#define BSWM_NO_IDOFRULES                                                                           255u
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIsReducedToDefineDefines  BswM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define BSWM_ISDEF_FCTPTROFACTIONLISTS                                                              STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFCOMMCHANNELMAPPING                                                   STD_OFF
#define BSWM_ISDEF_INITVALUEOFCOMMCHANNELMAPPING                                                    STD_ON
#define BSWM_ISDEF_EXTERNALIDOFCOMMPNCMAPPING                                                       STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                                              STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                                            STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                                                STD_ON
#define BSWM_ISDEF_INITVALUEOFCOMMPNCMAPPING                                                        STD_ON
#define BSWM_ISDEF_EXTERNALIDOFDCMCOMMAPPING                                                        STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                                               STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                                             STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                                                 STD_ON
#define BSWM_ISDEF_INITVALUEOFDCMCOMMAPPING                                                         STD_ON
#define BSWM_ISDEF_RULESIDXOFDEFERREDRULES                                                          STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFETHSMMAPPING                                                         STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFETHSMMAPPING                                                STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                                              STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFETHSMMAPPING                                                  STD_ON
#define BSWM_ISDEF_INITVALUEOFETHSMMAPPING                                                          STD_ON
#define BSWM_ISDEF_EXTERNALIDOFGENERICMAPPING                                                       STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFGENERICMAPPING                                              STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                                            STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFGENERICMAPPING                                                STD_OFF
#define BSWM_ISDEF_INITVALUEOFGENERICMAPPING                                                        STD_OFF
#define BSWM_ISDEF_RULESINDENDIDXOFIMMEDIATEUSER                                                    STD_OFF
#define BSWM_ISDEF_RULESINDSTARTIDXOFIMMEDIATEUSER                                                  STD_OFF
#define BSWM_ISDEF_RULESINDUSEDOFIMMEDIATEUSER                                                      STD_ON
#define BSWM_ISDEF_INITGENVARANDINITAL                                                              STD_OFF
#define BSWM_ISDEF_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                       STD_OFF
#define BSWM_ISDEF_PARTITIONSNVOFPARTITIONIDENTIFIERS                                               STD_OFF
#define BSWM_ISDEF_FCTPTROFRULES                                                                    STD_OFF
#define BSWM_ISDEF_IDOFRULES                                                                        STD_OFF
#define BSWM_ISDEF_INITOFRULES                                                                      STD_OFF
#define BSWM_ISDEF_RULESTATESIDXOFRULES                                                             STD_OFF
#define BSWM_ISDEF_RULESIND                                                                         STD_OFF
#define BSWM_ISDEF_SWCMODEREQUESTUPDATEFCT                                                          STD_OFF
#define BSWM_ISDEF_PCPARTITIONCONFIGOFPCCONFIG                                                      STD_ON
#define BSWM_ISDEF_PARTITIONIDENTIFIERSOFPCCONFIG                                                   STD_ON
#define BSWM_ISDEF_ACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                       STD_ON
#define BSWM_ISDEF_ACTIONLISTQUEUEOFPCPARTITIONCONFIG                                               STD_ON
#define BSWM_ISDEF_ACTIONLISTSOFPCPARTITIONCONFIG                                                   STD_ON
#define BSWM_ISDEF_COMMCHANNELMAPPINGOFPCPARTITIONCONFIG                                            STD_ON
#define BSWM_ISDEF_COMMCHANNELSTATEOFPCPARTITIONCONFIG                                              STD_ON
#define BSWM_ISDEF_COMMPNCMAPPINGOFPCPARTITIONCONFIG                                                STD_ON
#define BSWM_ISDEF_COMMPNCSTATEOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_ISDEF_DCMCOMMAPPINGOFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_ISDEF_DCMCOMSTATEOFPCPARTITIONCONFIG                                                   STD_ON
#define BSWM_ISDEF_DEFERREDRULESOFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_ISDEF_ETHSMMAPPINGOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_ISDEF_ETHSMSTATEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_ISDEF_FORCEDACTIONLISTPRIORITYOFPCPARTITIONCONFIG                                      STD_ON
#define BSWM_ISDEF_GENERICMAPPINGOFPCPARTITIONCONFIG                                                STD_ON
#define BSWM_ISDEF_GENERICSTATEOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_ISDEF_IMMEDIATEUSEROFPCPARTITIONCONFIG                                                 STD_ON
#define BSWM_ISDEF_INITGENVARANDINITALOFPCPARTITIONCONFIG                                           STD_ON
#define BSWM_ISDEF_INITIALIZEDOFPCPARTITIONCONFIG                                                   STD_ON
#define BSWM_ISDEF_LENGTHOFACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                               STD_ON
#define BSWM_ISDEF_MODEREQUESTQUEUEOFPCPARTITIONCONFIG                                              STD_ON
#define BSWM_ISDEF_QUEUESEMAPHOREOFPCPARTITIONCONFIG                                                STD_ON
#define BSWM_ISDEF_QUEUEWRITTENOFPCPARTITIONCONFIG                                                  STD_ON
#define BSWM_ISDEF_RULESTATESOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_ISDEF_RULESINDOFPCPARTITIONCONFIG                                                      STD_ON
#define BSWM_ISDEF_RULESOFPCPARTITIONCONFIG                                                         STD_ON
#define BSWM_ISDEF_SWCMODEREQUESTUPDATEFCTOFPCPARTITIONCONFIG                                       STD_ON
#define BSWM_ISDEF_TIMERSTATEOFPCPARTITIONCONFIG                                                    STD_ON
#define BSWM_ISDEF_TIMERVALUEOFPCPARTITIONCONFIG                                                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCEqualsAlwaysToDefines  BswM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define BSWM_EQ2_FCTPTROFACTIONLISTS                                                                
#define BSWM_EQ2_EXTERNALIDOFCOMMCHANNELMAPPING                                                     
#define BSWM_EQ2_INITVALUEOFCOMMCHANNELMAPPING                                                      COMM_NO_COMMUNICATION
#define BSWM_EQ2_EXTERNALIDOFCOMMPNCMAPPING                                                         ComMConf_ComMPnc_PNC_00_MAPPING_b2c42696
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                                                1u
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                                              0u
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                                                  TRUE
#define BSWM_EQ2_INITVALUEOFCOMMPNCMAPPING                                                          COMM_PNC_NO_COMMUNICATION
#define BSWM_EQ2_EXTERNALIDOFDCMCOMMAPPING                                                          ComMConf_ComMChannel_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                                                 2u
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                                               1u
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                                                   TRUE
#define BSWM_EQ2_INITVALUEOFDCMCOMMAPPING                                                           DCM_ENABLE_RX_TX_NORM
#define BSWM_EQ2_RULESIDXOFDEFERREDRULES                                                            
#define BSWM_EQ2_EXTERNALIDOFETHSMMAPPING                                                           ComMConf_ComMChannel_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFETHSMMAPPING                                                  3u
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                                                2u
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFETHSMMAPPING                                                    TRUE
#define BSWM_EQ2_INITVALUEOFETHSMMAPPING                                                            ETHSM_BSWM_OFFLINE
#define BSWM_EQ2_EXTERNALIDOFGENERICMAPPING                                                         
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFGENERICMAPPING                                                
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                                              
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFGENERICMAPPING                                                  
#define BSWM_EQ2_INITVALUEOFGENERICMAPPING                                                          
#define BSWM_EQ2_RULESINDENDIDXOFIMMEDIATEUSER                                                      
#define BSWM_EQ2_RULESINDSTARTIDXOFIMMEDIATEUSER                                                    
#define BSWM_EQ2_RULESINDUSEDOFIMMEDIATEUSER                                                        TRUE
#define BSWM_EQ2_INITGENVARANDINITAL                                                                
#define BSWM_EQ2_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                         
#define BSWM_EQ2_PARTITIONSNVOFPARTITIONIDENTIFIERS                                                 
#define BSWM_EQ2_FCTPTROFRULES                                                                      
#define BSWM_EQ2_IDOFRULES                                                                          
#define BSWM_EQ2_INITOFRULES                                                                        
#define BSWM_EQ2_RULESTATESIDXOFRULES                                                               
#define BSWM_EQ2_RULESIND                                                                           
#define BSWM_EQ2_SWCMODEREQUESTUPDATEFCT                                                            
#define BSWM_EQ2_PCPARTITIONCONFIGOFPCCONFIG                                                        BswM_PCPartitionConfig
#define BSWM_EQ2_PARTITIONIDENTIFIERSOFPCCONFIG                                                     BswM_PartitionIdentifiers
#define BSWM_EQ2_ACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                         BswM_ActionListPriorityQueue.raw
#define BSWM_EQ2_ACTIONLISTQUEUEOFPCPARTITIONCONFIG                                                 BswM_ActionListQueue.raw
#define BSWM_EQ2_ACTIONLISTSOFPCPARTITIONCONFIG                                                     BswM_ActionLists
#define BSWM_EQ2_COMMCHANNELMAPPINGOFPCPARTITIONCONFIG                                              BswM_ComMChannelMapping
#define BSWM_EQ2_COMMCHANNELSTATEOFPCPARTITIONCONFIG                                                BswM_ComMChannelState
#define BSWM_EQ2_COMMPNCMAPPINGOFPCPARTITIONCONFIG                                                  BswM_ComMPncMapping
#define BSWM_EQ2_COMMPNCSTATEOFPCPARTITIONCONFIG                                                    BswM_ComMPncState
#define BSWM_EQ2_DCMCOMMAPPINGOFPCPARTITIONCONFIG                                                   BswM_DcmComMapping
#define BSWM_EQ2_DCMCOMSTATEOFPCPARTITIONCONFIG                                                     BswM_DcmComState
#define BSWM_EQ2_DEFERREDRULESOFPCPARTITIONCONFIG                                                   BswM_DeferredRules
#define BSWM_EQ2_ETHSMMAPPINGOFPCPARTITIONCONFIG                                                    BswM_EthSMMapping
#define BSWM_EQ2_ETHSMSTATEOFPCPARTITIONCONFIG                                                      BswM_EthSMState
#define BSWM_EQ2_FORCEDACTIONLISTPRIORITYOFPCPARTITIONCONFIG                                        (&(BswM_ForcedActionListPriority))
#define BSWM_EQ2_GENERICMAPPINGOFPCPARTITIONCONFIG                                                  BswM_GenericMapping
#define BSWM_EQ2_GENERICSTATEOFPCPARTITIONCONFIG                                                    BswM_GenericState
#define BSWM_EQ2_IMMEDIATEUSEROFPCPARTITIONCONFIG                                                   BswM_ImmediateUser
#define BSWM_EQ2_INITGENVARANDINITALOFPCPARTITIONCONFIG                                             BswM_InitGenVarAndInitAL
#define BSWM_EQ2_INITIALIZEDOFPCPARTITIONCONFIG                                                     (&(BswM_Initialized))
#define BSWM_EQ2_LENGTHOFACTIONLISTPRIORITYQUEUEOFPCPARTITIONCONFIG                                 (&(BswM_LengthOfActionListPriorityQueue))
#define BSWM_EQ2_MODEREQUESTQUEUEOFPCPARTITIONCONFIG                                                BswM_ModeRequestQueue
#define BSWM_EQ2_QUEUESEMAPHOREOFPCPARTITIONCONFIG                                                  (&(BswM_QueueSemaphore))
#define BSWM_EQ2_QUEUEWRITTENOFPCPARTITIONCONFIG                                                    (&(BswM_QueueWritten))
#define BSWM_EQ2_RULESTATESOFPCPARTITIONCONFIG                                                      BswM_RuleStates.raw
#define BSWM_EQ2_RULESINDOFPCPARTITIONCONFIG                                                        BswM_RulesInd
#define BSWM_EQ2_RULESOFPCPARTITIONCONFIG                                                           BswM_Rules
#define BSWM_EQ2_SWCMODEREQUESTUPDATEFCTOFPCPARTITIONCONFIG                                         BswM_SwcModeRequestUpdateFct
#define BSWM_EQ2_TIMERSTATEOFPCPARTITIONCONFIG                                                      BswM_TimerState.raw
#define BSWM_EQ2_TIMERVALUEOFPCPARTITIONCONFIG                                                      BswM_TimerValue.raw
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicInitializationPointers  BswM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define BswM_Config_Ptr                                                                             NULL_PTR  /**< symbolic identifier which shall be used to initialize 'BswM' */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCInitializationSymbols  BswM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define BswM_Config                                                                                 NULL_PTR  /**< symbolic identifier which could be used to initialize 'BswM */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGeneral  BswM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define BSWM_CHECK_INIT_POINTER                                                                     STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define BSWM_FINAL_MAGIC_NUMBER                                                                     0x2A1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of BswM */
#define BSWM_INDIVIDUAL_POSTBUILD                                                                   STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'BswM' is not configured to be postbuild capable. */
#define BSWM_INIT_DATA                                                                              BSWM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define BSWM_INIT_DATA_HASH_CODE                                                                    -1519484662  /**< the precompile constant to validate the initialization structure at initialization time of BswM with a hashcode. The seed value is '0x2A1Eu' */
#define BSWM_USE_ECUM_BSW_ERROR_HOOK                                                                STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define BSWM_USE_INIT_POINTER                                                                       STD_OFF  /**< STD_ON if the init pointer BswM shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPBDataSwitches  BswM Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_PBCONFIG                                                                               STD_OFF  /**< Deactivateable: 'BswM_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_LTCONFIGIDXOFPBCONFIG                                                                  STD_OFF  /**< Deactivateable: 'BswM_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PBPARTITIONCONFIGOFPBCONFIG                                                            STD_OFF  /**< Deactivateable: 'BswM_PBConfig.PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PCCONFIGIDXOFPBCONFIG                                                                  STD_OFF  /**< Deactivateable: 'BswM_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PBPARTITIONCONFIG                                                                      STD_OFF  /**< Deactivateable: 'BswM_PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/* PRQA S 0639, 0779 PRECOMPILEGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_MSR_Rule5.2_0779 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCIterableTypes  BswM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionLists */
typedef uint8_least BswM_ActionListsIterType;

/**   \brief  type used to iterate BswM_ComMChannelMapping */
typedef uint8_least BswM_ComMChannelMappingIterType;

/**   \brief  type used to iterate BswM_ComMChannelState */
typedef uint8_least BswM_ComMChannelStateIterType;

/**   \brief  type used to iterate BswM_ComMPncMapping */
typedef uint8_least BswM_ComMPncMappingIterType;

/**   \brief  type used to iterate BswM_ComMPncState */
typedef uint8_least BswM_ComMPncStateIterType;

/**   \brief  type used to iterate BswM_DcmComMapping */
typedef uint8_least BswM_DcmComMappingIterType;

/**   \brief  type used to iterate BswM_DcmComState */
typedef uint8_least BswM_DcmComStateIterType;

/**   \brief  type used to iterate BswM_DeferredRules */
typedef uint8_least BswM_DeferredRulesIterType;

/**   \brief  type used to iterate BswM_EthSMMapping */
typedef uint8_least BswM_EthSMMappingIterType;

/**   \brief  type used to iterate BswM_EthSMState */
typedef uint8_least BswM_EthSMStateIterType;

/**   \brief  type used to iterate BswM_GenericMapping */
typedef uint8_least BswM_GenericMappingIterType;

/**   \brief  type used to iterate BswM_GenericState */
typedef uint8_least BswM_GenericStateIterType;

/**   \brief  type used to iterate BswM_ImmediateUser */
typedef uint8_least BswM_ImmediateUserIterType;

/**   \brief  type used to iterate BswM_InitGenVarAndInitAL */
typedef uint8_least BswM_InitGenVarAndInitALIterType;

/**   \brief  type used to iterate BswM_PartitionIdentifiers */
typedef uint8_least BswM_PartitionIdentifiersIterType;

/**   \brief  type used to iterate BswM_RuleStates */
typedef uint8_least BswM_RuleStatesIterType;

/**   \brief  type used to iterate BswM_Rules */
typedef uint8_least BswM_RulesIterType;

/**   \brief  type used to iterate BswM_RulesInd */
typedef uint8_least BswM_RulesIndIterType;

/**   \brief  type used to iterate BswM_SwcModeRequestUpdateFct */
typedef uint8_least BswM_SwcModeRequestUpdateFctIterType;

/**   \brief  type used to iterate BswM_TimerState */
typedef uint8_least BswM_TimerStateIterType;

/**   \brief  type used to iterate BswM_TimerValue */
typedef uint8_least BswM_TimerValueIterType;

/**   \brief  type used to iterate BswM_PCPartitionConfig */
typedef uint8_least BswM_PCPartitionConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIterableTypesWithSizeRelations  BswM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionListPriorityQueue */
typedef BswM_ActionListsIterType BswM_ActionListPriorityQueueIterType;

/**   \brief  type used to iterate BswM_ActionListQueue */
typedef BswM_ActionListsIterType BswM_ActionListQueueIterType;

/**   \brief  type used to iterate BswM_ModeRequestQueue */
typedef BswM_ImmediateUserIterType BswM_ModeRequestQueueIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCValueTypes  BswM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for BswM_ActionListQueue */
typedef uint8 BswM_ActionListQueueType;

/**   \brief  value based type definition for BswM_ExternalIdOfComMChannelMapping */
typedef uint32 BswM_ExternalIdOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_ExternalIdOfComMPncMapping */
typedef uint32 BswM_ExternalIdOfComMPncMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfComMPncMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfComMPncMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfComMPncMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfComMPncMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfComMPncMapping */
typedef boolean BswM_ImmediateUserUsedOfComMPncMappingType;

/**   \brief  value based type definition for BswM_ExternalIdOfDcmComMapping */
typedef uint32 BswM_ExternalIdOfDcmComMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfDcmComMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfDcmComMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfDcmComMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfDcmComMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfDcmComMapping */
typedef boolean BswM_ImmediateUserUsedOfDcmComMappingType;

/**   \brief  value based type definition for BswM_RulesIdxOfDeferredRules */
typedef uint8 BswM_RulesIdxOfDeferredRulesType;

/**   \brief  value based type definition for BswM_ExternalIdOfEthSMMapping */
typedef uint32 BswM_ExternalIdOfEthSMMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfEthSMMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfEthSMMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfEthSMMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfEthSMMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfEthSMMapping */
typedef boolean BswM_ImmediateUserUsedOfEthSMMappingType;

/**   \brief  value based type definition for BswM_ForcedActionListPriority */
typedef uint8 BswM_ForcedActionListPriorityType;

/**   \brief  value based type definition for BswM_ExternalIdOfGenericMapping */
typedef uint32 BswM_ExternalIdOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfGenericMapping */
typedef boolean BswM_ImmediateUserUsedOfGenericMappingType;

/**   \brief  value based type definition for BswM_RulesIndEndIdxOfImmediateUser */
typedef uint8 BswM_RulesIndEndIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndStartIdxOfImmediateUser */
typedef uint8 BswM_RulesIndStartIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndUsedOfImmediateUser */
typedef boolean BswM_RulesIndUsedOfImmediateUserType;

/**   \brief  value based type definition for BswM_Initialized */
typedef boolean BswM_InitializedType;

/**   \brief  value based type definition for BswM_ModeRequestQueue */
typedef uint8 BswM_ModeRequestQueueType;

/**   \brief  value based type definition for BswM_PCPartitionConfigIdxOfPartitionIdentifiers */
typedef uint8 BswM_PCPartitionConfigIdxOfPartitionIdentifiersType;

/**   \brief  value based type definition for BswM_PartitionSNVOfPartitionIdentifiers */
typedef uint32 BswM_PartitionSNVOfPartitionIdentifiersType;

/**   \brief  value based type definition for BswM_QueueSemaphore */
typedef uint8 BswM_QueueSemaphoreType;

/**   \brief  value based type definition for BswM_QueueWritten */
typedef boolean BswM_QueueWrittenType;

/**   \brief  value based type definition for BswM_RuleStates */
typedef uint8 BswM_RuleStatesType;

/**   \brief  value based type definition for BswM_IdOfRules */
typedef uint8 BswM_IdOfRulesType;

/**   \brief  value based type definition for BswM_InitOfRules */
typedef uint8 BswM_InitOfRulesType;

/**   \brief  value based type definition for BswM_RuleStatesIdxOfRules */
typedef uint8 BswM_RuleStatesIdxOfRulesType;

/**   \brief  value based type definition for BswM_RulesInd */
typedef uint8 BswM_RulesIndType;

/**   \brief  value based type definition for BswM_SizeOfActionListPriorityQueue */
typedef uint8 BswM_SizeOfActionListPriorityQueueType;

/**   \brief  value based type definition for BswM_SizeOfActionListQueue */
typedef uint8 BswM_SizeOfActionListQueueType;

/**   \brief  value based type definition for BswM_SizeOfActionLists */
typedef uint8 BswM_SizeOfActionListsType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelMapping */
typedef uint8 BswM_SizeOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelState */
typedef uint8 BswM_SizeOfComMChannelStateType;

/**   \brief  value based type definition for BswM_SizeOfComMPncMapping */
typedef uint8 BswM_SizeOfComMPncMappingType;

/**   \brief  value based type definition for BswM_SizeOfComMPncState */
typedef uint8 BswM_SizeOfComMPncStateType;

/**   \brief  value based type definition for BswM_SizeOfDcmComMapping */
typedef uint8 BswM_SizeOfDcmComMappingType;

/**   \brief  value based type definition for BswM_SizeOfDcmComState */
typedef uint8 BswM_SizeOfDcmComStateType;

/**   \brief  value based type definition for BswM_SizeOfDeferredRules */
typedef uint8 BswM_SizeOfDeferredRulesType;

/**   \brief  value based type definition for BswM_SizeOfEthSMMapping */
typedef uint8 BswM_SizeOfEthSMMappingType;

/**   \brief  value based type definition for BswM_SizeOfEthSMState */
typedef uint8 BswM_SizeOfEthSMStateType;

/**   \brief  value based type definition for BswM_SizeOfGenericMapping */
typedef uint8 BswM_SizeOfGenericMappingType;

/**   \brief  value based type definition for BswM_SizeOfGenericState */
typedef uint8 BswM_SizeOfGenericStateType;

/**   \brief  value based type definition for BswM_SizeOfImmediateUser */
typedef uint8 BswM_SizeOfImmediateUserType;

/**   \brief  value based type definition for BswM_SizeOfInitGenVarAndInitAL */
typedef uint8 BswM_SizeOfInitGenVarAndInitALType;

/**   \brief  value based type definition for BswM_SizeOfModeRequestQueue */
typedef uint8 BswM_SizeOfModeRequestQueueType;

/**   \brief  value based type definition for BswM_SizeOfPartitionIdentifiers */
typedef uint8 BswM_SizeOfPartitionIdentifiersType;

/**   \brief  value based type definition for BswM_SizeOfRuleStates */
typedef uint8 BswM_SizeOfRuleStatesType;

/**   \brief  value based type definition for BswM_SizeOfRules */
typedef uint8 BswM_SizeOfRulesType;

/**   \brief  value based type definition for BswM_SizeOfRulesInd */
typedef uint8 BswM_SizeOfRulesIndType;

/**   \brief  value based type definition for BswM_SizeOfSwcModeRequestUpdateFct */
typedef uint8 BswM_SizeOfSwcModeRequestUpdateFctType;

/**   \brief  value based type definition for BswM_SizeOfTimerState */
typedef uint8 BswM_SizeOfTimerStateType;

/**   \brief  value based type definition for BswM_SizeOfTimerValue */
typedef uint8 BswM_SizeOfTimerValueType;

/**   \brief  value based type definition for BswM_TimerState */
typedef uint8 BswM_TimerStateType;

/**   \brief  value based type definition for BswM_TimerValue */
typedef uint32 BswM_TimerValueType;

/** 
  \}
*/ 


/* PRQA L:PRECOMPILEGLOBALDATATYPES */

typedef uint8 BswM_UserDomainType; /* user domain: CanSM, LinSM... */

/* It is possible to configure any user number from 0 to 65535 */
typedef uint16 BswM_UserType;
typedef uint16 BswM_ModeType;
typedef uint8 BswM_HandleType;
typedef P2FUNC (void, BSWM_CODE, BswM_InitGenVarAndInitALType)(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
typedef P2FUNC (BswM_HandleType, BSWM_CODE, BswM_RuleTableFctPtrType)(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
typedef P2FUNC (Std_ReturnType, BSWM_CODE, BswM_ActionListFuncType)(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);

typedef P2FUNC (void, BSWM_CODE, BswM_PartitionFunctionType)(void);

/* PRQA S 0639, 0779 PRECOMPILEGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_MSR_Rule5.2_0779 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCStructTypes  BswM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in BswM_ActionLists */
typedef struct sBswM_ActionListsType
{
  BswM_ActionListFuncType FctPtrOfActionLists;  /**< Pointer to the array list function. */
} BswM_ActionListsType;

/**   \brief  type used in BswM_ComMChannelMapping */
typedef struct sBswM_ComMChannelMappingType
{
  BswM_ExternalIdOfComMChannelMappingType ExternalIdOfComMChannelMapping;  /**< External id of BswMComMIndication. */
} BswM_ComMChannelMappingType;

/**   \brief  type used in BswM_ComMPncMapping */
typedef struct sBswM_ComMPncMappingType
{
  uint8 BswM_ComMPncMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_ComMPncMappingType;

/**   \brief  type used in BswM_DcmComMapping */
typedef struct sBswM_DcmComMappingType
{
  uint8 BswM_DcmComMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_DcmComMappingType;

/**   \brief  type used in BswM_DeferredRules */
typedef struct sBswM_DeferredRulesType
{
  BswM_RulesIdxOfDeferredRulesType RulesIdxOfDeferredRules;  /**< the index of the 1:1 relation pointing to BswM_Rules */
} BswM_DeferredRulesType;

/**   \brief  type used in BswM_EthSMMapping */
typedef struct sBswM_EthSMMappingType
{
  uint8 BswM_EthSMMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_EthSMMappingType;

/**   \brief  type used in BswM_GenericMapping */
typedef struct sBswM_GenericMappingType
{
  BswM_ExternalIdOfGenericMappingType ExternalIdOfGenericMapping;  /**< External id of BswMGenericRequest. */
  BswM_ImmediateUserEndIdxOfGenericMappingType ImmediateUserEndIdxOfGenericMapping;  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ImmediateUserStartIdxOfGenericMappingType ImmediateUserStartIdxOfGenericMapping;  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ModeType InitValueOfGenericMapping;  /**< Initialization value of port. */
} BswM_GenericMappingType;

/**   \brief  type used in BswM_ImmediateUser */
typedef struct sBswM_ImmediateUserType
{
  BswM_RulesIndEndIdxOfImmediateUserType RulesIndEndIdxOfImmediateUser;  /**< the end index of the 0:n relation pointing to BswM_RulesInd */
  BswM_RulesIndStartIdxOfImmediateUserType RulesIndStartIdxOfImmediateUser;  /**< the start index of the 0:n relation pointing to BswM_RulesInd */
} BswM_ImmediateUserType;

/**   \brief  type used in BswM_PartitionIdentifiers */
typedef struct sBswM_PartitionIdentifiersType
{
  BswM_PartitionSNVOfPartitionIdentifiersType PartitionSNVOfPartitionIdentifiers;
  BswM_PCPartitionConfigIdxOfPartitionIdentifiersType PCPartitionConfigIdxOfPartitionIdentifiers;  /**< the index of the 1:1 relation pointing to BswM_PCPartitionConfig */
} BswM_PartitionIdentifiersType;

/**   \brief  type used in BswM_Rules */
typedef struct sBswM_RulesType
{
  BswM_IdOfRulesType IdOfRules;  /**< External id of rule. */
  BswM_InitOfRulesType InitOfRules;  /**< Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED). */
  BswM_RuleStatesIdxOfRulesType RuleStatesIdxOfRules;  /**< the index of the 1:1 relation pointing to BswM_RuleStates */
  BswM_RuleTableFctPtrType FctPtrOfRules;  /**< Pointer to the rule function which does the arbitration. */
} BswM_RulesType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicStructTypes  BswM Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to BswM_ActionListPriorityQueue in the partition context  */
typedef struct BswM_ActionListPriorityQueueStructSTag
{
  BswM_SizeOfActionListQueueType AL_BSWM_List_2A;
  BswM_SizeOfActionListQueueType AL_BSWM_List_2B;
  BswM_SizeOfActionListQueueType AL_BSWM_List_2C;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Shutdown_Nm;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Shutdown_Com_Dem_FirstRun;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Shutdown_NvM;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Shutdown_Pmic;
  BswM_SizeOfActionListQueueType AL_BSWM_List_ModeRequestNVM;
  BswM_SizeOfActionListQueueType AL_BSWM_List_ModeRequestPMIC;
  BswM_SizeOfActionListQueueType AL_BSWM_List_ModeRequestComDemFirstRun;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0;
  BswM_SizeOfActionListQueueType AL_BSWM_List_FULL_COM_PNC0;
  BswM_SizeOfActionListQueueType AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com;
  BswM_SizeOfActionListQueueType AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com;
  BswM_SizeOfActionListQueueType AL_BSWM_List_Reset;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON;
  BswM_SizeOfActionListQueueType AL_BSWM_List_PduGroupsAll_Enable;
  BswM_SizeOfActionListQueueType AL_BSWM_List_PduGroupsAll_Disable;
  BswM_SizeOfActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0;
  BswM_SizeOfActionListQueueType AL_BswMActionList_SILENT_COMMUNICATION_ON;
  BswM_SizeOfActionListQueueType AL_BswMActionList_SILENT_COMMUNICATION_OFF;
} BswM_ActionListPriorityQueueStructSType;

/**   \brief  type to be used as symbolic data element access to BswM_ActionListQueue in the partition context  */
typedef struct BswM_ActionListQueueStructSTag
{
  BswM_ActionListQueueType AL_BSWM_List_2A;
  BswM_ActionListQueueType AL_BSWM_List_2B;
  BswM_ActionListQueueType AL_BSWM_List_2C;
  BswM_ActionListQueueType AL_BSWM_List_Shutdown_Nm;
  BswM_ActionListQueueType AL_BSWM_List_Shutdown_Com_Dem_FirstRun;
  BswM_ActionListQueueType AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns;
  BswM_ActionListQueueType AL_BSWM_List_Shutdown_NvM;
  BswM_ActionListQueueType AL_BSWM_List_Shutdown_Pmic;
  BswM_ActionListQueueType AL_BSWM_List_ModeRequestNVM;
  BswM_ActionListQueueType AL_BSWM_List_ModeRequestPMIC;
  BswM_ActionListQueueType AL_BSWM_List_ModeRequestComDemFirstRun;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0;
  BswM_ActionListQueueType AL_BSWM_List_FULL_COM_PNC0;
  BswM_ActionListQueueType AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com;
  BswM_ActionListQueueType AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com;
  BswM_ActionListQueueType AL_BSWM_List_Reset;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON;
  BswM_ActionListQueueType AL_BSWM_List_PduGroupsAll_Enable;
  BswM_ActionListQueueType AL_BSWM_List_PduGroupsAll_Disable;
  BswM_ActionListQueueType AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0;
  BswM_ActionListQueueType AL_BswMActionList_SILENT_COMMUNICATION_ON;
  BswM_ActionListQueueType AL_BswMActionList_SILENT_COMMUNICATION_OFF;
} BswM_ActionListQueueStructSType;

/**   \brief  type to be used as symbolic data element access to BswM_RuleStates in the partition context  */
typedef struct BswM_RuleStatesStructSTag
{
  BswM_RuleStatesType R_ExecuteInitList2A;
  BswM_RuleStatesType R_ExecuteInitList2B;
  BswM_RuleStatesType R_ExecuteInitList2C;
  BswM_RuleStatesType R_Shutdown_Nm;
  BswM_RuleStatesType R_Shutdown_Com_Dem_FirstRun;
  BswM_RuleStatesType R_Shutdown_NvM;
  BswM_RuleStatesType R_Shutdown_Pmic;
  BswM_RuleStatesType R_Shutdown_Com_Dem_SubsequentRuns;
  BswM_RuleStatesType R_DemTimerExpired;
  BswM_RuleStatesType R_NvmTimerExpired;
  BswM_RuleStatesType R_Shutdown_Inactive;
  BswM_RuleStatesType R_NoCom_Finished;
  BswM_RuleStatesType R_DiagSoftReset;
  BswM_RuleStatesType R_DiagHardReset;
  BswM_RuleStatesType R_Rule_PLCM_PNC_FULLCOMM;
  BswM_RuleStatesType R_Rule_Control_ComMUser_AllNMLightChannels;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON;
  BswM_RuleStatesType R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON;
  BswM_RuleStatesType R_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active;
  BswM_RuleStatesType R_BswMRule_DcmEcuReset_GotoUFBL;
  BswM_RuleStatesType R_BswMRule_SILENT_COMMUNICATION;
} BswM_RuleStatesStructSType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerState in the partition context  */
typedef struct BswM_TimerStateStructSTag
{
  BswM_TimerStateType MRP_DemShutdownTimer;
  BswM_TimerStateType MRP_NvmWriteAllTimer;
} BswM_TimerStateStructSType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerValue in the partition context  */
typedef struct BswM_TimerValueStructSTag
{
  BswM_TimerValueType MRP_DemShutdownTimer;
  BswM_TimerValueType MRP_NvmWriteAllTimer;
} BswM_TimerValueStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCUnionIndexAndSymbolTypes  BswM Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access BswM_ActionListPriorityQueue in an index and symbol based style. */
typedef union BswM_ActionListPriorityQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  BswM_SizeOfActionListQueueType raw[30];
  BswM_ActionListPriorityQueueStructSType str;
} BswM_ActionListPriorityQueueUType;

/**   \brief  type to access BswM_ActionListQueue in an index and symbol based style. */
typedef union BswM_ActionListQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  BswM_ActionListQueueType raw[30];
  BswM_ActionListQueueStructSType str;
} BswM_ActionListQueueUType;

/**   \brief  type to access BswM_RuleStates in an index and symbol based style. */
typedef union BswM_RuleStatesUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  BswM_RuleStatesType raw[27];
  BswM_RuleStatesStructSType str;
} BswM_RuleStatesUType;

/**   \brief  type to access BswM_TimerState in an index and symbol based style. */
typedef union BswM_TimerStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  BswM_TimerStateType raw[2];
  BswM_TimerStateStructSType str;
} BswM_TimerStateUType;

/**   \brief  type to access BswM_TimerValue in an index and symbol based style. */
typedef union BswM_TimerValueUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  BswM_TimerValueType raw[2];
  BswM_TimerValueStructSType str;
} BswM_TimerValueUType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootPointerTypes  BswM Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to BswM_ActionListPriorityQueue */
typedef P2VAR(BswM_SizeOfActionListQueueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ActionListPriorityQueuePtrType;

/**   \brief  type used to point to BswM_ActionListQueue */
typedef P2VAR(BswM_ActionListQueueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ActionListQueuePtrType;

/**   \brief  type used to point to BswM_ActionLists */
typedef P2CONST(BswM_ActionListsType, TYPEDEF, BSWM_CONST) BswM_ActionListsPtrType;

/**   \brief  type used to point to BswM_ComMChannelMapping */
typedef P2CONST(BswM_ComMChannelMappingType, TYPEDEF, BSWM_CONST) BswM_ComMChannelMappingPtrType;

/**   \brief  type used to point to BswM_ComMChannelState */
typedef P2VAR(ComM_ModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ComMChannelStatePtrType;

/**   \brief  type used to point to BswM_ComMPncMapping */
typedef P2CONST(BswM_ComMPncMappingType, TYPEDEF, BSWM_CONST) BswM_ComMPncMappingPtrType;

/**   \brief  type used to point to BswM_ComMPncState */
typedef P2VAR(ComM_PncModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ComMPncStatePtrType;

/**   \brief  type used to point to BswM_DcmComMapping */
typedef P2CONST(BswM_DcmComMappingType, TYPEDEF, BSWM_CONST) BswM_DcmComMappingPtrType;

/**   \brief  type used to point to BswM_DcmComState */
typedef P2VAR(Dcm_CommunicationModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_DcmComStatePtrType;

/**   \brief  type used to point to BswM_DeferredRules */
typedef P2CONST(BswM_DeferredRulesType, TYPEDEF, BSWM_CONST) BswM_DeferredRulesPtrType;

/**   \brief  type used to point to BswM_EthSMMapping */
typedef P2CONST(BswM_EthSMMappingType, TYPEDEF, BSWM_CONST) BswM_EthSMMappingPtrType;

/**   \brief  type used to point to BswM_EthSMState */
typedef P2VAR(EthSM_NetworkModeStateType, TYPEDEF, BSWM_VAR_NOINIT) BswM_EthSMStatePtrType;

/**   \brief  type used to point to BswM_ForcedActionListPriority */
typedef P2VAR(BswM_ForcedActionListPriorityType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ForcedActionListPriorityPtrType;

/**   \brief  type used to point to BswM_GenericMapping */
typedef P2CONST(BswM_GenericMappingType, TYPEDEF, BSWM_CONST) BswM_GenericMappingPtrType;

/**   \brief  type used to point to BswM_GenericState */
typedef P2VAR(BswM_ModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_GenericStatePtrType;

/**   \brief  type used to point to BswM_ImmediateUser */
typedef P2CONST(BswM_ImmediateUserType, TYPEDEF, BSWM_CONST) BswM_ImmediateUserPtrType;

/**   \brief  type used to point to BswM_InitGenVarAndInitAL */
typedef P2CONST(BswM_InitGenVarAndInitALType, TYPEDEF, BSWM_CONST) BswM_InitGenVarAndInitALPtrType;

/**   \brief  type used to point to BswM_Initialized */
typedef P2VAR(BswM_InitializedType, TYPEDEF, BSWM_VAR_NOINIT) BswM_InitializedPtrType;

/**   \brief  type used to point to BswM_LengthOfActionListPriorityQueue */
typedef P2VAR(BswM_ActionListQueueIterType, TYPEDEF, BSWM_VAR_NOINIT) BswM_LengthOfActionListPriorityQueuePtrType;

/**   \brief  type used to point to BswM_ModeRequestQueue */
typedef P2VAR(BswM_ModeRequestQueueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ModeRequestQueuePtrType;

/**   \brief  type used to point to BswM_PartitionIdentifiers */
typedef P2CONST(BswM_PartitionIdentifiersType, TYPEDEF, BSWM_CONST) BswM_PartitionIdentifiersPtrType;

/**   \brief  type used to point to BswM_QueueSemaphore */
typedef P2VAR(BswM_QueueSemaphoreType, TYPEDEF, BSWM_VAR_NOINIT) BswM_QueueSemaphorePtrType;

/**   \brief  type used to point to BswM_QueueWritten */
typedef P2VAR(BswM_QueueWrittenType, TYPEDEF, BSWM_VAR_NOINIT) BswM_QueueWrittenPtrType;

/**   \brief  type used to point to BswM_RuleStates */
typedef P2VAR(BswM_RuleStatesType, TYPEDEF, BSWM_VAR_NOINIT) BswM_RuleStatesPtrType;

/**   \brief  type used to point to BswM_Rules */
typedef P2CONST(BswM_RulesType, TYPEDEF, BSWM_CONST) BswM_RulesPtrType;

/**   \brief  type used to point to BswM_RulesInd */
typedef P2CONST(BswM_RulesIndType, TYPEDEF, BSWM_CONST) BswM_RulesIndPtrType;

/**   \brief  type used to point to BswM_SwcModeRequestUpdateFct */
typedef P2CONST(BswM_PartitionFunctionType, TYPEDEF, BSWM_CONST) BswM_SwcModeRequestUpdateFctPtrType;

/**   \brief  type used to point to BswM_TimerState */
typedef P2VAR(BswM_TimerStateType, TYPEDEF, BSWM_VAR_NOINIT) BswM_TimerStatePtrType;

/**   \brief  type used to point to BswM_TimerValue */
typedef P2VAR(BswM_TimerValueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_TimerValuePtrType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCPartitionRootPointer  BswM Partition Root Pointer (PRE_COMPILE)
  \brief  This type definitions are used for partition specific instance.
  \{
*/ 
/**   \brief  type used in BswM_PCPartitionConfig */
typedef struct sBswM_PCPartitionConfigType
{
  uint8 BswM_PCPartitionConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_PCPartitionConfigType;

/**   \brief  type used to point to BswM_PCPartitionConfig */
typedef P2CONST(BswM_PCPartitionConfigType, TYPEDEF, BSWM_CONST) BswM_PCPartitionConfigPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootValueTypes  BswM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in BswM_PCConfig */
typedef struct sBswM_PCConfigType
{
  uint8 BswM_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_PCConfigType;

typedef BswM_PCConfigType BswM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/* PRQA L:PRECOMPILEGLOBALDATATYPES */





/* PRQA S 0639, 0779 POSTBUILDGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_MSR_Rule5.2_0779 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* PRQA L:POSTBUILDGLOBALDATATYPES */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3449, 3451 EXTERNDECLARATIONS */ /* MD_BSWM_3449, MD_BSWM_3451 */ 

/* PRQA L:EXTERNDECLARATIONS */



/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_OsApplicationToBswM
**********************************************************************************************************************/


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

extern VAR(Rte_ModeType_DcmEcuReset, BSWM_VAR_NOINIT) BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset;
extern VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8;
extern VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978;
extern VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad;


extern VAR(boolean, BSWM_VAR_NOINIT) BswM_PreInitialized;
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
&&&~ USER CALLOUT DECLARATIONS
----------------------------------------------------------------------------- */
/* PRQA S 0777 CALLOUTDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */
extern FUNC(void, BSWM_CODE) AntiRollback_Check(void);
extern FUNC(void, BSWM_CODE) BswM_CheckDemShutdownState(void);
extern FUNC(void, BSWM_CODE) BswM_Flsp_UseBackupOnly(void);
extern FUNC(void, BSWM_CODE) BswM_HandleSidInformation(void);
extern FUNC(void, BSWM_CODE) BswM_MTSI_Init(void);
extern FUNC(void, BSWM_CODE) BswM_Nvm_WriteAll(void);
extern FUNC(void, BSWM_CODE) BswM_SetRestartFlag(void);
extern FUNC(void, BSWM_CODE) BswM_XCP_Control(void);
extern FUNC(void, BSWM_CODE) BswM_onShutdownPmic(void);
extern FUNC(void, BSWM_CODE) Jtag_Debug_Status(void);
extern FUNC(void, BSWM_CODE) PublicPrivateKeysPair_InitialCheck(void);
extern FUNC(void, BSWM_CODE) RandomSeed_Instantiate(void);
extern FUNC(void, BSWM_CODE) Trcv_PinStrapping(void);
/* PRQA L:CALLOUTDECLARATIONS */

/* -----------------------------------------------------------------------------
&&&~ USER CALLOUT DECLARATIONS
----------------------------------------------------------------------------- */
#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

#endif /* BSWM_CFG_H */
