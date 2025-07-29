/*
 *功能：测试不正确的参数个数会有什么结果
 */
#include <stdio.h>

int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;
    
    printf("%d\n", f, g);
    printf("%d %d\n", f);
    printf("%d %f\n", h, g);

    return 0;
}
