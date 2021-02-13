#include <stdio.h>
#define PI 3.141592f
#define PROGRAM_NAME "Calculator"

int main()
{
    // const float pi = 3.141592f;
    float radius, area, circum;

    printf("This is %s\n", PROGRAM_NAME);
    printf("Please input radius\n");
    scanf("%f", &radius);

    area = PI * radius * radius; // area = pi * r * r
    circum = 2.0f * PI * radius; // circun = 2.0 * pi * r

    // sphere area, sphere volume, ....

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    // TODO : wrong usage, strings, const

    return 0;
}