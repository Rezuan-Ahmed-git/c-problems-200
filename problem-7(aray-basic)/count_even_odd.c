#include <stdio.h>

int main ()
{
    int N;
    int arr[100];
    int i;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ec = 0, oc = 0;

    for(i = 0; i < N; i++)
    {
        if(arr[i] % 2 == 0)
            ec++;
        else
            oc++;
    }

    printf("Number of evens : %d\n", ec);
    printf("Number of odds : %d\n", oc);


    return 0;
}
