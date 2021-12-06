#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned students = 25U;
    unsigned long long worldPopulation = 7801235945UL;

    printf("%12u | Total number of students \n", students);
    printf("%12llu | World population \n", worldPopulation);

    uint8_t count = UINT8_MAX;
    // UINT8_MAX can also be represented with other data types for example:
    // 1. decimal:
    // uint8_t count = 255U;
    // 2. binary:
    // uint8_t count = 0b11111111;
    // 3. hexadecimal:
    // uint8_t count = 0xFF;
    printf("%12u | Maximum value of 8 bit unsigned int\n", count);

    count++; // count = count + 1
    printf("%12u | Maximum value of 8 bit unsigned int +1 (OVERFLOW)\n", count);

    return EXIT_SUCCESS;
}