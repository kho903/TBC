#include <stdio.h>

int main()
{
    /*
    // Pointer Compatibility (호환성)
    int n = 5;
    double x;
    x = n; // no error
    int *p1 = &n;
    double *pd = &x;
    // pd = p1; // warning

    int *pt;
    int(*pa)[3];
    int ar1[2][3] = {
        3,
    };
    int ar2[3][2] = {
        7,
    };
    int **p2; // a pointer to a pointer

    pt = &ar1[0][0]; // pointer-to-int
    pt = ar1[0];     // pointer-to-int

    for (int i = 0; i < 6; ++i)
        printf("%d ", *(pt + i));

    // pt = ar1;  // Warnings (Error)
    pa = ar1; //pointer-to-int[3]
    // pa = ar2;  // Waning or error
    p2 = &pt;     //pointer-to-int *
    *p2 = ar2[0]; // pointer-to-int
    // p2 = ar2;  // Warnings (Error)
    // Notes
    // - p2 : pointer to pointer to int
    // - ar2 : a pointer to array-of-two-ints
    */
    // Pointer and const
    /*
    int x = 20;
    const int y = 23;
    int *p1 = &x;
    const int *p2 = &y;
    const int **pp2 = &p1;
    // p1 = p2; // Warnings (Error)

    // *pw = 123; // Error
    p2 = p1;

    int x2 = 30;
    int *p3 = &x2;
    *pp2 = p3;
    pp2 = &p1;
    */

    /*
    {
        const int **pp2;
        int *p1;
        const int n = 13;
        // 추천X
        pp2 = &p1; // const?
        *pp2 = &n; // sets p1 to point at n
        *p1 = 10;  // change n
    }
    */

    {
        const int y;
        const int *p2 = &y;
        int *p1;
        p1 = p2; // warning (error in cpp)
    }
}