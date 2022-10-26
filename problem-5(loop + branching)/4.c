#include <stdio.h>

int main ()
{
    int n, m, i;
    printf("Enter 2 positive integers: ");
    scanf("%d %d", &n, &m);

    if(n < 0 || m < 0)
    {
        printf("Enter a positive number: ");
    }

    for(i = 1; i <= n; i++)
    {
        if(i % m ==0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
