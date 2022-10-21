#include <stdio.h>

int main ()
{
    double a, b, c, d, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = sqrt(b * b - 4 * a * c);

    if(d == 0)
    {
        x1 = -b / 2 * a;
        x2 = x1;
        printf("x1 = %lf", x1);
        printf("x2 = %lf", x2);
    }
    else if (d > 0)
    {
        x1 = (-b + d) / 2 * a;
        x2 = (-b -d) / 2 * a;
        printf("x1 = %lf", x1);
        printf("x2 = %lf", x2);

    }
    else
    {
        printf("Root are imaginary;\nNo solution.");
    }

    return 0;
}
