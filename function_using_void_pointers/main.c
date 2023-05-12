#include <stdio.h>
#include <stdlib.h>

void *cube(const void *num);
int main()
{

    int x , cube_int;
    x = 4;
    cube_int = cube(&x);
    printf("%d cubed is %d\n", x , cube_int);

    return 0;
}
void *cube (const void *num)
{
    int result;
    result = (*(int *)num ) * (*(int *)num) * (*(int *) num);
    return result;
}
