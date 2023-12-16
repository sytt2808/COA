#include<at89x51.h>
void main()
{unsigned char temp;
P1=0XFF;
P2=0XFF;
while(1)
{ temp=P2;
P1=temp;
while(P2==temp);
}}