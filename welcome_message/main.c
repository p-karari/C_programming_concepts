#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    printf("What is your name?");
    fgets(name, 20, stdin);
    printf("Welcome %s!", name);
    return 0;
}
