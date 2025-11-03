#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=0;
    int *p=NULL;
    while(1){
        int *q=(int*)malloc((n+1)*sizeof(int));
        for(int i=0;i<n;i++){
            q[i]=p[i];
        }
        int tepm;
        scanf("%d",&tepm);
        if(tepm==0){
            free(q);
            break;
        }
        q[n]=tepm;
        p=q;
        n++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}