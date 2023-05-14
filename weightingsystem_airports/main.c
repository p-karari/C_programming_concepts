#include <stdio.h>
#include <stdlib.h>

int main()
{
float Weight1;
float Weight2;



printf("Enter the weight 1:\n");
scanf("%f",&Weight1);

printf("Enter the weight 2:\n");
scanf("%f",&Weight2);



if (Weight1==Weight2)
{
    printf("The weights are equal");

}

if (Weight1!=Weight2)
{

printf("The weights are not equal");

}

    return 0;
}
