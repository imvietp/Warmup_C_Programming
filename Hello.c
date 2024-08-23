#include <stdio.h>
#include <stdint.h>

int main ()
{
    uint16_t unsignedNumber1 = 20;
    int8_t signedNumber2 = -23;

    int16_t sum = 0;

    sum = unsignedNumber1 + signedNumber2;

    printf("Sum = %d", sum);

    // return 0;
}