#include <stdio.h>

const float PI = 3.14159;

int main(void)
{
    float radius;
    printf("Enter circle radius (cm) : ");
    scanf("%f", &radius);

    printf("\n");
    printf("Diameter (cm)            : %10.2f\n", radius * 2);
    printf("Circumference (cm)       : %10.2f\n", 2 * PI * radius);
    printf("Area (cm^2)              : %10.2f\n", PI * (radius * radius));

    return 0;
}