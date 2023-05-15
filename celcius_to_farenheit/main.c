#include <stdio.h>
#include <stdlib.h>
//programming WITH KELVIN
// programme to convert celsius to farenheit
int main()
{
    int c;
    printf("Input temparature(celsius) :");
    scanf(" %d", &c);

    float f = (c * 9/5) +32;
    printf("Result : %f", f);

    return 0;
}


