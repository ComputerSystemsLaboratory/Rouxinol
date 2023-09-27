#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>
 
using namespace std;
 
#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pii;
 
signed main(void) {
  int i,j;
  int n;
  cin>>n;
  vi v(n);
  rep(i,n)cin>>v[i];
  vector<vi> dp(n,vi(21,0));
  dp[0][0]=1;
  rep(i,n-1)rep(j,21)if(dp[i][j]>0){
    if(j+v[i]<=20)dp[i+1][j+v[i]]+=dp[i][j];
    if(j-v[i]>=0)dp[i+1][j-v[i]]+=dp[i][j];
  }
  if(v[0])cout<<dp[n-1][v[n-1]]<<endl;
  else cout<<dp[n-1][v[n-1]]/2<<endl;
}