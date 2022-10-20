#include <stdio.h>

int main ()
{
    int num;
    printf("Enter your number to get the grade: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Invalid input! Please enter a valid number....\n");
    }
    else if(num >= 0 && num <= 32)
    {
        printf("F");
    }
    else if(num >= 33 && num <= 39)
    {
        printf("D");
    }
    else if(num >= 40 && num <= 49)
    {
        printf("C");
    }
    else if(num >= 50 && num <= 59)
    {
        printf("B");
    }
    else if(num >= 60 && num <= 69)
    {
        printf("A-");
    }
    else if(num >= 70 && num <= 79)
    {
        printf("A");
    }
    else if(num >= 80 && num <= 100)
    {
        printf("A+");
    }else
    {
        printf("Please enter a number between 0 to 100\n");
    }

    return 0;
}
