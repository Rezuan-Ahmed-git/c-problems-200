#include <stdio.h>

int main ()
{
    int i, j, N;
    printf("Enter the size of an array: ");
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(j = 0; j < N; j++)
    {
        printf("\n%d - ", arr[j]);

        for(i = 0; i < N; i++)
        {
            if(arr[j] != arr[i])
                printf("%d", arr[i]);

        }
    }
    return 0;
}
