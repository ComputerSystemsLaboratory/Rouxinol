#include<stdio.h>
int main(){
    int time,m,s;
    scanf("%d",&time);
    s=time%60;
    time/=60;
    m=time%60;
    time/=60;
    printf("%d:%d:%d\n",time,m,s);
    return 0;
}