#include <stdio.h>

void butler();//ISO/ANSI C函数原型

int main(void)
{
    printf("I will summon  the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler()
{
    printf("You rang, sir?\n");
}
