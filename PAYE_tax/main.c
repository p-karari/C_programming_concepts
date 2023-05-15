#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    printf("Enter your salary : ");
    scanf("%d", &salary);
    if (salary < 30000 && salary > 0)
    {
        printf("No tax is payable for that amount !!");
    }
    else if (salary >= 30000 && salary <= 60000)
    {
        float Tax1 = 0.15 * salary;
        printf("Tota payable tax is : %f", Tax1);
    }
    else if (salary >= 60001 && salary <= 100000)
    {
        float Tax2 = 0.25 * salary;
        printf("Total payable tax is : %f", Tax2);
    }
    else if (salary >= 100001 && salary <= 150000)
    {
        float Tax3 = 0.35 * salary;
        printf("Total payable tax is : %f", Tax3);
    }
    else if (salary >= 150001)
    {
        float Tax4 = 0.45 * salary;
        printf(" Total payable tax is : %f", Tax4);
    }
    else
    {
        printf(" Invalid Amount !!!!");
    }
    return 0;
}
