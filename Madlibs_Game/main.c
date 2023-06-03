#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name: \n");
    scanf("%s", &name);
    char noun[20];
    printf("A plural noun: \n");
    scanf("%s", &noun);
    int number;
    printf("A number : \n");
    scanf("%d", &number);
    char color[10];
    printf("A color: \n");
    scanf("%s", color);
    char celebrity[20];
    printf("A celebrity: \n");
    fgets(celebrity , 20 , stdin );
    char gadget[20];
    printf("A gadget: \n");
    scanf("%s", &gadget);
    char random[20];
    printf("A random name of a person: \n");
    scanf("%s", &random);
    char fruit[15];
    printf("A fruit: \n");
    scanf("%s", &fruit);
    char pet[15];
    printf("A pet name: \n");
    scanf("%s", &pet);
    printf("%s likes %s\n", name , noun);
    printf("%d %s %s\n", number , color , celebrity);
    printf("%s are his preference\n", gadget);

    printf("%S eats %s\n", pet , fruit);

    return 0;
}
