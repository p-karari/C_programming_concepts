#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade = 'A'

    switch (grade / 10)
    {
    case 10:

        printf("You did great !");
        break;
    case 'B':
        printf("You did alright !");
        break;
    case 'C' :
        printf("You did Poorly!");
        break;
    case 'D' :
        printf("You did very bad! ");
        break;
    case 'F' :
        printf("You failed!");
        break;
    default:
        printf("Invalid Grade");
    }

    return 0;
}
