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
 *              File: BswM_Lcfg.c
 *   Generation Time: 2022-08-25 11:30:42
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

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ MISRA JUSTIFICATION
 ----------------------------------------------------------------------------- */
/* PRQA S 0785, 0786 EOF */ /* MD_CSL_DistinctIdentifiers */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId       Id of the rule to execute.
 * \param[in]   partitionIdx   Current partition context.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId,
                                                                   BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId         Id of the rule to update.
 * \param[in]   state          New state of the rule.
 * \param[in]   partitionIdx   Current partition context.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                              BswM_RuleStatesType state,
                                                              BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId        Id of the timer to update.
 * \param[in]   value          New value of the timer.
 * \param[in]   partitionIdx   Current partition context. 
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx,
                                                         BswM_SizeOfTimerValueType timerId,
                                                         BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of group Init */

/**********************************************************************************************************************
 *  SwcModeRequestUpdate
 *********************************************************************************************************************/
/*! \defgroup    SwcModeRequestUpdate
 * \{
 */
/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Reads port values from RTE.
 * \details     Gets the current value of SwcModeRequest Ports and SwcNotification Ports from RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION(void);
/*! \} */ /* End of group SwcModeRequestUpdate */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2A(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2B(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2C(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Nm(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Com_Dem_FirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Com_Dem_SubsequentRuns(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_NvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Pmic(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestNVM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestPMIC(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestComDemFirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_FULL_COM_PNC0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_No_Com(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_Full_Com(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Reset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_PduGroupsAll_Enable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_PduGroupsAll_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
#define BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF
#define BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON
#define BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF
#define BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2A(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2B(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2C(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Nm(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Com_Dem_FirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_NvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Pmic(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Com_Dem_SubsequentRuns(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DemTimerExpired(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_NvmTimerExpired(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Inactive(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_NoCom_Finished(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DiagSoftReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DiagHardReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_PLCM_PNC_FULLCOMM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Control_ComMUser_AllNMLightChannels(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmEcuReset_GotoUFBL(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_SILENT_COMMUNICATION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */ 


#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA S 3218 3 */ /* MD_BswM_3218 */
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/


/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BSWM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[30] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FctPtr                                                                                                                    Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_BSWM_List_2A                                                                                       },  /* [Priority: 6] */  /* [AL_BSWM_List_2A] */
  { /*     1 */ BswM_ActionList_BSWM_List_2B                                                                                       },  /* [Priority: 5] */  /* [AL_BSWM_List_2B] */
  { /*     2 */ BswM_ActionList_BSWM_List_2C                                                                                       },  /* [Priority: 4] */  /* [AL_BSWM_List_2C] */
  { /*     3 */ BswM_ActionList_BSWM_List_Shutdown_Nm                                                                              },  /* [Priority: 3] */  /* [AL_BSWM_List_Shutdown_Nm] */
  { /*     4 */ BswM_ActionList_BSWM_List_Shutdown_Com_Dem_FirstRun                                                                },  /* [Priority: 2] */  /* [AL_BSWM_List_Shutdown_Com_Dem_FirstRun] */
  { /*     5 */ BswM_ActionList_BSWM_List_Shutdown_Com_Dem_SubsequentRuns                                                          },  /* [Priority: 2] */  /* [AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns] */
  { /*     6 */ BswM_ActionList_BSWM_List_Shutdown_NvM                                                                             },  /* [Priority: 1] */  /* [AL_BSWM_List_Shutdown_NvM] */
  { /*     7 */ BswM_ActionList_BSWM_List_Shutdown_Pmic                                                                            },  /* [Priority: 0] */  /* [AL_BSWM_List_Shutdown_Pmic] */
  { /*     8 */ BswM_ActionList_BSWM_List_ModeRequestNVM                                                                           },  /* [Priority: 0] */  /* [AL_BSWM_List_ModeRequestNVM] */
  { /*     9 */ BswM_ActionList_BSWM_List_ModeRequestPMIC                                                                          },  /* [Priority: 0] */  /* [AL_BSWM_List_ModeRequestPMIC] */
  { /*    10 */ BswM_ActionList_BSWM_List_ModeRequestComDemFirstRun                                                                },  /* [Priority: 0] */  /* [AL_BSWM_List_ModeRequestComDemFirstRun] */
  { /*    11 */ BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0                                          },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0] */
  { /*    12 */ BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0                                          },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0] */
  { /*    13 */ BswM_ActionList_BSWM_List_FULL_COM_PNC0                                                                            },  /* [Priority: 0] */  /* [AL_BSWM_List_FULL_COM_PNC0] */
  { /*    14 */ BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_No_Com                                                       },  /* [Priority: 0] */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com] */
  { /*    15 */ BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_Full_Com                                                     },  /* [Priority: 0] */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com] */
  { /*    16 */ BswM_ActionList_BSWM_List_Reset                                                                                    },  /* [Priority: 0] */  /* [AL_BSWM_List_Reset] */
  { /*    17 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF] */
  { /*    18 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON  },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON] */
  { /*    19 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF] */
  { /*    20 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON  },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON] */
  { /*    21 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF] */
  { /*    22 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON  },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON] */
  { /*    23 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF] */
  { /*    24 */ BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON  },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON] */
  { /*    25 */ BswM_ActionList_BSWM_List_PduGroupsAll_Enable                                                                      },  /* [Priority: 0] */  /* [AL_BSWM_List_PduGroupsAll_Enable] */
  { /*    26 */ BswM_ActionList_BSWM_List_PduGroupsAll_Disable                                                                     },  /* [Priority: 0] */  /* [AL_BSWM_List_PduGroupsAll_Disable] */
  { /*    27 */ BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0                                      },  /* [Priority: 0] */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0] */
  { /*    28 */ BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_ON                                                             },  /* [Priority: 0] */  /* [AL_BswMActionList_SILENT_COMMUNICATION_ON] */
  { /*    29 */ BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_OFF                                                            }   /* [Priority: 0] */  /* [AL_BswMActionList_SILENT_COMMUNICATION_OFF] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelMapping
  \brief  Maps the external id of BswMComMIndication to an internal id and references immediate request ports.
  \details
  Element       Description
  ExternalId    External id of BswMComMIndication.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ComMChannelMappingType, BSWM_CONST) BswM_ComMChannelMapping[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExternalId                                                              Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917 },  /* [COMM_CHANNEL_0, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch1_V127] */
  { /*     1 */ ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8 },  /* [COMM_CHANNEL_1, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch3_V21] */
  { /*     2 */ ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978 },  /* [COMM_CHANNEL_2, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch2_V2] */
  { /*     3 */ ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad }   /* [COMM_CHANNEL_3, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch0_V1] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[12] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       8u },  /* [R_DemTimerExpired] */
  { /*     1 */       9u },  /* [R_NvmTimerExpired] */
  { /*     2 */      11u },  /* [R_NoCom_Finished] */
  { /*     3 */      12u },  /* [R_DiagSoftReset] */
  { /*     4 */      13u },  /* [R_DiagHardReset] */
  { /*     5 */      14u },  /* [R_Rule_PLCM_PNC_FULLCOMM] */
  { /*     6 */      16u },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF] */
  { /*     7 */      18u },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF] */
  { /*     8 */      19u },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF] */
  { /*     9 */      20u },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON] */
  { /*    10 */      22u },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON] */
  { /*    11 */      23u }   /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExternalId                                                 ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                                                      Referable Keys */
  { /*     0 */ BSWM_GENERIC_BSWM_REQ_PNC_FULLCOMM                       , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_BSWM_REQ_PNC_FULLCOMM_BSWM_FULLCOMM_OFF                               },  /* [GENERIC_0, MRP_BSWM_REQ_PNC_FULLCOMM] */
  { /*     1 */ BSWM_GENERIC_BSWM_REQ_SHUT_DOWN                          ,                                          4u,                                            3u, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_UNDEFINED                                          },  /* [GENERIC_1, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     2 */ BSWM_GENERIC_BSWM_REQ_STARTUP_2A                         ,                                          5u,                                            4u, BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2A_BSWM_STARTUP_TWO_A                                },  /* [GENERIC_2, MRP_BSWM_REQ_STARTUP_2A] */
  { /*     3 */ BSWM_GENERIC_BSWM_REQ_STARTUP_2B                         ,                                          6u,                                            5u, BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2B_BSWM_STARTUP_TWO_B                                },  /* [GENERIC_3, MRP_BSWM_REQ_STARTUP_2B] */
  { /*     4 */ BSWM_GENERIC_BSWM_REQ_STARTUP_2C                         ,                                          7u,                                            6u, BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2C_BSWM_STARTUP_TWO_C                                },  /* [GENERIC_4, MRP_BSWM_REQ_STARTUP_2C] */
  { /*     5 */ BSWM_GENERIC_BswMModeRequestPort_DGM_SILENT_COMMUNICATION,                                          8u,                                            7u, BSWM_GENERICVALUE_BswMModeRequestPort_DGM_SILENT_COMMUNICATION_SILENT_COMMUNICATION_OFF },  /* [GENERIC_5, MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION] */
  { /*     6 */ BSWM_GENERIC_BswM_ReqMode_DcmEcuReset_GotoUFBL           ,                                          9u,                                            8u, BSWM_GENERICVALUE_BswM_ReqMode_DcmEcuReset_GotoUFBL_BswMGenericRequestMode_InitValue    }   /* [GENERIC_6, MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RulesIndEndIdx  RulesIndStartIdx        Comment                                                                              Referable Keys */
  { /*     0 */             2u,               0u },  /* [Name: BSWM_REQ_PNC0_STATE]                                              */  /* [MRP_BSWM_REQ_PNC0_STATE, COMM_PNC_0] */
  { /*     1 */             4u,               2u },  /* [Name: DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917]     */  /* [MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917, DCM_COM_0] */
  { /*     2 */             5u,               4u },  /* [Name: EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */  /* [MRP_EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917, ETHSM_CHANNEL_0] */
  { /*     3 */            14u,               5u },  /* [Name: BSWM_REQ_SHUT_DOWN]                                               */  /* [MRP_BSWM_REQ_SHUT_DOWN, GENERIC_1] */
  { /*     4 */            15u,              14u },  /* [Name: BSWM_REQ_STARTUP_2A]                                              */  /* [MRP_BSWM_REQ_STARTUP_2A, GENERIC_2] */
  { /*     5 */            16u,              15u },  /* [Name: BSWM_REQ_STARTUP_2B]                                              */  /* [MRP_BSWM_REQ_STARTUP_2B, GENERIC_3] */
  { /*     6 */            17u,              16u },  /* [Name: BSWM_REQ_STARTUP_2C]                                              */  /* [MRP_BSWM_REQ_STARTUP_2C, GENERIC_4] */
  { /*     7 */            18u,              17u },  /* [Name: BswMModeRequestPort_DGM_SILENT_COMMUNICATION]                     */  /* [MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION, GENERIC_5] */
  { /*     8 */            19u,              18u }   /* [Name: BswM_ReqMode_DcmEcuReset_GotoUFBL]                                */  /* [MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL, GENERIC_6] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_InitGenVarAndInitAL
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_InitGenVarAndInitALType, BSWM_CONST) BswM_InitGenVarAndInitAL[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitGenVarAndInitAL                            */
  /*     0 */ BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    BswM_PartitionIdentifiers
  \brief  the partition contex in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to BswM_PCPartitionConfig
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionIdentifiersType, BSWM_CONST) BswM_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV          PCPartitionConfigIdx */
  { /*     0 */ BSWM_SINGLEPARTITION,                   0u }
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element          Description
  Id               External id of rule.
  Init             Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  RuleStatesIdx    the index of the 1:1 relation pointing to BswM_RuleStates
  FctPtr           Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[27] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Id   Init            RuleStatesIdx  FctPtr                                                                                               Referable Keys */
  { /*     0 */ 13u, BSWM_FALSE    ,            0u, BswM_Rule_ExecuteInitList2A                                                                   },  /* [R_ExecuteInitList2A, MRP_BSWM_REQ_STARTUP_2A] */
  { /*     1 */ 14u, BSWM_FALSE    ,            1u, BswM_Rule_ExecuteInitList2B                                                                   },  /* [R_ExecuteInitList2B, MRP_BSWM_REQ_STARTUP_2B] */
  { /*     2 */ 15u, BSWM_FALSE    ,            2u, BswM_Rule_ExecuteInitList2C                                                                   },  /* [R_ExecuteInitList2C, MRP_BSWM_REQ_STARTUP_2C] */
  { /*     3 */ 24u, BSWM_FALSE    ,            3u, BswM_Rule_Shutdown_Nm                                                                         },  /* [R_Shutdown_Nm, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     4 */ 21u, BSWM_FALSE    ,            4u, BswM_Rule_Shutdown_Com_Dem_FirstRun                                                           },  /* [R_Shutdown_Com_Dem_FirstRun, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     5 */ 25u, BSWM_FALSE    ,            5u, BswM_Rule_Shutdown_NvM                                                                        },  /* [R_Shutdown_NvM, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     6 */ 26u, BSWM_FALSE    ,            6u, BswM_Rule_Shutdown_Pmic                                                                       },  /* [R_Shutdown_Pmic, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     7 */ 22u, BSWM_FALSE    ,            7u, BswM_Rule_Shutdown_Com_Dem_SubsequentRuns                                                     },  /* [R_Shutdown_Com_Dem_SubsequentRuns, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     8 */ 10u, BSWM_FALSE    ,            8u, BswM_Rule_DemTimerExpired                                                                     },  /* [R_DemTimerExpired, MRP_DemShutdownTimer, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*     9 */ 17u, BSWM_FALSE    ,            9u, BswM_Rule_NvmTimerExpired                                                                     },  /* [R_NvmTimerExpired, MRP_NvmWriteAllTimer, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*    10 */ 23u, BSWM_FALSE    ,           10u, BswM_Rule_Shutdown_Inactive                                                                   },  /* [R_Shutdown_Inactive, MRP_BSWM_REQ_SHUT_DOWN] */
  { /*    11 */ 16u, BSWM_FALSE    ,           11u, BswM_Rule_NoCom_Finished                                                                      },  /* [R_NoCom_Finished, MRP_BSWM_REQ_SHUT_DOWN, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch1_V127, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch3_V21, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch2_V2, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch0_V1] */
  { /*    12 */ 12u, BSWM_FALSE    ,           12u, BswM_Rule_DiagSoftReset                                                                       },  /* [R_DiagSoftReset, MRP_BswM_ReqMode_DcmEcuReset] */
  { /*    13 */ 11u, BSWM_FALSE    ,           13u, BswM_Rule_DiagHardReset                                                                       },  /* [R_DiagHardReset, MRP_BswM_ReqMode_DcmEcuReset] */
  { /*    14 */ 20u, BSWM_FALSE    ,           14u, BswM_Rule_Rule_PLCM_PNC_FULLCOMM                                                              },  /* [R_Rule_PLCM_PNC_FULLCOMM, MRP_BSWM_REQ_PNC_FULLCOMM] */
  { /*    15 */ 18u, BSWM_UNDEFINED,           15u, BswM_Rule_Rule_Control_ComMUser_AllNMLightChannels                                            },  /* [R_Rule_Control_ComMUser_AllNMLightChannels, MRP_BSWM_REQ_PNC0_STATE] */
  { /*    16 */  3u, BSWM_FALSE    ,           16u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF, MRP_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    17 */  1u, BSWM_FALSE    ,           17u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF  },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF, MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  { /*    18 */  5u, BSWM_FALSE    ,           18u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF, MRP_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    19 */  7u, BSWM_FALSE    ,           19u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF, MRP_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    20 */  4u, BSWM_FALSE    ,           20u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON  },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON, MRP_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    21 */  2u, BSWM_FALSE    ,           21u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON   },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON, MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  { /*    22 */  6u, BSWM_FALSE    ,           22u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON  },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON, MRP_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    23 */  8u, BSWM_FALSE    ,           23u, BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON  },  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON, MRP_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM] */
  { /*    24 */ 19u, BSWM_FALSE    ,           24u, BswM_Rule_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active                                 },  /* [R_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, MRP_BSWM_REQ_PNC0_STATE, MRP_EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  { /*    25 */  9u, BSWM_FALSE    ,           25u, BswM_Rule_BswMRule_DcmEcuReset_GotoUFBL                                                       },  /* [R_BswMRule_DcmEcuReset_GotoUFBL, MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL] */
  { /*    26 */  0u, BSWM_FALSE    ,           26u, BswM_Rule_BswMRule_SILENT_COMMUNICATION                                                       }   /* [R_BswMRule_SILENT_COMMUNICATION, MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[19] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RulesInd      Referable Keys */
  /*     0 */       15u,  /* [MRP_BSWM_REQ_PNC0_STATE] */
  /*     1 */       24u,  /* [MRP_BSWM_REQ_PNC0_STATE] */
  /*     2 */       17u,  /* [MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  /*     3 */       21u,  /* [MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  /*     4 */       24u,  /* [MRP_EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */
  /*     5 */        3u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*     6 */        4u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*     7 */        5u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*     8 */        6u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*     9 */        7u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*    10 */        8u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*    11 */        9u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*    12 */       10u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*    13 */       11u,  /* [MRP_BSWM_REQ_SHUT_DOWN] */
  /*    14 */        0u,  /* [MRP_BSWM_REQ_STARTUP_2A] */
  /*    15 */        1u,  /* [MRP_BSWM_REQ_STARTUP_2B] */
  /*    16 */        2u,  /* [MRP_BSWM_REQ_STARTUP_2C] */
  /*    17 */       26u,  /* [MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION] */
  /*    18 */       25u   /* [MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_SwcModeRequestUpdateFct
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionFunctionType, BSWM_CONST) BswM_SwcModeRequestUpdateFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SwcModeRequestUpdateFct                            */
  /*     0 */ BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListPriorityQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListPriorityQueue
  \brief  Heap of priority queue that stores the indexes of the used Action List Queue indexes
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ActionListPriorityQueueUType, BSWM_VAR_NOINIT) BswM_ActionListPriorityQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [AL_BSWM_List_2A] */
  /*     1 */  /* [AL_BSWM_List_2B] */
  /*     2 */  /* [AL_BSWM_List_2C] */
  /*     3 */  /* [AL_BSWM_List_Shutdown_Nm] */
  /*     4 */  /* [AL_BSWM_List_Shutdown_Com_Dem_FirstRun] */
  /*     5 */  /* [AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns] */
  /*     6 */  /* [AL_BSWM_List_Shutdown_NvM] */
  /*     7 */  /* [AL_BSWM_List_Shutdown_Pmic] */
  /*     8 */  /* [AL_BSWM_List_ModeRequestNVM] */
  /*     9 */  /* [AL_BSWM_List_ModeRequestPMIC] */
  /*    10 */  /* [AL_BSWM_List_ModeRequestComDemFirstRun] */
  /*    11 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0] */
  /*    12 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0] */
  /*    13 */  /* [AL_BSWM_List_FULL_COM_PNC0] */
  /*    14 */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com] */
  /*    15 */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com] */
  /*    16 */  /* [AL_BSWM_List_Reset] */
  /*    17 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF] */
  /*    18 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON] */
  /*    19 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF] */
  /*    20 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON] */
  /*    21 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF] */
  /*    22 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON] */
  /*    23 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF] */
  /*    24 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON] */
  /*    25 */  /* [AL_BSWM_List_PduGroupsAll_Enable] */
  /*    26 */  /* [AL_BSWM_List_PduGroupsAll_Disable] */
  /*    27 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0] */
  /*    28 */  /* [AL_BswMActionList_SILENT_COMMUNICATION_ON] */
  /*    29 */  /* [AL_BswMActionList_SILENT_COMMUNICATION_OFF] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ActionListQueueUType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [AL_BSWM_List_2A] */
  /*     1 */  /* [AL_BSWM_List_2B] */
  /*     2 */  /* [AL_BSWM_List_2C] */
  /*     3 */  /* [AL_BSWM_List_Shutdown_Nm] */
  /*     4 */  /* [AL_BSWM_List_Shutdown_Com_Dem_FirstRun] */
  /*     5 */  /* [AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns] */
  /*     6 */  /* [AL_BSWM_List_Shutdown_NvM] */
  /*     7 */  /* [AL_BSWM_List_Shutdown_Pmic] */
  /*     8 */  /* [AL_BSWM_List_ModeRequestNVM] */
  /*     9 */  /* [AL_BSWM_List_ModeRequestPMIC] */
  /*    10 */  /* [AL_BSWM_List_ModeRequestComDemFirstRun] */
  /*    11 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0] */
  /*    12 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0] */
  /*    13 */  /* [AL_BSWM_List_FULL_COM_PNC0] */
  /*    14 */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com] */
  /*    15 */  /* [AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com] */
  /*    16 */  /* [AL_BSWM_List_Reset] */
  /*    17 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF] */
  /*    18 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON] */
  /*    19 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF] */
  /*    20 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON] */
  /*    21 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF] */
  /*    22 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON] */
  /*    23 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF] */
  /*    24 */  /* [AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON] */
  /*    25 */  /* [AL_BSWM_List_PduGroupsAll_Enable] */
  /*    26 */  /* [AL_BSWM_List_PduGroupsAll_Disable] */
  /*    27 */  /* [AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0] */
  /*    28 */  /* [AL_BswMActionList_SILENT_COMMUNICATION_ON] */
  /*    29 */  /* [AL_BswMActionList_SILENT_COMMUNICATION_OFF] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [COMM_CHANNEL_0, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch1_V127] */
  /*     1 */  /* [COMM_CHANNEL_1, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch3_V21] */
  /*     2 */  /* [COMM_CHANNEL_2, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch2_V2] */
  /*     3 */  /* [COMM_CHANNEL_3, MRP_ComMIndication_NO_COMMUNICATION_REACHED_Ch0_V1] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMPncState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMPncState
  \brief  Variable to store current mode of BswMComMPncRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_PncModeType, BSWM_VAR_NOINIT) BswM_ComMPncState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [COMM_PNC_0, MRP_BSWM_REQ_PNC0_STATE] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DcmComState
**********************************************************************************************************************/
/** 
  \var    BswM_DcmComState
  \brief  Variable to store current mode of BswMDcmComModeRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dcm_CommunicationModeType, BSWM_VAR_NOINIT) BswM_DcmComState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [DCM_COM_0, MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_EthSMState
**********************************************************************************************************************/
/** 
  \var    BswM_EthSMState
  \brief  Variable to store current mode of BswMEthSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(EthSM_NetworkModeStateType, BSWM_VAR_NOINIT) BswM_EthSMState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ETHSM_CHANNEL_0, MRP_EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ForcedActionListPriority
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [GENERIC_0, MRP_BSWM_REQ_PNC_FULLCOMM] */
  /*     1 */  /* [GENERIC_1, MRP_BSWM_REQ_SHUT_DOWN] */
  /*     2 */  /* [GENERIC_2, MRP_BSWM_REQ_STARTUP_2A] */
  /*     3 */  /* [GENERIC_3, MRP_BSWM_REQ_STARTUP_2B] */
  /*     4 */  /* [GENERIC_4, MRP_BSWM_REQ_STARTUP_2C] */
  /*     5 */  /* [GENERIC_5, MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION] */
  /*     6 */  /* [GENERIC_6, MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_LengthOfActionListPriorityQueue
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ActionListQueueIterType, BSWM_VAR_NOINIT) BswM_LengthOfActionListPriorityQueue;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[9];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_BSWM_REQ_PNC0_STATE, COMM_PNC_0] */
  /*     1 */  /* [MRP_DcmComIndication_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917, DCM_COM_0] */
  /*     2 */  /* [MRP_EthSMIndication_V127_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917, ETHSM_CHANNEL_0] */
  /*     3 */  /* [MRP_BSWM_REQ_SHUT_DOWN, GENERIC_1] */
  /*     4 */  /* [MRP_BSWM_REQ_STARTUP_2A, GENERIC_2] */
  /*     5 */  /* [MRP_BSWM_REQ_STARTUP_2B, GENERIC_3] */
  /*     6 */  /* [MRP_BSWM_REQ_STARTUP_2C, GENERIC_4] */
  /*     7 */  /* [MRP_BswMModeRequestPort_DGM_SILENT_COMMUNICATION, GENERIC_5] */
  /*     8 */  /* [MRP_BswM_ReqMode_DcmEcuReset_GotoUFBL, GENERIC_6] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueSemaphore
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueWritten
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_RuleStatesUType, BSWM_VAR_NOINIT) BswM_RuleStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [R_ExecuteInitList2A] */
  /*     1 */  /* [R_ExecuteInitList2B] */
  /*     2 */  /* [R_ExecuteInitList2C] */
  /*     3 */  /* [R_Shutdown_Nm] */
  /*     4 */  /* [R_Shutdown_Com_Dem_FirstRun] */
  /*     5 */  /* [R_Shutdown_NvM] */
  /*     6 */  /* [R_Shutdown_Pmic] */
  /*     7 */  /* [R_Shutdown_Com_Dem_SubsequentRuns] */
  /*     8 */  /* [R_DemTimerExpired] */
  /*     9 */  /* [R_NvmTimerExpired] */
  /*    10 */  /* [R_Shutdown_Inactive] */
  /*    11 */  /* [R_NoCom_Finished] */
  /*    12 */  /* [R_DiagSoftReset] */
  /*    13 */  /* [R_DiagHardReset] */
  /*    14 */  /* [R_Rule_PLCM_PNC_FULLCOMM] */
  /*    15 */  /* [R_Rule_Control_ComMUser_AllNMLightChannels] */
  /*    16 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF] */
  /*    17 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF] */
  /*    18 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF] */
  /*    19 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF] */
  /*    20 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON] */
  /*    21 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON] */
  /*    22 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON] */
  /*    23 */  /* [R_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON] */
  /*    24 */  /* [R_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active] */
  /*    25 */  /* [R_BswMRule_DcmEcuReset_GotoUFBL] */
  /*    26 */  /* [R_BswMRule_SILENT_COMMUNICATION] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_TimerStateUType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_DemShutdownTimer] */
  /*     1 */  /* [MRP_NvmWriteAllTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_TimerValueUType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_DemShutdownTimer] */
  /*     1 */  /* [MRP_NvmWriteAllTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


VAR(Rte_ModeType_DcmEcuReset, BSWM_VAR_NOINIT) BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset;
VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8;
VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978;
VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad;


VAR(boolean, BSWM_VAR_NOINIT) BswM_PreInitialized;
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
 
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      Com_IpduGroupControl(ipduGroupState, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId, BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if ( BSWM_DEV_ERROR_DETECT == STD_ON )
  if (handleId < BswM_GetSizeOfRules(partitionIdx))
#endif
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId, partitionIdx)(partitionIdx); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists(partitionIdx))
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex, partitionIdx)(partitionIdx); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  
  return retVal;
} 

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                                   BswM_RuleStatesType state,
                                                                   BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  if (ruleId < BswM_GetSizeOfRuleStates(partitionIdx))
  {
    BswM_SetRuleStates(ruleId, state, partitionIdx); /* SBSW_BSWM_SETRULESTATE */
  }
  
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx,
                                                              BswM_SizeOfTimerValueType timerId,
                                                              BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue(partitionIdx))
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value, partitionIdx); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED), partitionIdx); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{

  BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset = RTE_MODE_DcmEcuReset_NONE;
  BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM;
  BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM;
  BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM;
  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */
  (void)BswM_ActionList_BSWM_List_2A(partitionIdx);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset();
  if (mode != RTE_TRANSITION_DcmEcuReset)
  {
    BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset = (Rte_ModeType_DcmEcuReset)mode;
  }
  mode = Rte_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8();
  if (mode != RTE_TRANSITION_DcmCommunicationControl)
  {
    BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8 = (Rte_ModeType_DcmCommunicationControl)mode;
  }
  mode = Rte_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978();
  if (mode != RTE_TRANSITION_DcmCommunicationControl)
  {
    BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978 = (Rte_ModeType_DcmCommunicationControl)mode;
  }
  mode = Rte_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad();
  if (mode != RTE_TRANSITION_DcmCommunicationControl)
  {
    BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad = (Rte_ModeType_DcmCommunicationControl)mode;
  }
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_2A
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2A(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ST_v_InitMonitorsPhase1();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_START_MEMSTACK_INIT);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_END_MEMSTACK_INIT);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SID_u_enableDetection(TRUE);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SID_v_mainfunction();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Crypto_30_LibCv_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_START_COMMUNICATION_INIT);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EthTrcv_30_Tja1103_Init(EthTrcv_30_Tja1103_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Eth_30_TexasMac_Init(Eth_30_TexasMac_Config_Ptr);
  /*lint -restore */
  Trcv_PinStrapping();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EthIf_Init(EthIf_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SoAd_Init(SoAd_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  TcpIpXcp_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Xcp_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SecOC_Init(SecOC_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EthSM_Init(EthSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_Init(Nm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  UdpNm_Init(UdpNm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  DoIP_Init(DoIP_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  TcpIp_Init(TcpIp_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EthTSyn_Init(EthTSyn_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Can_30_Mcan_Init(Can_30_Mcan_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanTrcv_Init(&CanTrcv_ConfigSet);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanIf_Init(CanIf_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanSM_Init(CanSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanXcp_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_Init(ComM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_PostInit();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_PostInit();
  /*lint -restore */
  RandomSeed_Instantiate();
  PublicPrivateKeysPair_InitialCheck();
  ComM_CommunicationAllowed(ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_Conn_ARSfront_3cd1cdd0, TRUE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_END_COMMUNICATION_INIT);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ReleaseComstackSemaphore();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  InfoBlock_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ST_v_InitMonitorsPhase2();
  /*lint -restore */
  BswM_MTSI_Init();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SID_MTSI_SetInstanceNumber();
  /*lint -restore */
  BswM_HandleSidInformation();
  Jtag_Debug_Status();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_2B
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2B(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)ComM_RequestComMode(ComMConf_ComMUser_PNC_00_MAPPING_60241c9f, COMM_NO_COMMUNICATION);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Com_DeInit();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_SaveDisableInt();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Memory_clear();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_RestoreEnableInt();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SecOC_Init(SecOC_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EthSM_Init(EthSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_Init(Nm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  UdpNm_Init(UdpNm_Config_Ptr);
  /*lint -restore */
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ExecuteInitList2C, partitionIdx);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_2C
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_2C(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Flsp_Load(HPAR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Flsp_Load(APAR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PreStart_HWA_M4();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PreStart_RadarSubsystem();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PreStart_DSP();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Load_APPL_HWA_M4();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Load_RadarSubsystem_Code();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Load_DSP_Code();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  DPU_FF_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SWHIL_v_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  VCS_v_init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Start_M4();
  /*lint -restore */
  BswM_Flsp_UseBackupOnly();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Start_RadarSubsystem();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Start_DSP();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Load_VariantModules();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_END_POSTLOAD);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ARB_UpdateNvmVersion();
  /*lint -restore */
  AntiRollback_Check();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dem_Init(Dem_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dgm_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  HOMON_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Adp();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  StbM_Init(StbM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  RTL_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SetRdpcRelease();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SCTLPROXY_v_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Appl_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  RadarCdd_v_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  HEAT_v_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_u_TimeKpiWriteStartupEntry(KPI_APPL_END_INIT);;
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SYS_KPI_Measfreeze();
  /*lint -restore */
  BswM_XCP_Control();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Rte_Start();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Shutdown_Nm
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Nm(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EcuOmc_setSchedulingMode(BASE_SM_RESET,EcuOmc_State_ON);
  /*lint -restore */
  (void)ComM_RequestComMode(ComMConf_ComMUser_PNC_00_MAPPING_60241c9f, COMM_NO_COMMUNICATION);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Shutdown_Com_Dem_FirstRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Com_Dem_FirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EcuOmc_setSchedulingMode(BASE_SM_RESET,EcuOmc_State_ON);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Rte_Stop();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_DeInit();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dem_ShutDownStart();
  /*lint -restore */
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_DemShutdownTimer, 6000uL);
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Shutdown_Com_Dem_SubsequentRuns
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Com_Dem_SubsequentRuns(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_CheckDemShutdownState();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Shutdown_NvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_NvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_DemShutdownTimer, 0u);
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_NvmWriteAllTimer, 6000uL);
  BswM_Nvm_WriteAll();
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_PMIC);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Shutdown_Pmic
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Shutdown_Pmic(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_NvmWriteAllTimer, 0u);
  BswM_onShutdownPmic();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_ModeRequestNVM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestNVM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_NVM);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_ModeRequestPMIC
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestPMIC(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_PMIC);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_ModeRequestComDemFirstRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ModeRequestComDemFirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_SetRestartFlag();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  BAI_v_SetCallUfblFlag((uint8)b_FALSE);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_SetRestartFlag();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  BAI_v_SetCallUfblFlag((uint8)b_TRUE);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  BAI_v_SetProtocolId(BOOT_PROTOCOL_CUST);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_FULL_COM_PNC0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_FULL_COM_PNC0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)ComM_RequestComMode(ComMConf_ComMUser_PNC_00_MAPPING_60241c9f, COMM_FULL_COMMUNICATION);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_No_Com
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_No_Com(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_AllNMLightChannels, COMM_NO_COMMUNICATION);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_Full_Com
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_Full_Com(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)ComM_RequestComMode(ComMConf_ComMUser_ComMUser_AllNMLightChannels, COMM_FULL_COMMUNICATION);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_Reset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_Reset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_SetRestartFlag();
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_PduGroupsAll_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_PduGroupsAll_Enable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Rx_PNC_All_Active_558be387, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Rx_PNC_All_Active_558be387, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Rx_PNC_All_Active_dc74ffe7, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Rx_PNC_All_Active_dc74ffe7, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_ComIPduGroup_Rx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_ComIPduGroup_Rx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BSWM_List_PduGroupsAll_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BSWM_List_PduGroupsAll_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  BAI_v_SetProtocolId(BOOT_PROTOCOL_XCP);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_BSWM_REQ_SHUT_DOWN, BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  FS_Reset_v_SoftReset();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_ARS_ComIPduGroup_Tx, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_d26e9691, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_MRR_MAIN_Tx_PNC_All_Active_f06153a8, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_ExecuteInitList2A
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2A(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_ExecuteInitList2A, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_STARTUP_TWO_A. */
    if(BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2A_BSWM_STARTUP_TWO_A)
    {
      /* Return conditional action list BswM_ActionList_BSWM_List_2A. */
      retVal = BSWM_ID_AL_BSWM_List_2A;
    }
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ExecuteInitList2B
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2B(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_ExecuteInitList2B, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_STARTUP_TWO_B. */
    if(BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2B_BSWM_STARTUP_TWO_B)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_ExecuteInitList2B, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_ExecuteInitList2B, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_2B. */
        retVal = BSWM_ID_AL_BSWM_List_2B;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_ExecuteInitList2B, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ExecuteInitList2C
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ExecuteInitList2C(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_ExecuteInitList2C, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_STARTUP_TWO_C. */
    if(BswM_GetGenericState(4, 0u) == BSWM_GENERICVALUE_BSWM_REQ_STARTUP_2C_BSWM_STARTUP_TWO_C)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_ExecuteInitList2C, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_ExecuteInitList2C, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_2C. */
        retVal = BSWM_ID_AL_BSWM_List_2C;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_ExecuteInitList2C, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_Nm
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Nm(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Nm, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_ACTIVE. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_ACTIVE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Nm, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_Nm, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_Shutdown_Nm. */
        retVal = BSWM_ID_AL_BSWM_List_Shutdown_Nm;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_Nm, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_Com_Dem_FirstRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Com_Dem_FirstRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Com_Dem_FirstRun, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_IMMEDIATE_ACTIVE)
    {
      /* Return conditional action list BswM_ActionList_BSWM_List_Shutdown_Com_Dem_FirstRun. */
      retVal = BSWM_ID_AL_BSWM_List_Shutdown_Com_Dem_FirstRun;
    }
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_NvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_NvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_NvM, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_NVM. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_NVM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_NvM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_NvM, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_Shutdown_NvM. */
        retVal = BSWM_ID_AL_BSWM_List_Shutdown_NvM;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_NvM, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_Pmic
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Pmic(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Pmic, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_PMIC. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_PMIC)
    {
      /* Return conditional action list BswM_ActionList_BSWM_List_Shutdown_Pmic. */
      retVal = BSWM_ID_AL_BSWM_List_Shutdown_Pmic;
    }
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_Com_Dem_SubsequentRuns
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Com_Dem_SubsequentRuns(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Com_Dem_SubsequentRuns, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT)
    {
      /* Return conditional action list BswM_ActionList_BSWM_List_Shutdown_Com_Dem_SubsequentRuns. */
      retVal = BSWM_ID_AL_BSWM_List_Shutdown_Com_Dem_SubsequentRuns;
    }
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_DemTimerExpired
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DemTimerExpired(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_DemTimerExpired, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_DemShutdownTimerExpired. */
    if((BswM_GetTimerState(0, 0u) == BSWM_TIMER_EXPIRED) && (BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT) && (BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_COM_DEM_SUBSEQUENT))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_DemTimerExpired, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_DemTimerExpired, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_ModeRequestNVM. */
        retVal = BSWM_ID_AL_BSWM_List_ModeRequestNVM;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_DemTimerExpired, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_NvmTimerExpired
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_NvmTimerExpired(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_NvmTimerExpired, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_NvmWriteAllTimerExpired. */
    if((BswM_GetTimerState(1, 0u) == BSWM_TIMER_EXPIRED) && (BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_WAITFORNVM))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_NvmTimerExpired, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_NvmTimerExpired, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_ModeRequestPMIC. */
        retVal = BSWM_ID_AL_BSWM_List_ModeRequestPMIC;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_NvmTimerExpired, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Shutdown_Inactive
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Shutdown_Inactive(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Inactive, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_INACTIVE. */
    if(BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_INACTIVE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Shutdown_Inactive, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_Inactive, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_Reset. */
        retVal = BSWM_ID_AL_BSWM_List_Reset;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Shutdown_Inactive, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_NoCom_Finished
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_NoCom_Finished(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_NoCom_Finished, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_SHUTDOWN_NO_COM_FINISHED. */
    if((BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_BSWM_REQ_SHUT_DOWN_BSWM_SHUTDOWN_ACTIVE) && (BswM_GetComMChannelState(0, 0u) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(1, 0u) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(2, 0u) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(3, 0u) == COMM_NO_COMMUNICATION))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_NoCom_Finished, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_NoCom_Finished, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_ModeRequestComDemFirstRun. */
        retVal = BSWM_ID_AL_BSWM_List_ModeRequestComDemFirstRun;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_NoCom_Finished, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_DiagSoftReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DiagSoftReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_DiagSoftReset, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmEcuReset_SOFT_RESET. */
    if(BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset == RTE_MODE_DcmEcuReset_SOFT)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_DiagSoftReset, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_DiagSoftReset, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmEcuReset_SOFT_TrueActionList_0;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_DiagSoftReset, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_DiagHardReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_DiagHardReset(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_DiagHardReset, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmEcuReset_HARD_RESET. */
    if(BswM_Mode_Notification_BswM_ReqMode_DcmEcuReset_DcmEcuReset == RTE_MODE_DcmEcuReset_HARD)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_DiagHardReset, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_DiagHardReset, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmEcuReset_HARD_TrueActionList_0;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_DiagHardReset, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_PLCM_PNC_FULLCOMM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_PLCM_PNC_FULLCOMM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_PLCM_PNC_FULLCOMM, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_PNC_FULLCOMM_ON. */
    if(BswM_GetGenericState(0, 0u) == BSWM_GENERICVALUE_BSWM_REQ_PNC_FULLCOMM_BSWM_FULLCOMM_ON)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_PLCM_PNC_FULLCOMM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_PLCM_PNC_FULLCOMM, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_FULL_COM_PNC0. */
        retVal = BSWM_ID_AL_BSWM_List_FULL_COM_PNC0;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_PLCM_PNC_FULLCOMM, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Control_ComMUser_AllNMLightChannels
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Control_ComMUser_AllNMLightChannels(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Control_ComMUser_AllNMLightChannels, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BSWM_PNC0_IS_NO_COM. */
    if(BswM_GetComMPncState(0, 0u) == COMM_PNC_NO_COMMUNICATION)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Control_ComMUser_AllNMLightChannels, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Control_ComMUser_AllNMLightChannels, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_No_Com. */
        retVal = BSWM_ID_AL_BSWM_List_ComMUser_AllNMLightChannels_No_Com;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Control_ComMUser_AllNMLightChannels, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Control_ComMUser_AllNMLightChannels, BSWM_FALSE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_ComMUser_AllNMLightChannels_Full_Com. */
        retVal = BSWM_ID_AL_BSWM_List_ComMUser_AllNMLightChannels_Full_Com;
      }
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_OFF, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF. */
    if(BswM_GetDcmComState(0, 0u) == DCM_ENABLE_RX_DISABLE_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_OFF;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_OFF, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_b5oecslb1kqhnkky5e6e6w76j_83672979_TX_OFF. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_OFF, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_OFF, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_53sj1j5efivcyxq9yz1tjix4r_3f0584d8_TX_ON, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON. */
    if(BswM_GetDcmComState(0, 0u) == DCM_ENABLE_RX_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917_TX_ON;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_8jdkchuu3lyk0rh47k51ciq89_c45a3917TX_ON, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_b5oecslb1kqhnkky5e6e6w76j_83672979_TX_ON. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672979_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_b5oecslb1kqhnkky5e6e6w76j_83672978_TX_ON, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmCommunicationControl_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON. */
    if(BswM_Mode_Notification_DcmComIndication_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_DCM_ENABLE_RX_TX_NORM_NM_DcmCommunicationControl_ComMConf_ComMChannel_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmCommunicationControl_MRR_MAIN_enpcztr8d129hioiw49xy4o2t_3d52d4ad_TX_ON, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_ETHSM_8jdkchuu3lyk0rh47k51ciq89_c45a3917_V127_PNC0_Active_AND_ETHSM_ONLINE. */
    if((BswM_GetComMPncState(0, 0u) != COMM_PNC_NO_COMMUNICATION) && (BswM_GetEthSMState(0, 0u) == ETHSM_BSWM_ONLINE))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_PduGroupsAll_Enable. */
        retVal = BSWM_ID_AL_BSWM_List_PduGroupsAll_Enable;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_EnablePduGrous_If_EthSm_V127_Online_PNC0Active, BSWM_FALSE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BSWM_List_PduGroupsAll_Disable. */
        retVal = BSWM_ID_AL_BSWM_List_PduGroupsAll_Disable;
      }
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmEcuReset_GotoUFBL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmEcuReset_GotoUFBL(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmEcuReset_GotoUFBL, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_BswMRule_DcmEcuReset_GotoUFBL_RESET. */
    if(BswM_GetGenericState(6, 0u) == BSWM_GENERICVALUE_BswM_ReqMode_DcmEcuReset_GotoUFBL_BswMGenericRequestMode_GotoUFBL)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmEcuReset_GotoUFBL, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmEcuReset_GotoUFBL, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0. */
        retVal = BSWM_ID_AL_BswMActionList_BswMRule_DcmEcuReset_GotoUFBL_TrueActionList_0;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_DcmEcuReset_GotoUFBL, BSWM_FALSE, partitionIdx);
      /* No false action list configured. */
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_SILENT_COMMUNICATION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_SILENT_COMMUNICATION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_SILENT_COMMUNICATION, partitionIdx) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression BswMLogicalExpression_SILENT_COMMUNICATION_ON. */
    if(BswM_GetGenericState(5, 0u) == BSWM_GENERICVALUE_BswMModeRequestPort_DGM_SILENT_COMMUNICATION_SILENT_COMMUNICATION_ON)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_SILENT_COMMUNICATION, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_SILENT_COMMUNICATION, BSWM_TRUE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_ON. */
        retVal = BSWM_ID_AL_BswMActionList_SILENT_COMMUNICATION_ON;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_SILENT_COMMUNICATION, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BswMRule_SILENT_COMMUNICATION, BSWM_FALSE, partitionIdx);
        /* Return triggered action list BswM_ActionList_BswMActionList_SILENT_COMMUNICATION_OFF. */
        retVal = BSWM_ID_AL_BswMActionList_SILENT_COMMUNICATION_OFF;
      }
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}


#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"
