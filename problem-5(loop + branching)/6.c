#include <stdio.h>

int main ()
{
    int n, m, i;
    printf("Enter two non-negative integers: ");
    scanf("%d %d", &n, &m);

    if(n < 0 || m < 0)
    {
        printf("Enter a valid number!");
    }

    if(n < m)
    {
        for(i = n; i <= m; i++ )
        {
            if(i == 24)
            {
                printf("%d ", 0);
                break;
            }
            printf("%d ", i);
        }
    }
    else
    {
        for(i = n; i <= 23; i++)
        {
            printf("%d ", i);

        }
        for(int j = 0; j <= m; j++)
        {
            printf("%d ", j);
        }
    }

    return 0;
}
