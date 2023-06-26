#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter the first number  : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("Enter the third number  : ");
    scanf("%d", &num3);

    printf("\n");

    int highest = num1;
    if (num2 > highest)
    {
        highest = num2;
    }
    if (num3 > highest)
    {
        highest = num3;
    }

    printf("Highest number is       : %d\n", highest);

    return 0;
}