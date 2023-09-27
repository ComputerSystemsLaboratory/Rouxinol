#include<bits/stdc++.h>
using namespace std;
int prime[1000000];
int main(){
    fill_n(prime,1000000,1);
    prime[0]=prime[1]=0;

    for(int i=2;i<1000000;i++){
        prime[i]+=prime[i-1];
        if(prime[i]==prime[i-1])continue;
        for(int j=i+i;j<1000000;j+=i)prime[j]=0;
    }

    int n;
    while(scanf("%d",&n)!=EOF)printf("%d\n",prime[n]);

    return 0;
}