#include <stdio.h>

int main ()
{
    int height;
    printf("Enter your height in centimeter ");
    scanf("%d", &height);

    if( height < 150)
    {
        printf("The person is dwarf\n");
    }
    else if (height >= 150 && height < 165)
    {
        printf("The person is average\n");
    }
    else if(height >= 165 && height <= 195)
    {
        printf("The person is tall\n");
    }
    else
    {
        printf("Abnormal height. \n");
    }

    return 0;
}
