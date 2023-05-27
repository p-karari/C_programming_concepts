#include <stdio.h>
#include <stdlib.h>

int max(num1 , num2 , num3)
{
    int result;
    if (num1 > num2 && num1 > num3 )
    {
        result = num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
       result = num2;
    }


    else
    {
        result =num3;
    }
    return result;
}



int main()
{

    printf("%d", max(490 , 1000 , 4900));

    return 0;
}
