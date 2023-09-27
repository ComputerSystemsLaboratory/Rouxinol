#include <stdio.h>

int main(void){
    int s,sec,min,hour;

    scanf("%d", &s);

    sec = s%60;
    s = (s-sec)/60;
    min = s%60;
    s = (s-min)/60;
    hour = s%60;

    printf("%d:%d:%d\n",hour,min,sec);

    return 0;
}