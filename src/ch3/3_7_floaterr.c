/*
 *功能：测试浮点数的舍入误差
 */
#include <stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f\n", a);

    return 0;
}
