#include<stdio.h>

int main ()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");

    }
    else
    {
        printf("Sorry! Not eligible! You will be eligible after %d year", 18 - age);

    }

    return 0;
}
