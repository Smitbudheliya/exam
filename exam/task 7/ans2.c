#include <stdio.h>

main()
{
    int i, j;
    int mul = 10;
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", mul*mul);
        }
        --mul;
        printf("\n");
    }
}