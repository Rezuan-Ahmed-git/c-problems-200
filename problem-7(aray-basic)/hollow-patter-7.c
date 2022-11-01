#include <stdio.h>

int main ()
{
    int i, j, N = 5;

    for(j = 1; j <= N; j++)
    {
        printf("#");
    }
    printf("\n");
    for(i = 1; i < N+1; i++)
    {
        printf("#");

        for(j=1; j<= N-2; j++)
        {
            printf(" ");
        }

        printf("#");
        printf("\n");

    }



    for(j = 1; j <= N; j++)
    {
        printf("#");
    }



    return 0;
}
