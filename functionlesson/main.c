#include <stdio.h>
#include <stdlib.h>
struct Book
{


    char Author[40];
    int Release_year;
};
int main()
{
    char Name[50];
    printf("Enter the book title : ");
    fgets( Name , 50 ,stdin );

    struct  Book book1;
    //strcpy (book1.Name, "The Power of your subconscious mind");
    strcpy (book1.Author, "Dr.Joseph Murphy");
    book1.Release_year = 2003;
   if (Name, "The power of your subconscious mind")
   {


    printf("\n");
    printf("Name : %s", Name);
    printf("Author : %s\n", book1.Author);
    printf("Year Of Release : %d\n", book1.Release_year);
   }
   else
   {
       printf("OOOPS!!! The book is unavailable");
   }
    return 0;
}







