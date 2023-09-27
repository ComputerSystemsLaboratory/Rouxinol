#include<bits/stdc++.h>
using namespace std;
 
int N,W;
vector<int>v,w;
 
int dp[10001];
 
int main(){
    cin>>N>>W;
    v.resize(N);w.resize(N);
 
    for(int i=0;i<N;i++)cin>>v[i]>>w[i];
 
    for(int i=0;i<N;i++){
        for(int j=W;j>0;j--){
            if(j-w[i]<0)break;
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
 
    cout<<dp[W]<<endl;
    return 0;
}
