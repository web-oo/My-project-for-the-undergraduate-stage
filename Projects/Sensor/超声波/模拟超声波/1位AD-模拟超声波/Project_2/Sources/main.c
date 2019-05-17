//头文件
#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */
#include "PLL.H"
#include "ad.h"
#include "math.h"


//变量

int x,y,z;


//函数声明


    
     




void main(void) {
  /* put your own code here */
  

    PLL_init();
    ATD_Init();
    DDRA=0XFF;
    PORTA=0XAA;          //r口高电平，3m（x*3为距离mm），低电平1m 此程序为1m
	EnableInterrupts;


  for(;;) 
  {
     	
  
    _FEED_COP(); /* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
#pragma CODE_SEG __NEAR_SEG NON_BANKED
void interrupt 22 AD(void) 
{   
        x=ATD0DR0;
        ATD0STAT0_SCF=1;   
}
