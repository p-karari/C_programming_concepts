#include <stdio.h>
#include <stdlib.h>

int main()
{
int p = 11;
printf("1 2 3 5 7 ");
    for(p>10;p<100;p++)
    {
     int p1 = p%2;
     int p2 = p%3;
     int p3 = p%4;
     int p4 = p%5;
     int p5 = p%6;
     int p6 = p%7;
     int p7 = p%8;
     int p8 = p%9;
     if(p1!=0 && p2!=0 &&p3!=0 &&p4!=0 &&p5!=0 &&p6!=0 &&p7!=0 &&p8!=0 )
     {
        printf(" %d " ,p );
     }
    }

    return 0;
}
