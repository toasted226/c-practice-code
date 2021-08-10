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

    printf("\n\n\n");

    int someMoreNums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    size_t n = sizeof(someMoreNums) / sizeof(someMoreNums[0]); //Calculates length of an array
    printf("someMoreNums length: %d\n", n); //Prints length of someMoreNums

    #define NELEMS(x) (sizeof(x))/sizeof((x)[0]) // Turn that calculation into a macro
    int randomNums[17];
    size_t n_randomNums = NELEMS(randomNums); //sizeof(randomNums) / sizeof(randomNums[0])
    printf("randomNums length: %d\n", n_randomNums); //Prints length of randomNums
}
