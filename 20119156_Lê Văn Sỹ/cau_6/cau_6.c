#include < at89x51.h>
char so[]={0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
char maquet[] = {0xbf ,0xdf, 0xef, 0xf7, 0xfb , 0xfd, 0x7e};
unsigned char chuso[7];
unsigned long dem,temp;
//
void delay(int time){
	while(time--);
}
//
void tachchuso(unsigned long temp , int led){
int i ;
	for(i=0 ; i<led; i++){
		chuso[i]= temp%10;
		temp=temp/10;
		}
} 
   //
void quetled(int led){
int i,j;
	 for(i=0 ; i<10; i++){
		for(j=0;j<led;j++){
		P2 = maquet[j];
		P0 = so[chuso[j]];
		delay(500);
		P2 = 0Xff;
  }
  }
 }
//
void main(){
	while(1){  
            for (dem = 98765; dem >= 0; dem--) {
                if (P3_2 == 0) {
									tachchuso(dem,5);
									quetled(5); 
                    break;}  
                while (P3_3==0) { 
tachchuso(dem,5);
			quetled(5);  };							
			tachchuso(dem,5);
			quetled(5);
		
	}

}
}