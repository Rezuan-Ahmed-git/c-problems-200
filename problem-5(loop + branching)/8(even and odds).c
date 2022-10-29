#include <stdio.h>

int main ()
{
    long long int n, k, i, total_odd;
    scanf("%lld %lld", &n, &k);

    if(n % 2 == 1)
    {
        total_odd = (n / 2) + 1;
    }
    else
    {
        total_odd = (n / 2);
    }


    if(k <= total_odd)
    {
        k = 2 * k - 1;
        printf("%lld", k);
    }
    else{
        k = k - total_odd;
        k = 2 * k;
        printf("%lld", k);
    }

    return 0;
}
