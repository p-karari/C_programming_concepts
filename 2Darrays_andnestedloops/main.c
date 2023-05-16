#include <stdio.h>
#include <stdlib.h>

int main()
{


   int nums[4][2] = {
                    {1 ,1},
                    {2,3},
                    {5,7},
                    {5,9},
                    };
        int w , h;
        for(w = 0;w < 4 ; w++ )
        {
            for(h = 0 ;h < 2 ; h++ )
            {
                printf(" %d,", nums[w][h]);
            }
                printf("\n");
        }

    return 0;
}
