#include <stdio.h>

int main()
{
    int N = 6;
    int arr[] = {12, 7, 19, 26, 11, 6};

    int m = arr[0];
    int sm ;

    for(int i = 0; i < N; i++ )
    {
        if(arr[i] < m)
        {
            sm = m;
            m = arr[i];
        }
    }
    printf("The maximum value is %d\n", sm);
    return 0;
}
