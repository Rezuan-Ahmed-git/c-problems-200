#include <stdio.h>

int main ()
{
    int n, k, i;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        if(n <= 20 && n >= 1)
        {
            scanf("%d", &arr[i]);
        }
    }

    scanf("%d", &k);
    int g[k], b[n];

    for(i = 0; i < n; i++)
    {
        if(i >= k)
        {
            b[i] = arr[i];

            printf("%d ", b[i]);
        }


    }

    for(i = 0; i < n; i++)
    {
        if(i < k)
        {
            g[i] = arr[i];
            printf("%d ", g[i]);
        }
    }

    return 0;
}
