/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


AnalogIn fsrleft(A0);
AnalogIn fsrright(A1);
DigitalOut s1(D3);
DigitalOut s0(D2);

int main() {
    printf("FSR test program\n");

    while (true) {
        s1.write(0);
        s0.write(0);
        ThisThread::sleep_for(1000ms);
        //wait_us(100);
        printf("FSR1: \nLeft: %f\nRight: %f\n", fsrleft.read(), fsrright.read());
        
        s1.write(0);
        s0.write(1);
        ThisThread::sleep_for(1000ms);
        //wait_us(100);
        printf("FSR2: \nLeft: %f\nRight: %f\n", fsrleft.read(), fsrright.read());
        
        s1.write(1);
        s0.write(0);
        ThisThread::sleep_for(1000ms);
        //wait_us(100);
        printf("FSR3: \nLeft: %f\nRight: %f\n", fsrleft.read(), fsrright.read());
        
        s1.write(1);
        s0.write(1);
        ThisThread::sleep_for(1000ms);
        //wait_us(100);
        printf("FSR4: \nLeft: %f\nRight: %f\n", fsrleft.read(), fsrright.read());
    }
}