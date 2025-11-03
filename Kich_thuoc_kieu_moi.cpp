#include <stdio.h>

int main(){
    enum Long {Chan,Tay,Tai,Mat,Mui,Mieng};
    enum Long bo_phan = Chan;
    printf("%d",sizeof(Long));
    return 0;
}