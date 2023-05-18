#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d = 1;
    int PF[5];
    for (d = 1 ; d<= 5 ; d++)
    {

        printf("%d : Enter your profile number : ", d);
        scanf("%d", &PF[d]);


    }
    d = 5;
   for (d = 5;d >= 1;d--)
    {
        printf("\n\nEMPLOYEE %d : %d\n", d,PF[d]);
    }

    return 0;
}
