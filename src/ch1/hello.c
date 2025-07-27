#include<string.h>
#include <stdio.h>  
int main(){
    int a =0;
    printf("hello world\n");
    int c = 0;
    c +=1;
    char *p  = "hello world";
    printf("c = %d\n", c);
    printf("strlen(p) = %zu\n", strlen(p));
    printf("p[1] = %c\n", p[1]);
    return 0;
}