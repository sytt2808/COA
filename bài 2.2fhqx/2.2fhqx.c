#include < at89x51.h> 
//delay 4ms
void delay(){  
	int i; 
	for(i=1;i<480;i++); 
}

unsigned char num[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90 }; 

void main(){ 
	int a[4];
	int dem, x, temp, counter;
	while(1){
			dem = 0;
			temp = counter;
			if (counter == 20000)
					counter = 10000;
			else counter++;
			do{
				a[dem] = temp%10;
				temp = temp/10;
				dem++;
			}while(temp!=0);
			for(x=63;x>0;x--){   			
			P1 = 0xFF;
			P2 = a[0] ; 
			P1 = 0xFE; //1111 1110 led 1 on
			delay(); 
			P1 = 0xFF;   //1111 1111 4 led off
			P2 = a[1]; 
			P1 = 0xFD; //1111 1101 led 2 on
			delay(); 
			P1 = 0xFF;  //1111 1111 4 led off
			P2 = a[2];
			P1 = 0xfb;//1111 1011 led 3 on
			delay(); 
			P1 = 0xff;  //1111 1111
			P2 = a[3]; 
			P1 = 0xf7; //1111 0111
			delay(10); 
			}
	} 
	}
