#include<stdio.h>



int main(){
    int s,t=1;
    while(1){
        scanf("%d",&s);
        if(s==0) break;
        printf("Case %d: %d\n",t,s);
        t++;
    }
    return 0;
}