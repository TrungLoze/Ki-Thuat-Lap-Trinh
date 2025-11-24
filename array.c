#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* inputarr(int* n);
int* nhapmang(int* n);
int checkSNT(int n);
int* prime(int* n);

int main(){
    int n = 0;
    int* ptr = inputarr(&n);
    ptr = nhapmang(&n);
    
    int* arr_prime=prime(&n);
    free(ptr);
    free(arr_prime);
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

int checkSNT(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int* prime(int* n){
    int index=0;
    int* ptr = NULL;
    for(int i=2;i<=*n;i++){
        if(checkSNT(i)){
            ptr = (int*)realloc(ptr, (index+1) * sizeof(int));
            ptr[index] = i;
            index++;
        }
    }
    return ptr;
}