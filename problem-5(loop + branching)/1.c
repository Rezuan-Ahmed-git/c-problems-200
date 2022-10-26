#include <stdio.h>

int main ()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
