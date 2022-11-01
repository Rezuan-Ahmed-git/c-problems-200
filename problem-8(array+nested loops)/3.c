#include <stdio.h>

int main ()
{
    int i, j, N, t = 1;
    printf("Enter the length of an array: ");
    scanf("%d", &N);

    int  arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j = 0; j < N; j++)
    {
        //printf("array: %d \n", arr[N-1]);
        if(arr[j] != arr[N-1])
        {
            t = 0;
            printf("NO");
            break;
        }

    }

    if(t)
    {
        printf("Yes");
    }

    return 0;
}
