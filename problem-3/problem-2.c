#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("A is bigger");
    }
    else if(b > a && b > c)
    {
        printf("B is bigger");
    }
    else if(c > a && c > b)
    {
        printf("C is bigger");
    }
    else if(a == b && a > c)
    {
        printf("A & B both are bigger");
    }
    else if( b == c && b > a)
    {
        printf("B & C both are bigger");
    }
    else if(c == a && c > b)
    {
        printf("A & C both are bigger");
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}
