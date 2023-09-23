#include<stdio.h>

int main(void){
    int time,h,m,s;
    scanf("%d",&time);
    h = time/3600;
    time = time - h*3600;
    m = time/60;
    time = time - m*60;
    s = time;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}