#include <stdio.h>
#include <conio.h>

void ab(){
    int i='a';
    while(i<='z'){
        putchar(i++);
        putchar(32);
    }
}

int main(){
    ab();
}
