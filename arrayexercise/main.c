#include <stdio.h>
#include <stdlib.h>
//Programmer Kelvin Tutorial
int main()
{

char Day[7][20] = {("Monday") , ("Tuesday") , ("Wednesday") , ("Thursday") , ("Friday") , ("Saturday") , ("Sunday")};

int x = 0;
for(x = 0 ; x < 7 ; x++)
{
    printf(" %s \n", Day[x]);
}
    return 0;
}
