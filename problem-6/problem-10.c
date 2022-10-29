#include <stdio.h>

int main ()
{
    int n, com;
    scanf("%d", &n);
    int sr = sqrt(n);

     if (n == 0 || n == 1)
     {
         return 0;
     }


    for(int i = 2; i <= sr; i++)
    {
        if(n % i == 0)
        {
            com = i;

        }

    }

    if(com)
    {
        printf("Composite");
    }
    else{
        printf("Prime");
    }



    return 0;
}
