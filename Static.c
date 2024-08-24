#include <stdio.h>
#include <stdint.h>

int main()
{
    static int8_t staticNumber = 0;

    uint8_t max = 23;
    while (staticNumber < max)
    {
        printf("Count = %d ", staticNumber);
        staticNumber ++;
    }
    
}