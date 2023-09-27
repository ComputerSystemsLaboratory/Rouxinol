#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 1000000000
#define MAX_N 100005
using namespace std;

int main(){
    int N,W;
    int v[102],w[102];
    int dp[102][10002];
    
    cin>>N>>W;
    rep(i,0,N)cin>>v[i]>>w[i];
    rep(i,0,N)dp[i][0]=0;
    rep(i,0,N)dp[0][i]=0;
    
    rep(i,1,N+1){
        rep(j,1,W+1){
            if(j-w[i-1]>=0)dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    
    cout<<dp[N][W]<<endl;
    
    return 0;
}