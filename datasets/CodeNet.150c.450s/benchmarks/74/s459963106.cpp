#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
 
typedef long long int ll;
using   namespace std;
#define ALL(a) ((a).begin(),(a).end())
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)
#define EREP(i,n) for (int i=1;i<=(n);i++)
const ll MOD = 1000000007;
const ll INF = 100000000;
    ll N,M;
    ll C[30];
    ll dp[21][100000];
 
    int DP(int n,int v){
      if(n<0||v<0){return INF;}
      if(dp[n][v]!=-1)return dp[n][v];
      else{
        return dp[n][v] = min(DP(n-1,v),DP(n,v-C[n])+1);
      }
    }
 
 
int main() {
    cin>>N>>M;
    REP(i,M)cin>>C[i];
    memset(dp,-1,sizeof(dp));
    REP(i,21)dp[i][0]=0;
    cout<<DP(M - 1,N)<<endl;
 
 
}