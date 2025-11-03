#include <stdio.h>
#include <conio.h>

char c='X';
int i=10;
const int PI=3.1415;
float r=11.2345678;

int main(){
    printf("Kí tự %c có mã ASCII là %d\n",c,c);
    printf("%d bình phương", i);
    printf(" bằng %d\n",i*i);
    printf("Bán kính hình tròn là %f",r);
    printf(" có diện tích là %.3f\n",PI*r*r);
    return 0;
}