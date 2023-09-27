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
    int n,m;
    int c[21],dp[21][50001];
    
    cin>>n>>m;
    rep(i,0,m)cin>>c[i];
    
    rep(i,0,m+1)rep(j,0,n+1)dp[i][j]=INF;
    rep(i,0,m+1)dp[i][0]=0;
    
    rep(i,0,m){
        rep(j,0,n+1){
            if(j<c[i]) dp[i+1][j]=dp[i][j];
            else dp[i+1][j]=min(dp[i][j],dp[i+1][j-c[i]]+1);
        }
    }
    /*
    rep(i,0,m+1){
        rep(j,0,n+1){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    cout<<dp[m][n]<<endl;
    return 0;
}