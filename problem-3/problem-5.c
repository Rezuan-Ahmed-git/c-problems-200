#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Please enter three non-negative integers to form a valid triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < 0 || b < 0 || c < 0)
    {
        printf("Please enter a valid input! Greater than 0...\n");
    }
    else if( a == 0 || b == 0 || c == 0)
    {
        printf("NO");
    }

    else if(a + b > c && b + c > a && c + a > b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
