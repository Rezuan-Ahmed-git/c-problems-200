#include <stdio.h>

int main ()
{
    int t,i;
    scanf("%d", &t);

    int arr[t+5];

    for(i = 0; i < t; i++)
    {
        if(t > 0 && t <= 100)
        {
            scanf("%d", &arr[i]);
        }
    }

    int flag=0;

    for(i = 0; i < t; i++)
    {
        if(arr[i] > 0)
        {
            if(arr[i] == 0)
            {
                printf("No\n");
            }
            else if(arr[i] == 1)
            {
                printf("No\n");
            }

            if(arr[i] >= 2)
            {
                for(int j = 2; j < arr[i] / 2; j++)
                {
                    if( arr[i] % j == 0)
                    {
                        flag = 1;
                        //printf("\n==========arr: %d divides by j = %d==> ", arr[i], j);
                        break;
                    }
                    else
                    {
                        flag = 0;
                    }

                }
                if(flag == 1)
                {
                    printf("No\n");
                }
                else
                {
                    printf("Yes\n");
                }
            }
        }


    }
    return 0;
}
