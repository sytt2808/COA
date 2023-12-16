#include <at89x51.h>
void delay(int interval){
int i,j;
for(i=0;i<255;i++){
for(j=0;j<interval;j++);
}
}
void main(){
while(1){
//Kiem tra trang thai chan P1_0 (dau voi cong tac)
if(P1_0 == 1){
P0=0x55;
delay(100);
P0=0xAA;
delay(100);}
}
}