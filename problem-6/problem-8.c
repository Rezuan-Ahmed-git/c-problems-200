#include <stdio.h>

int main ()
{
    int a, b, gcd = 0, lcm;
    scanf("%d %d", &a, &b);
    if(a < b)
    {
        for(int i = 1; i <= a; i++)
        {
            if(a % i == 0)
            {
                if(b % i == 0)
                {

                    if(i > gcd)
                    {
                        gcd = i;
                    }
                }

            }
        }
    }
    else if(a > b)
    {
        for(int i = 1; i <= b; i++)
        {
            if(b % i == 0)
            {
                if(a % i == 0)
                {
                    if(i > gcd)
                    {
                        gcd = i;
                    }
                }

            }
        }
    }
    if( a == 0 )
    {
        gcd = b;

    }
    else if(b == 0)
    {
        gcd = a;
    }

    lcm = (a * b) / gcd;

    printf("The LCM of %d and %d is %d.", a, b, lcm);

    return 0;
}
