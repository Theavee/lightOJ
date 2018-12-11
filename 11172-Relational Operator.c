#include <stdio.h>

int main(){
    short testCase,i;
    scanf("%hd",&testCase);
    for(i=0;i<testCase;i++){
        int number1,number2;
        scanf("%d %d",&number1,&number2);
        if(number1 > number2){
            printf(">\n");
        }
        else if(number1 < number2){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}
