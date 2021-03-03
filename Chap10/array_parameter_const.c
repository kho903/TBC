#include <stdio.h>

void print_array(const int arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void add_value(int arr[], const int n, const int val)
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] += val;
}

// 바뀔 필요가 없는 변수에 대해서는 const를 해 놓으면 실수를 방지 할 수 있다.
int sum(const int ar[], const int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];

    return total;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // 이 곳에는 const를 붙히면 add_value에서 문제가 생김
    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, 5);
    add_value(arr, 5, 100);
    print_array(arr, 5);
    int s = sum(arr, n);
    printf("sum is %d\n", s);
    print_array(arr, 5);
    return 0;
}