#include <stdio.h>

int main(void)
{
    printf("Type int has a size of %zu bytes.\n", sizeof(int));
    printf("Type char has a size of %zu bytes.\n", sizeof(char));
    printf("Type long has a size of %zu bytes.\n", sizeof(long));
    printf("Type double has a size of %zu bytes.\n", sizeof(double));
    printf("Type float has a size of %zu bytes.\n", sizeof(float));
    
    return 0;
}
