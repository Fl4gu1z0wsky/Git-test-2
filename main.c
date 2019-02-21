#include <stdio.h>
#include <stdlib.h>
#define VAL_INIT -1

int main()
{
    int n = VAL_INIT, i = VAL_INIT, prod = VAL_INIT;
    printf("Enter a number for factorial : ");
    scanf("%i", &n);

    prod = 1;
    for(i = 1; i <= n; i++)
    {
        prod *= i;
    }

    printf("\nYour number in factorial gives : %i\n", prod);
    return 0;
}
