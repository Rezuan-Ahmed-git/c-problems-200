#include <stdio.h>


int main ()
{
    long long int num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int i = 0;
    while(num > 0)
    {
        num = num / 10;
        printf("%lld\n", num);
        i++;
    }

    printf("%d digits", i);


    return 0;
}
