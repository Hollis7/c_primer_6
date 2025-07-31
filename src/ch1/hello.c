#include <string.h>
#include <stdio.h>
add(float a, float b)
{
    return a + b;
}
int main()
{
    float x = 1.0, y = 2.0;
    auto result = add(x, y);
    printf("%f\n", result);
    return 0;
}