#include <stdio.h>

int main(){
    int line,i;
    scanf("%d",&line);
    for(i=0;i<line;i++){
        int a,b;
        scanf("%d %d",&a,&b) <= 10;
        printf("Case %d: %d\n",i+1,a+b);
    }
    return 0;
}
