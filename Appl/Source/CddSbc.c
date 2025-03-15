/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CddSbc.c
 *        Config:  C:/Vector/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new/S32K144_Start.dpa
 *     SW-C Type:  CddSbc
 *  Generated at:  Mon Jun  7 11:19:43 2021
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <CddSbc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CddSbc.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Spi.h"
#include "Spi_Cfg.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#define CddSbc_START_SEC_CODE
#include "CddSbc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Sbc_Test_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Sbc_Test_Runnable_doc
 *********************************************************************************************************************/

static Std_ReturnType result;
unsigned int a=0;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CddSbc_CODE) Sbc_Test_Runnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Sbc_Test_Runnable
 *********************************************************************************************************************/

Spi_DataBufferType readSbcCmd[4];
static Spi_DataBufferType sbcReadData[4];
readSbcCmd[0]= 0x50;
readSbcCmd[1] = 0xF0;
result =Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_test0,readSbcCmd,sbcReadData,2);
if(result == E_OK)
{
    a++;
}

Spi_DataBufferType SpiCHCmdTest1[5];
static Spi_DataBufferType SpiCHReadDataTest1[5];
SpiCHCmdTest1[0]= 0x51;
SpiCHCmdTest1[1] = 0xF1;
result =Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_test1,SpiCHCmdTest1,SpiCHReadDataTest1,2);
if(result == E_OK)
{
    a++;
}

Spi_DataBufferType SpiCHCmdTest2[6];
static Spi_DataBufferType SpiCHReadDataTest2[6];
SpiCHCmdTest2[0]= 0x52;
SpiCHCmdTest2[1] = 0xF2;
result =Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_test2,SpiCHCmdTest2,SpiCHReadDataTest2,2);
if(result == E_OK)
{
    a++;
}

Spi_DataBufferType SpiCHCmdTest3[4];
static Spi_DataBufferType SpiCHReadDataTest3[4];
SpiCHCmdTest3[0]= 0x53;
SpiCHCmdTest3[1] = 0xF3;
result =Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_test3,SpiCHCmdTest3,SpiCHReadDataTest3,2);
if(result == E_OK)
{
    a++;
}

result = Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_0);
if(result == E_OK)
{
    a++;
}

result = Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_1);
if(result == E_OK)
{
    a++;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CddSbc_STOP_SEC_CODE
#include "CddSbc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
