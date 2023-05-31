#include <stdio.h>
#include <stdlib.h>

int main()
{


    int Marks;
    printf("Enter your marks(0-100) : ");
    scanf("%d", &Marks);

    switch (Marks / 10)
    {

    case 10:
    case 9:
        printf("Grade : A");
        break;
    case 8:
        printf("Grade : B ");
        break;
      case 7:
        printf("Grade : C ");
        break;
    case 6:
        printf("Grade : E ");
        break;
    default:
        printf("Grade : F ");
        break;
    }
    return 0;
}
