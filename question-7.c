#include <stdio.h>

int main(void)
{
    char city;
    int yearsOfService;

    printf("Enter city (C for Colombo) : ");
    scanf("%c", &city);

    printf("Enter years of service     : ");
    scanf("%d", &yearsOfService);

    float basicSalary;
    printf("Enter basic salary         : ");
    scanf("%f", &basicSalary);

    float additionalAllowance = 0;
    if (yearsOfService > 5)
    {
        additionalAllowance = basicSalary * 0.1;
    }
    if (city == 'C' || city == 'c')
    {
        additionalAllowance += 2500;
    }

    float monthlySales;
    printf("Enter monthly sales        : ");
    scanf("%f", &monthlySales);

    float bonusPercentage;
    if (monthlySales < 25000)
    {
        bonusPercentage = 0.1;
    }
    else if (monthlySales < 50000)
    {
        bonusPercentage = 0.12;
    }
    else
    {
        bonusPercentage = 0.15;
    }

    float bonus = monthlySales * bonusPercentage;
    float grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("\n");
    printf("Basic salary               : %10.2f\n", basicSalary);
    printf("Additional allowance       : %10.2f\n", additionalAllowance);
    printf("Bonus                      : %10.2f\n", bonus);
    printf("\n");
    printf("Gross remuneration         : %10.2f\n", grossRemuneration);

    return 0;
}