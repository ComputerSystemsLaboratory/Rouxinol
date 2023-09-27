#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k,n||k){
        int dp[100001]={},series[100001],sum,edge,ans=0;
        for(int i=1;i<=n;i++){
            cin>>series[i];
        }
        for(int i=1;i<k;i++){
            dp[0]+=series[i];
        }
        for(int i=1;i<=n-k+1;i++){
            edge=i+k-1;
            if(ans<dp[i-1]+series[edge]) ans = dp[i-1]+series[edge];
            dp[i] = dp[i-1]+series[edge]-series[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}