#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if(n == 1)
        return 1;
    else
    {
        return 7 + fun( 2 - 1 );
    }
}

int main()
{
int n = 4;
printf("%d", fun(n));
        return 0;
}
