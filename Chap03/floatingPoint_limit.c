#include <stdio.h>
#include <float.h>

int main()
{
    // round-off errors (ex1)
    /*
    float a, b;
    a = 1.0E20f + 1.0f;
    b = a - 1.0E20f;
    printf("%f\n", b); // 0.000000
    */

    // round-off errors (ex2)
    /*
    float a = 0.0f;
    for (int i = 0; i < 100; i++)
        a = a + 0.01f;
    printf("%f\n", a); // 1.0 이 아닌 0.999999
    */

    // overflow
    /*
    float max = 3.402823466e+38F;
    printf("%f\n", max);
    max = max * 100.0f;
    printf("%f\n", max); // 1.#INF00

    double max2 = 1.7976931348623158e+308;
    printf("%f\n", max2);
    max2 = max2 * 100.0f;
    printf("%f\n", max2); // 1.#INF00
    */

    // underflow
    /*
    float f = 1.401298464e-45F;
    printf("%e\n", f);
    f = f / 100.0f;    // subnormal
    printf("%e\n", f); // 0.000000e+000

    float f = 104.0f;
    printf("%f\n", f);
    f = f / 0.0f;
    printf("%f\n", f); // 1.#INF00
    */

    float f = asinf(1.0f);
    printf("%f\n", f);
    f = asinf(2.0f);
    printf("%f\n", f); // -1.#IND00

    return 0;
}