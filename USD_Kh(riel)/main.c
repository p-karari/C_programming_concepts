#include <stdio.h>
#include <stdlib.h>

int conversion(int USD);

int main()
{
    int USD;
    printf("Enter money in USD: ");
    scanf("%d", &USD);
    conversion(USD);
    return 0;
}
int conversion(int USD)
{
    int KH = USD * 4100;
    printf("The money in Riel is %d", KH);
    return KH;
}
