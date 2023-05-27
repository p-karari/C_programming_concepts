#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *p;
    p =&num;

    printf("%d\n", &p);
    printf("%d\n",*p);
    printf("%d", &num);
    return 0;
}
