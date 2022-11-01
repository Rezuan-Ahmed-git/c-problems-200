#include <stdio.h>

int main ()
{
    int i, j, z, num, sum = 0, avg;

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter class-%d's students number===== ", i);

        for(j = 1; j <= 4; j++)
        {

            printf("\nInput the number of std-%d: ", j);


            for(z = 1; z <= 3; z++)
            {
                scanf("%d ", &num);
                sum += num;
            }
            printf("The average is of std-%d is: %d", j,sum/3);
        }
    }

    return 0;
}
