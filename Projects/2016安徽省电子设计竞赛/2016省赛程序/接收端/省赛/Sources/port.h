#ifndef _PORT_H_
#define _PORT_H_
#include <hidef.h>     
#include "derivative.h"

void Init_PORT(void)
{
        DDRA=0XFF;
}
void io_init()     //TFT�˿�io��ʼ��
{
    DDRH = 0XFF;
    DDRE = 0XFF;
}

#endif 