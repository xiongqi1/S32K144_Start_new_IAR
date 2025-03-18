/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_Test_SWC2.c
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Test_SWC2.h"
#include "TSC_Test_SWC2.h"








Std_ReturnType TSC_Test_SWC2_Rte_Read_Test_SR_WriteRead_1_DataElement1(uint8 *data)
{
  return Rte_Read_Test_SR_WriteRead_1_DataElement1(data);
}




Std_ReturnType TSC_Test_SWC2_Rte_Write_Test_SR_WriteRead_DataElement1(uint8 data)
{
  return Rte_Write_Test_SR_WriteRead_DataElement1(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */






Std_ReturnType TSC_Test_SWC2_Rte_Read_Test_Record_Interface_Record(Test_Record *data)
{
  return Rte_Read_Test_Record_Interface_Record(data);
}

Std_ReturnType TSC_Test_SWC2_Rte_Read_Test_SR_WriteRead_1_DataElement2(uint16 *data)
{
  return Rte_Read_Test_SR_WriteRead_1_DataElement2(data);
}




Std_ReturnType TSC_Test_SWC2_Rte_Write_Test_SR_WriteRead_DataElement2(uint16 data)
{
  return Rte_Write_Test_SR_WriteRead_DataElement2(data);
}





     /* Client Server Interfaces: */
Std_ReturnType TSC_Test_SWC2_Rte_Call_SWC_Service_testService(uint8 arg_In, uint8 *arg_Out)
{
  return Rte_Call_SWC_Service_testService(arg_In, arg_Out);
}


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* Test_SWC2 */
      /* Test_SWC2 */



