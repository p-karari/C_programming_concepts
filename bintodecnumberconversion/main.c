#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimalNumber;
    printf("Enter the decimal number : ");
    scanf("%d", &decimalNumber);




       float binNum = decimalNumber % 2;
       if (binNum > 0 )
       {

          printf("1");
       }
       else
       {

           printf("0");
       }


return 0;
}
