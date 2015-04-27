#define  __FUC_PH__
#include "fuc_ph.h"
#include "stdint.h"
#include "Driver\DrvUART.h" 
#include "Driver\DrvGPIO.h" 
#include "Driver\DrvSYS.h" 
#include "NUC1xx.h" 
#include "communication.h" 
#include <ucos_ii.h>
#include "config.h"
#include "DrvUSB.h"			
#include "V6MDebug.h"
void SendSence(PH_SENCE *p)
{
	System.Uart.CmdFlag = 0x00 ;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xAA;		
	while(UART0->FSR.TX_FULL == 1);
	UART0->DATA = 0x23;
	while(UART0->FSR.TX_FULL == 1);	   
	UART0->DATA = 0xA5;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xA0;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0x0E;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).length;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).sence;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).senceMode;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ISO;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).TG;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = ((*p)).WB1;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).WB2;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).sharpness;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).brightness;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).saturation;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).contrast;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).compress;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).phScale;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).phSize;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).fwdNum; 
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0x47;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0x48;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xAA;			
}

void SendMode(PH_MODE *p)
{
	System.Uart.CmdFlag = 0x00 ;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xAA;		
	while(UART0->FSR.TX_FULL == 1);
	UART0->DATA = 0x23;
	while(UART0->FSR.TX_FULL == 1);	   
	UART0->DATA = 0xA5;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xA0;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0x0E;	  
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).length;	
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).sence;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).phTotal;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum1;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum2;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum3;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum4;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum5;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum6;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum7;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = (*p).ScNum8;
	while(UART0->FSR.TX_FULL == 1);		   
	UART0->DATA = 0xAA;	
}





