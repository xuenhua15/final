#include "LPC11xx.h"                    // Device header
#include "key.h"
void keyinit()
	 {
	 LPC_GPIO3->DIR &=~(1<<0);
	 LPC_GPIO3->IE |=(1<<0);
	 LPC_GPIO3->IS  &=~(1<<0);
	 LPC_GPIO3->IEV  &=~(1<<0);
		 
   LPC_GPIO3->DIR &=~(1<<1);
	 LPC_GPIO3->IE |=(1<<1);
	 LPC_GPIO3->IS  &=~(1<<1);
	 LPC_GPIO3->IEV  &=~(1<<1);
	 }
	 
	 
	 void PIOINT3_IRQHandler()
{
 if((LPC_GPIO3->MIS &(1<<0))==(1<<0))
 {
	 
	 LPC_GPIO3->IC =(1<<0);
 }	

 if((LPC_GPIO3->MIS &(1<<1))==(1<<1))
 {
	 
	 LPC_GPIO3->IC =(1<<1);
 }	
}
