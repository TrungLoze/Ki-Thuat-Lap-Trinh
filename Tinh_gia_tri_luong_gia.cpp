#include <stdio.h>
#include <math.h>

int main(){
    double alpha;
    scanf("%lf", &alpha);
    printf("%lf\n",sin(alpha*3.14/180));
    printf("%lf\n",cos(alpha*3.14/180));
    printf("%lf\n",tan(alpha*3.14/180));
    return 0;
}