#include <stdio.h>

int main ()
{
    long long int num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int sum = 0, m;
    while(num > 0)
    {
        m = num % 10;
        sum += m;
        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}
