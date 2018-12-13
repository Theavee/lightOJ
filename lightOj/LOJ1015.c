#include <stdio.h>

int main(){
    short tc,i;
    scanf("%hd\n",&tc);

    for(i=0;i<tc;i++){

        int number;

        short j;
        scanf("%d",&number);
        int line[number],total =0;
        for(j=0;j<number;j++){
            scanf("\n%d",&line[j]);
            if(line[j] > 0){
                total = total + line[j];
            }
        }
        printf("Case %hd: %d\n",i+1,total);

    }
    return 0;
}
