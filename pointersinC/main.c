#include <stdio.h>

void Hi_function (int times)
{
    int k;
    for (k = 0; k < times; k++)
        printf("Hi\n");
}
int main ()
{
    void (*function_ptr) (int);//fuhnction pointer declaration
    function_ptr = Hi_function;//pointer assignment
    function_ptr  (3) ;


    return 0;
}
