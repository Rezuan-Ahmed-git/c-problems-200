#include <stdio.h>

int main ()
{
    int i, sum = 0;
    printf("The first 10 natural number is: \n");

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);

        sum += i;

    }
    printf("\nThe sum is: %d", sum);

    return 0;
}
