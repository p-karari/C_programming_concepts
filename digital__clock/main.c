#include <stdio.h>
#include <stdlib.h>

int main()
{

int hour , minutes , seconds;
printf("Enter  current time(hour:min:sec)\n ");
scanf(" %d\n%d\n%d ", &hour,&minutes,&seconds);


int d = 1;
while(1)//infinite loop
{
    seconds++;
    if (seconds > 59)
        {
         minutes++;
         seconds = 0;
        }
    if (minutes > 59)
    {
        hour++;
        minutes = 0;
    }
    if (hour > 12)
    {
        hour = 1;
    }
    printf("\n  CLOCK  ");
    printf("\n%02d: %02d : %02d", hour,minutes,seconds);
    sleep(d);//the function sleeps down while loop
    system("cls");//this clears the screen
}
    return 0;
}
