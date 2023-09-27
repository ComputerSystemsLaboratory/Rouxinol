#include <stdio.h>

int main(){
    bool sub[30]={};
    for(int i =0;i<28;i++){
        int n;
        scanf("%d",&n);
        sub[n-1]=true;
    }
    for(int i =0;i<30;i++){
        if(!sub[i]) printf("%d\n",i+1);
    }
    return 0;
}