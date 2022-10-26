#include <stdio.h>

int main ()
{
    int i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number!");
    }

    for(i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}
