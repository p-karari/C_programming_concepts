#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R;
    float H;
    printf("Enter Radius (to at least one decimal place) : ");
    scanf("%f", &R);
    printf("Enter The Height (To at least one decimal place )  : ");
    scanf("%f", &H);
    float pi = 3.142;
    float result = pi * R * R * H;
    printf("Volume : %f", result);

    return 0;
}
