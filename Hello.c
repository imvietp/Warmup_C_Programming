#include <stdio.h>
#include <stdint.h>

int8_t sumFunction(uint8_t number1, uint8_t number2)
{
    int8_t sumVariable;
    sumVariable = number1 + number2;

    return sumVariable;
}

int main ()
{
    uint8_t unsignedNumber1 = 20;
    uint8_t unsignedNumber2 = -23;

    int8_t sumMainFunction;

    sumMainFunction = sumFunction(unsignedNumber1, unsignedNumber2);

    printf("A + B = %d", sumMainFunction );

    // return 0;
    // test stage change in code c
}