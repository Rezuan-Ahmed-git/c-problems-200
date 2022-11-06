#include <stdio.h>

int main ()
{
    int N, i, j, temp;
    scanf("%d", &N);

    int arr[N], arr2[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);

    }

    for(j = 0; j < N; j++)
    {

        if(arr[j] > arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }

        printf("%d ", arr[j]);
    }

    return 0;
}
