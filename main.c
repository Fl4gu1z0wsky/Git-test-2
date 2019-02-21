/*******************************
* Auteur : Flavio Sovilla      *
* Titre : Test Gestion Git     *
* Date : 21.02.2019            *
* Version : 1.0                *
*******************************/
#include <stdio.h>
#include <stdlib.h>
#define VAL_INIT -1

int main()
{
    int n = VAL_INIT, i = VAL_INIT, prod = VAL_INIT;
    printf("Enter a number for factorial : ");
    scanf("%i", &n);

    prod = factorial(n);

    printf("\nYour number in factorial gives : %i\n", prod);
    return 0;
}

int factorial(int n)
{
    int prod = 1, i = VAL_INIT;

    for(i = 2; i <= n; i++)
    {
        prod *= i;
    }
    return prod;
}
