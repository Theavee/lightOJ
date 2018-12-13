#include <stdio.h>

int main(){
    int number,i;
    scanf("%d",&number);
    for(i=0;i<number;i++){
    int a,b,c,set;
    scanf("%d %d %d",&a,&b,&c);
        if((a > b && a < c) || (a < b && a > c)){
            set =  a;
        }
        else if((b > a && b < c) || (b < a && b > c)){
            set =  b;
        }
        else{
            set =  c;
        }

        printf("Case %d: %d\n",i+1,set);
    }
    return 0;
}
