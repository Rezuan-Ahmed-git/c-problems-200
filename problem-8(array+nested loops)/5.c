#include <stdio.h>

int main ()
{
    int i, j, N, t=0, sum, result;
    printf("Enter the size of an array: ");
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("\nNow enter the value: ");
    scanf("%d", &num);

    for(j = 0; j < N; j++)
    {
        //printf("\n===============\n");
        //printf("J = %d", arr[j]);

        for( i = 0; i < N; i++)
        {
            //printf("\nI = %d", arr[i]);
            sum = 0;
            if(arr[i] != arr[j])
            {
                sum = arr[j] + arr[i];

                //printf("\nSum of %d and %d is: %d", arr[j], arr[i], sum);


            }
            if(sum == num)
            {
                t = 1;
                printf("\nYes\n");
                break;
            }

        }
        if(t)
        {
            //printf("\n========We are broken========");
            break;
        }



    }

    if(t == 0)
    {
        //printf("\n \n=======No match======\n");
        printf("\nNO\n");
    }


    return 0;
}
