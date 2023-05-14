#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num = 3;
  while (num > 1)
  {
      int Score;
    printf("Enter your score (0 - 100)  : ");
    scanf("%d", &Score);
    /*char name[20];
    printf("Enter your name \n");
    fgets ( "%s", name[20] , stdlib.h);*/
    switch( Score )
    {
    case 70 ... 100:

        //between 70 - 100

        printf("Grade : A \nYou did great\n");
        break;
    case 60 ... 69:
        //between 60 - 69
        printf("Grade : B \nYou did good\n");
        break;
    case 50 ... 59:
        //between 50 - 59
        printf("Grade : C \nYou did alright\n");
        break;
    case 40 ... 49:
        // between 40 - 49
        printf("Grade : D \nYou did bad\n");
        break;
    case 0 ... 39:

        //between 0 -39
        printf("Grade : E \nYou Failed \n");
        break;
    case 'o< , 100>':
   default:
        printf("Invalid Score !!!\n-9");
        break;

    }
  }
    return 0;
}
