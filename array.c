#include <stdio.h>
#include <stdlib.h>

int* inputarr(int* n);
int* nhapmang(int* n);

int main(){
    int n = 0;
    int* ptr = inputarr(&n);
    ptr = nhapmang(&n);
    
    free(ptr);
    return 0;
}

int* inputarr(int* n){
    int* p = (int*)malloc((*n) * sizeof(int));
    return p;
}

int* nhapmang(int* n){
    int tmp;
    int* ptr = (int*)malloc(1*sizeof(int));
    printf("Nhap phan tu thu %d: ", *n+1);

    while(scanf("%d",&tmp) == 1){
        ptr = (int*)realloc(ptr, (*n+1) * sizeof(int));
        ptr[*n] = tmp;
        (*n)++;
        
        printf("Nhap phan tu thu %d: ", *n+1);
    }

    return ptr;
}