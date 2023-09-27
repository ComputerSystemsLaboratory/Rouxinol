#include<stdio.h>

int main(){
    int x,cnt=1;
    while(scanf("%d",&x) && x != 0){
        printf("Case %d: %d\n",cnt,x);
        cnt ++;
    }
    return 0;
}

