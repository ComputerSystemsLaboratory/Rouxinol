#include<bits/stdc++.h>
using namespace std;

int dp[50001];
int N,M;
vector<int>C;
int main(){
    cin>>N>>M;
    C.resize(M);
    for(int i=0;i<M;i++)cin>>C[i];

    for(int i=1;i<=N;i++){
        int mi=1001001001;
        for(int j=0;j<M;j++){
            if(i-C[j]<0)continue;
            mi=min(mi,dp[i-C[j]]+1);
        }
        dp[i]=mi;
    }
    cout<<dp[N]<<endl;
    return 0;
}