#include <stdio.h>

int main(){
    // int a=21,b=43,c=10,d=35,m;
    // m=(a<b) ? ((a<c) ? ((a<d) ? a : d) : ((c<d) ? c : d)) : ((b<c) ? ((b<d) ? b : d) : ((c<d) ? c:d));
    // printf("%d",m);
    // return 0;
    
    int a,sum=0;
    scanf("%d",&a);
    while(a != 0){
        sum += a;
        scanf("%d", &a);
    }
    printf("%d",sum);
}