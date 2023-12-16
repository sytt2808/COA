#include<at89x51.h>
#define DELAYTIME 120
#define LOOPVALUE 2
#define LOOPTIME 63 //(1000/((DELAYTIME/120)*16))
void delay(){  
	int i; 
	for(i=1;i<DELAYTIME;i++); 
}
void main(){
	int x, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
	while(1)
		for(a1=0;a1<LOOPVALUE;a1++)
		for(a2=0;a2<LOOPVALUE;a2++)
		for(a3=0;a3<LOOPVALUE;a3++)
		for(a4=0;a4<LOOPVALUE;a4++)	
		for(a5=0;a5<LOOPVALUE;a5++)							
		for(a6=0;a6<LOOPVALUE;a6++)									
		for(a7=0;a7<LOOPVALUE;a7++)										
		for(a8=0;a8<LOOPVALUE;a8++)													
		for(a9=0;a9<LOOPVALUE;a9++)																	
		for(a10=0;a10<LOOPVALUE;a10++)																	
		for(a11=0;a11<LOOPVALUE;a11++)			
		for(a12=0;a12<LOOPVALUE;a12++)	
		for(a13=0;a13<LOOPVALUE;a13++)	
		for(a14=0;a14<LOOPVALUE;a14++)	
		for(a15=0;a15<LOOPVALUE;a15++)	
		for(a16=0;a16<LOOPVALUE;a16++)
			for(x=0;x<LOOPTIME;x++){
				P2 = 0xFF;
				P3 = 0;
				P2 = a16;
				delay();
				P2 = 0xFF;
				P3 = 1;
				P2 = a15;
				delay();
				P2 = 0xFF;
				P3 = 2;
				P2 = a14;
				delay();
				P2 = 0xFF;
				P3 = 3;
				P2 = a13;
				delay();
				P2 = 0xFF;
				P3 = 4;
				P2 = a12;
				delay();
				P2 = 0xFF;
				P3 = 5;
				P2 = a11;
				delay();
				P2 = 0xFF;
				P3 = 6;
				P2 = a10;
				delay();
				P2 = 0xFF;
				P3 = 7;
				P2 = a9;
				delay();
				P2 = 0xFF;
				P3 = 8;
				P2 = a8;
				delay();
				P2 = 0xFF;
				P3 = 9;
				P2 = a7;
				delay();
				P2 = 0xFF;
				P3 = 10;
				P2 = a6;
				delay();
				P2 = 0xFF;
				P3 = 11;
				P2 = a5;
				delay();
				P2 = 0xFF;
				P3 = 12;
				P2 = a4;
				delay();
				P2 = 0xFF;
				P3 = 13;
				P2 = a3;
				delay();
				P2 = 0xFF;
				P3 = 14;
				P2 = a2;
				delay();
				P2 = 0xFF;
				P3 = 15;
				P2 = a1;
				delay();
			}
}
