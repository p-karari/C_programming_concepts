#include <stdio.h>
#include <stdlib.h>

int main()
{
 float A;
    printf("Enter length (A) of equilateral Triangle : ");
    scanf("%f", &A);
 int a = 3;

    float step1 = sqrt(a);
    float step2 = step1 / 4 ;
    float Area = step2 * A * A ;

printf("Area : %f", Area);
    return 0;
}
