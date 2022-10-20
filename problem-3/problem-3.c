#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Invalid Input\a");
    }
    else if(num % 2 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
