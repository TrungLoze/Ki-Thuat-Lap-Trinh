#include <stdio.h>

int main(){
    char c = 0x0C | 4;
    c = c << 3;
    printf("%d", c);
    return 0;
}