#include <stdio.h>

int main ()
{
    int i, j, space;

    for(i = 1; i <= 5; i++)
    {
        for(space = 0; space < (5 - i); space++)
        {
            printf(" ");
        }
        for(j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
