#include <stdio.h>

int main ()
{
    int math, phy, chem;
    printf("Please enter all three numbers to check the eligibility: ");
    scanf("%d %d %d", &math, &phy, &chem);

    int total = math + phy + chem;

    if(math < 0 || phy < 0 || chem < 0)
    {
        printf("Invalid input. Enter number greater than 0\n");
    }
    else if(math >= 65 && phy >= 55 && chem >= 50 && total >= 190 && (math + phy >= 140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
