#include <stdio.h>

int main ()
{
    int x, y;
    printf("Please enter two integers: ");
    scanf("%d %d", &x, &y);

    if(x == y)
    {
        printf("Number1 and Number2 are equal");
    }else
    {
        printf("Not Equal!");
    }

    return 0;
}
