#include <stdio.h>

int main(void)
{
    char name[100];
    float basicSalary, increment;

    printf("Enter employee name  : ");
    scanf("%s", name);

    printf("Enter basic salary   : ");
    scanf("%f", &basicSalary);

    float incrementPercentage;

    if (basicSalary < 5000)
    {
        incrementPercentage = 0.05;
    }
    else if (basicSalary < 10000)
    {
        incrementPercentage = 0.1;
    }
    else
    {
        incrementPercentage = 0.15;
    }

    float incrementAmount = basicSalary * incrementPercentage;
    float newSalary = basicSalary + incrementAmount;

    printf("\n");
    printf("Employee name        : %s\n", name);
    printf("Basic salary         : %10.2f\n", basicSalary);
    printf("Increment percentage : %10.2f%%\n", incrementPercentage * 100);
    printf("Increment amount     : %10.2f\n", incrementAmount);
    printf("New salary           : %10.2f\n", newSalary);

    return 0;
}