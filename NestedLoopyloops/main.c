#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int nums[2][3] = 
    {
        {1, 2, 3}, 
        {2, 4, 6}
    };

    //Prints the nums matrix
    for (int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
}
