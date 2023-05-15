#include <stdio.h>
#include <stdlib.h>

int main()
{
int year;
printf("Enter the year(1900 - 2100) : ");
scanf("%d", &year);
int month = 1;
char *months[13] =
{
   ("\n"),
   ("JANUARY"),
   ("FEBRUARY"),
   ("MARCH"),
   ("APRIL"),
   ("MAY"),
   ("JUNE"),
   ("JULY"),
   ("AUGUST"),
   ("SEPTEMBER"),
   ("OCTOBER"),
   ("NOVEMBER"),
   ("DECEMBER"),

};
int days[13] =
{
     {0}, {31}, {28}, {31}, {30}, {31}, {30}, {31}, {31}, {30}, {31}, {30}, {31}
};
if (year > 1900 && year <= 2100)
{
 if (month > 0 && month <= 12)
 {
 for (month = 1;month <= 12 ; month++)
  {
if (months[month] > 0)
{
    printf("\n\n  %s  \n",months[month]);
    printf("\n  MON   TUE   WED   THUR   FRI   SAT  SUN\n\n ");
}
int No = 1 ;

    for (No > 0 ; No <= days[month] ; No++ )
    {
        for (No > 0 ;No == 07 ;No++ )
        {
            printf("  7 \n\n");
        }
        for (No > 0 ;No == 14 ; No++)
        {
            printf("  14 \n\n");
        }
        for (No > 0 ;No == 21 ; No++)
        {
            printf("  21\n\n");
        }
        for (No > 0;No == 28 ; No++)
        {
            printf("  28\n\n");
        }
        printf("   %02d ",No);

    }
   }
 }
}


    return 0;
}

