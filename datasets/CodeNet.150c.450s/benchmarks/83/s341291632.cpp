#include<cstdio>
#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
int dp[10000];
signed main(){
    int N,v[100],w[100],W;
    cin>>N>>W;
    for(int i=0;i<N;i++){
        cin>>v[i]>>w[i];
    }
    for(int i=0;i<N;i++){
        for(int j=W;j>=w[i];j--){
            dp[j]=max(dp[j-w[i]]+v[i],dp[j]);

        }
    }
    cout<<dp[W]<<endl;
    return 0;
}