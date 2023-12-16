#include <at89x51.h>

// Global variables
int count = 0;

// Function to create a delay
void delay_500ms() {
    unsigned int i, j;
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < 100; j++);
    }
}

// Function to display a number on a 7-segment display
void output_7seg(unsigned char value) {
    unsigned char const mask[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
    if (value < 10) {
        P0 = mask[value];
    }
}

// External interrupt 0 service routine
void EXT0_Process() interrupt 0 {
    EA = 0;      // Disable interrupts
    count++;     // Increment the count variable
    delay_500ms();  // Wait for approximately 500ms
    EA = 1;      // Enable interrupts
}

// Function to display a number on 7-segment displays
void display_number(int iNum) {
    int i;
    unsigned char pos = 0x08;
    unsigned char temp;
    for (i = 0; i < 4; i++) {
        temp = iNum % 10;
        iNum = iNum / 10;
        P2 = pos;
        output_7seg(temp);
        delay_500ms();  // Adjusted delay for approximately 500ms
        pos = pos >> 1;
    }
}

// Function to initialize the system
void init() {
    P3_2 = 1;   // Set P3_2 as an input
    IE = 0x81;  // Enable External Interrupt 0 and global interrupts
    IT0 = 1;    // External interrupt 0 triggered on the falling edge
}

// Main function
void main() {
    init();  // Initialize the system
    while (1) {
        display_number(count);  // Display the current count
    }
}
