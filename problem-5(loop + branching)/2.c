#include <stdio.h>

int main ()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(int i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
