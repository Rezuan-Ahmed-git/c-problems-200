#include <stdio.h>

int main()
{
    int n, i, q, r, total_chocolates;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int m = n;

    while(n >= 4)
    {
        q = n / 4;
        printf("we get: %d \n", q);
        total_chocolates += q;

        r = n % 4;

        n = q + r;
    }

    printf("Total Chocolates: %d", total_chocolates + m);

    return 0;
}
