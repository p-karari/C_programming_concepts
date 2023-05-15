#include <stdio.h>
#include <math.h>

int main()
{


    int n;
    printf("Enter number of sides (n) : ");
    scanf("%d", &n);
    float S ;
    printf("Enter length from centre to a corner : ");
    scanf("%f", &S);
    float step1 = 0.5 * n;
    float step2 = 360 / n;
    double ret = sin(step2 );
    float step3 = step1 * ret ;
    float Answer = step3 * S * S ;
    printf("Answer : %f ", Answer);


    return 0;
}
