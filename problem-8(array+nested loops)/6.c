#include <stdio.h>

int main ()
{
    int i, j, N;
    printf("Enter the size of an array: ");
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {

        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
