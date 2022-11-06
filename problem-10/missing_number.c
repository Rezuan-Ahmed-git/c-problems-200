#include <stdio.h>

int main ()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i<=T; i++)
    {
        int arr[5];

        for(int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res;

        res = arr[0] - (arr[1] + arr[2] +arr[3]);

        printf("%d\n", res);
    }
    return 0;
}
