#include <stdio.h>

int main(){
    short int open_close=3,run=4,enter_exit = 5;
    short int testCase,total;
    scanf("%hd",&testCase);
    short int i,myPlace,liftplace;
    for(i=0;i<testCase;i++){
        scanf("%hd %hd",&myPlace,&liftplace);
        if(myPlace == liftplace){
            total = 2 * open_close+ enter_exit + myPlace * 4 + open_close + enter_exit;
        }
        else if(myPlace < liftplace){
            total = (liftplace - myPlace) * 4 + 2 * open_close + enter_exit + myPlace*4 + open_close + enter_exit;
        }
        else if(myPlace > liftplace){
            total = (myPlace - liftplace) *4 + 2 * open_close + enter_exit + myPlace * 4+ open_close + enter_exit;
        }

        printf("Case %hd: %hd\n",i+1,total);
    }

    return 0;
}
