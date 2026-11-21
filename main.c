#include <stdio.h>

int func2(int a, int b);

int main(void)
{
    int n;
    int result;
    scanf("%d", &n);
    result = func2(10, n);
    printf("%d\n", func2(10, n));
    return 0;
}

int func2(int a, int b)
{
    /* TODO: a と b の差の絶対値を返す */
    return a-b;
}
