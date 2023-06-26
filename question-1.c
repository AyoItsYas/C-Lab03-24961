#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter the first number  : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("\n");
    if (num1 != num2)
    {
        int highest = num1 > num2 ? num1 : num2;

        printf("Highest number is       : %d\n", highest);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}