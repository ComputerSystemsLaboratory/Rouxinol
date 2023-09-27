#include<cstdio>
#include<iostream>
using namespace std;
int prime[1000000];
int main(){
    int n,ans=0;
    for(int i=0;i<1000000;i++)
        prime[i]=1;
    prime[1]=0;
    prime[2]=1;
    for(int i=1;i<1001;i++){
        if(prime[i]==1){
            for(int j=i+1;j<1000000;j++){
                if(j%i==0)
                    prime[j]=0;
            }
        }
    }
    while(scanf("%d",&n)!=EOF){
        ans=0;
        for(int i=1;i<=n;i++){
            if(prime[i]==1)
            ans++;
        }
        printf("%d\n",ans);
    }

    return 0;
}