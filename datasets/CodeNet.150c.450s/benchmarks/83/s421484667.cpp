#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int N,W;
int v[1000],w[1000];
int main(){

    cin>>N>>W;
    for(int i=1;i<=N;i++){
        cin>>v[i]>>w[i];
    }

    vector<vector<int> > dp(N+1,vector<int>(W+1,0));

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            dp[i+1][j]=dp[i][j];
            if(j-w[i+1]>=0){
                dp[i+1][j]=max(dp[i+1][j],dp[i][j-w[i+1]]+v[i+1]);
            }
        }
    }

    cout<<dp[N][W]<<endl;
}
