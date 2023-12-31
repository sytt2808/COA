/*******************************************************************************
* 实 验 名		 : 静态数码管实验
* 使用的IO	     : 数码管使用P0,
* 实验效果       : 数码管显示数字
* 注    意		 ：
*******************************************************************************/
#include<reg51.h>

#define GPIO_DIG P0

#define GPIO_LED P2

sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;

//RAM,ROM
unsigned char code DIG_CODE[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//显示0~9的值
//0~9段码
//0:0011_1111 
/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/


void Delay(unsigned int a)//0~65535
{
	unsigned char b;
	for(;a>0;a--)
	{
		for(b=110;b>0;b--);
	}
}



void main(void)
{
  int i;
  P2 = 0;
//我们可以理解为打开某一个数码管打开
	while(1)
	{
    for(i = 0; i< 8; i++){
      P2 = (i<<2);
      GPIO_DIG=DIG_CODE[i];
      Delay(1);
    }
	}				
}