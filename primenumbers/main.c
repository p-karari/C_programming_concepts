#include <stdio.h>
#include <stdlib.h>
//programmer KELVIN
//programme to print out prime numbers between 1 - 100
int main()

{
printf("3\n5\n7\n");
int i=0;
for(i =0;i<=100;i++)
{
    int p1 = i%2;int p2 = i%3;int p3 = i%4;int p4 = i%5;int p5 = i%6;int p6 = i%7;int p7 = i%8;int p8 = i%9;
    if(p1 != 0&&p2 != 0&&p3 != 0&&p4 != 0&&p5 != 0&&p6 != 0&&p7 != 0&&p8 != 0)
    {
        printf("%d\n", i);
    }
}


return 0;
}


