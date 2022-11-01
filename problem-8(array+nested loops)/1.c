#include <stdio.h>

int main ()
{
    int N, i, j;
    //printf("Enter the size of arr: ");
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(j = N-1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    //int length = sizeof(arr)/sizeof(arr[0]);
    //printf("\n%d", length);



    return 0;
}
