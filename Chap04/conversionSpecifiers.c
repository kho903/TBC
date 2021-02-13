#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    /*
        %a      부동 소수점 수, 16진수, p-표기법
        %A      부동 소수점 수, 16진수, P-표기법
        %c      한 글자
        %d (%i) 부호가 있는 10진(decimal) 정수(integer)
        %e      부동 소수점 수, e-표기법
        %E      부동 소수점 수, E-표기법
        %f      부동 소수점 수, 10진수 표기
        %g      값에 따라서 %e나 %f 사용
                지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %e사용
        %G      값에 따라서 %E나 %F 사용
                지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %E사용
        %o      부호가 없는 8진(octal) 정수
        %p      포인터
        %s      문자열
        %u      부호가 없는 10진 정수
        %x      부호가 없는 16진 정수, 소문자 알파벳 사용
        %X      부호가 없는 16진 정수, 대문자 알파벳 사용
        %%      퍼센트 기호 출력
    */

    double d = 3.1415926535897932384626433832795028841971693993751058209749445923078164;

    printf("%c\n", 'A');
    printf("%s", "I love you\n");
    printf("Even if there's a small chance, \
    we owe this to everyone who's not in this room to try.\n");

    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // 1004 1234 2147483647 -1 // Note overflow
    printf("%u %u %u\n", 1024, -1, UINT_MAX);               // 1024 4294967295 4294967295

    printf("\n");
    printf("%f %f %lf\n", 3.141592f, d, d); // 3.141592 3.141593 3.141593 // l in %lf is ignored
    printf("%a %A\n", d, d);                // 0x1.921fb5p+1 0X1.921FB5P+1
    printf("%e %E\n", d, d);                // 3.141593e+000 3.141593E+000

    printf("\n");
    printf("%g %g\n", 123456.789, 1234567.89);  // 123457 1.23457e+006
    printf("%G %G\n", 123456.789, 1234567.89);  // 123457 1.23457E+006
    printf("%g %g\n", 0.00012345, 0.000012345); // 0.00012345 1.2345e-005
    printf("%G %G\n", 0.00012345, 0.000012345); // 0.00012345 1.2345E-005

    printf("\n");
    printf("%o\n", 9);  // 11
    printf("%p\n", &d); // 000000000061FE18 pointer-of operator

    printf("\n");
    printf("%9d\n", 12345);         //     12345
    printf("%09d\n", 12345);        // 000012345
    printf("%.2f\n", 3.141592);     // 3.14
    printf("%.20f %.20lf\n", d, d); // 3.14159265358979310000 3.14159265358979310000

    printf("\n");
    int n_printed = printf("Counting!"); // Counting! 글자 수
    printf("%u\n", n_printed);
    return 0;
}