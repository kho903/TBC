#include <stdio.h>
#include <float.h>

int main()
{
    printf("%u\n", sizeof(float));       // 4
    printf("%u\n", sizeof(double));      // 8
    printf("%u\n", sizeof(long double)); // 16
    // 컴파일러별로 사이즈가 다름, vsc gcc기준

    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456f;
    double d2 = 123.456f;

    int i = 3;
    float f3 = 3.f; // 3.0f
    double d3 = 3.; // 3.0

    float f4 = 1.234e10f;

    float f5 = 0xb.aP1;
    double d5 = 1.0625e0;

    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);
}