#include <stdio.h>
#include <stdlib.h>

int main()
{



    sayHi("Kelvin", 40);
    sayHi("Mercy", 23);
    sayHi("Mike", 20);
    sayHi("Judas",45);


    return 0;
}
void sayHi(char name[], int age)
{
    printf("Hello %s you are %d\n", name , age);
}
