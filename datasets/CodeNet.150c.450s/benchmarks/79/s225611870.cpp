#include <stdio.h>
int main(){
    int n,r,card[100],p,c,temp[100];
    while(1){
        scanf("%d%d",&n,&r);
        if(n==0&&r==0)return 0;
        for(int i=1;i<=n;i++)card[i]=n-i+1;
        while(r--){
            scanf("%d%d",&p,&c);
            for(int i=1;i<=c;i++)temp[i]=card[i+p-1];
            for(int i=c+1;i<p+c;i++)temp[i]=card[i-c];
            for(int i=1;i<p+c;i++)card[i]=temp[i];
        }
        printf("%d\n",card[1]);
    }
}