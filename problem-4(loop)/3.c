#include <stdio.h>

int main ()
{
    int n, i, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The first %d natural number is: ",n);
    for(i = 1; i <= n; i++)
    {
        printf(" %d ", i);
        sum += i;
    }
    printf("\nThe sum of Natural Number upto %d terms: %d", n, sum);
    return 0;
}
