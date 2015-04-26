#include <stdio.h>
#include <stdlib.h>
// Add all numbers from 1 to x.
int main()
{
    int x;
    int result = 0; //Stores result, initialised to 0
    printf("Enter x\n");
    scanf("%d",&x);
    // Plus one in for loop ensures last iteration of loop still runs.

    for(int i = 1; i < (x + 1); ++i)
    {
        result = result + i;
        printf("i = %d \n", i);
        printf("result = %d \n", result);
    }
    return EXIT_SUCCESS;
}
