#include<stdio.h>
int prime[1000000];
int main(){
    prime[0]=-1;
    prime[1]=-1;
    for(int i=2;i<1000000;i++){
        if(prime[i]==0){
            prime[i]=1;
            for(int j=i*2;j<1000000;j+=i)prime[j]=-1;
        }
    }
    int now;
    while(~scanf("%d",&now)){
        int ans=0;
        for(int i=1;i<now+1;i++)if(prime[i]==1)ans++;
        printf("%d\n",ans);
    }
}
