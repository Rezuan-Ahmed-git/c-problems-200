#include <stdio.h>

int main()
{
    int x;
    printf("Please enter an integer: ");
    scanf("%d", &x);

    if(x % 2 == 1)
    {
        printf("%d is an odd integer", x);
    }
    else
    {
        printf("%d is not odd interger",x);
    }

    return 0;
}
