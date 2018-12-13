#include <stdio.h>
#include <math.h>

int main(){
    int testCase,i;
    scanf("%d",&testCase);
    double radius;
    for(i=0;i<testCase;i++){
        scanf("%lf",&radius);
        double value = 4 * pow(radius,2) - 2 * acos (0.0) * pow(radius,2);
        printf("Case %d: %.2lf\n",i+1,value);
    }
    return 0;
}
