#include <stdio.h>

int main ()
{
    int n,i;
    scanf("%d", &n);

    printf("%d, ", n);

    for(i = n; i > 1; i--)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
            printf("%d, ", n);
        }
        else
        {
            n = n - 1;
            printf("%d, ", n);
        }
        if(n == 1)
            break;

    }

    return 0;
}
