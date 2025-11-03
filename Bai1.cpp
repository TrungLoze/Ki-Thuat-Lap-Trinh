#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int *p=(int*)malloc(N*sizeof(int));
    for(int i=0;i<N;i++){
        printf("Nhap p[i]= ");
        scanf("%d",&p[i]);
    }

    for(int i=0;i<N;i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    for(int i=N-1;i>=0;i--){
        printf("%d ", p[i]);
        free(p);
    }

}