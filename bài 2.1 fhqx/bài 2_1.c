#include < at89x51.h> 
//delay 2ms
void delay(){  
	int i; 
	for(i=1;i<240;i++); 
}
/*void delay_ms(unsigned int x){ 
	unsigned char k; 
	while(x-- > 0){ 
		for(k=0;k<100;k++) {;} 
	} 
}*/
unsigned char num[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90 }; 

void main(){ 
	int x,j,i=0 ; 
	while(1){
		for(i=0;i<10;i++)
		for(j=0;j<10;j++){
		for(x=250;x>0;x--){			
			P0 = 0xFF;
			P0 = num[j] ; 
			P1 = 0xff;  
			delay();
			P0 = 0xFF;
			P0 = num[i];
			P1 = 0x00; 
			delay();
		}
	}		
	} 
} 
