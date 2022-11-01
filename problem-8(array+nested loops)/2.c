#include <stdio.h>

int main()
{
    int N, i, j, Q, u, v;
    printf("Enter the length of an array: ");
    scanf("%d",&N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int length = sizeof (arr) / sizeof(arr[0]);

    printf("\nHow many changes do you need? - ");
    scanf("%d", &Q);

    for(j = 0; j < Q; j++)
    {
        scanf("%d ", &i);
        scanf("%d", &v);

        arr[i] = arr[i] + v;
    }

    for(i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
