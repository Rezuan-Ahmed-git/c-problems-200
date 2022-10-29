#include <stdio.h>

int main ()
{
    int a, b, c, d;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if( a == b || b == c || c == d || a == c || a == d || b == d)
    {
        printf("Please enter distinct integers!");
    }

    else if(a > b && a > c && a > d )
    {
        printf("Largest = %d", a);
    }
    else if(b > a && b > c && b > d )
    {
        printf("Largest = %d", b);

    }
    else if(c > a && c > b && c > d )
    {
        printf("Largest = %d", c);
    }
    else
    {
        printf("Largest = %d", d);

    }
    if(b < c && b < d)
    {
        printf("\nSmallest = %d", b);
    }
    else if(c < a && c < d)
    {
        printf("\nSmallest = %d", c);
    }
    else if( d < a && d < b)
    {
        printf("\nSmallest = %d", d);
    }
    else
    {
        printf("\nSmallest = %d", a);
    }


    return 0;
}

