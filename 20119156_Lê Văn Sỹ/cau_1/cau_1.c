#include <at89x51.h>
void main() {
P3_0 = 1;
TMOD = 0x02;
TH0 = 0x9C; 
TR0 = 1;
while (1) {
while (!TF0); 
TF0 = 0; 
P3_0 = !P3_0; 
}
}