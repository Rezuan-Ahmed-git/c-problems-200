#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int r;

    if(n >= 1)
    {
        r = (n * (n - 1)) / 2;
    }

    printf("%d", r);

    return 0;
}
