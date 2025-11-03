#include <stdio.h>

int main(){
    int a=3;
    char c = (0xF1 << a) | (a+2);
    printf("c= %d\n",c);
    return 0;
}