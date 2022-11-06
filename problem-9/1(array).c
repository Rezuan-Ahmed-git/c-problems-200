#include <stdio.h>

int main ()
{
    int N, i, j;
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        if(N == 1)
        {
            arr[i] = i;
            printf("%d ", arr[i]);
        }
        else if (N == 2)
        {

            arr[i] = i;
            printf("%d ", arr[i]);
        }
        else
        {
            arr[i]=i;
            if(i == 0)
                printf("%d ", arr[i]);
            else if(i == 1)
                printf("%d ", arr[i]);

            else{
                arr[i] = arr[i-1] + arr[i-2];
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
