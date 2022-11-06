#include <stdio.h>

int main ()
{
    int t, i;
    scanf("%d", &t);

    int arr[t];

    for(i = 0; i < t; i++)
    {
        scanf("%d%%", &arr[i]);
    }

    int less_60 = 60 , less_80 = 40, hundred = 60;

    for(i = 0; i < t; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = less_60 + less_80 + hundred;
        }
        else if(arr[i] == 100)
        {
            arr[i] = 0;
        }

        else if(arr[i] <= 59)
        {
            arr[i] = (60 - arr[i]) * 1 + less_80 + hundred;

        }
        else if(arr[i] <= 79)
        {
            arr[i] = less_60 + (80 - arr[i]) * 2;
        }
        else if(arr[i] < 100)
        {
            arr[i] = (100 - arr[i]) * 3;
        }
    }

    for(i = 0; i < t; i++)
    {
        printf("%d minutes\n", arr[i]);
    }

    return 0;
}
