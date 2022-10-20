#include <stdio.h>

int main ()
{
    int x, y;
    printf("Please enter two integers: ");
    scanf("%d, %d", &x, &y);

    if( x < 0 || y < 0)
    {
        printf("Please enter number greater than 0!");
    }
    else if(x + y >= 100)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
