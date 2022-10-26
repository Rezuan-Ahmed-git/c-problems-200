#include <stdio.h>

int main ()
{
    int n, i, w, sum = 0;
    printf("Enter the number of passenger: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("The total weight of passengers is: %d", sum);
    return 0;
}
