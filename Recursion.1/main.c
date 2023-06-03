#include <stdio.h>
//#include <stdlib.h>

int main(int argc,char argv[])
{
    if(argc == 2)
    {
        printf("The argument supplied is %s \n", argv[0]);
    }
    else if( argc > 2 )
    {
        printf("Too many arguments ");
    }
    else
    {
        printf("One argument expected");
    }

    return 0;
}


