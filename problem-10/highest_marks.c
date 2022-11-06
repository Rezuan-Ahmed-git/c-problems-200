#include <stdio.h>

int main ()
{
    int n, i;
    scanf("%d",&n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest, com=arr[0];

    for(i = 0; i < n; i++)
    {
        if( com < arr[i])
            com = arr[i];

        largest = com;
    }

    //printf("Largest: %d\n", largest);
    int result[n];

    for(i = 0; i < n; i++)
    {
        result[i] = (largest - arr[i]);
        printf("%d ", result[i]);
    }

    return 0;
}
