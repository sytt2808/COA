#include <at89x51.h>

int dem = 0;

void delay(unsigned long time) {
    unsigned long i, j;
    for (i = 0; i < time; i++) {
        for (j = 0; j < 125; j++) {
            // Adjust the inner loop based on your actual clock frequency
        }
    }
}

void main(void) {
    P2 = 0x00;
    while (dem < 10) {
        P2 = dem;
        dem++;
        delay(10000);
    }
}
