/*
 *功能：以两种方式显式浮点值
 */
#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    //printf("%f can be written %e\n", dip, dip);//错误写法
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
