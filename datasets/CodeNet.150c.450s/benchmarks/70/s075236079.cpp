#include <stdio.h>
int main(){
    int tuki,hi,youbi=4;
    while(1){
        scanf("%d %d",&tuki,&hi);
        if(tuki==0) break;
        switch(tuki){
            case 2: youbi=youbi+31+hi-1;
                break;
            case 3: youbi=youbi+60+hi-1;
                break;
            case 4: youbi=youbi+91+hi-1;
                break;
            case 5: youbi=youbi+121+hi-1;
                break;
            case 6: youbi=youbi+152+hi-1;
                break;
            case 7: youbi=youbi+182+hi-1;
                break;
            case 8: youbi=youbi+213+hi-1;
                break;
            case 9: youbi=youbi+244+hi-1;
                break;
            case 10: youbi=youbi+274+hi-1;
                break;
            case 11: youbi=youbi+305+hi-1;
                break;
            case 12: youbi=youbi+335+hi-1;
                break;
        }
        youbi=youbi%7;
        switch(youbi){
            case 0:puts("Sunday");
                break;
            case 1:puts("Monday");
                break;
            case 2:puts("Tuesday");
                break;
            case 3:puts("Wednesday");
                break;
            case 4:puts("Thursday");
                break;
            case 5:puts("Friday");
                break;
            case 6:puts("Saturday");
                break;
        }
        youbi=4;
    }
    return 0;
}