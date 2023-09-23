#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int a,b,dp[16][16];
bool bad[16][16];

void solve() {
  memset(dp, 0, sizeof dp);
  memset(bad, false, sizeof bad);
  int n,x,y; cin>>n;
  rep(i,n) {cin>>x>>y;bad[--y][--x]=true;}
  dp[0][0]=1;
  for(int i=1;i<a;++i) if(!bad[0][i]) dp[0][i]=dp[0][i-1];
  for(int i=1;i<b;++i) if(!bad[i][0]) dp[i][0]=dp[i-1][0];
  for(int i=1;i<b;++i) {
    for(int j=1;j<a;++j) {
      if(!bad[i][j]) dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
  }
  // rep(i,b) {
  //   rep(j,a) printf("%3d",dp[i][j]);
  //   puts("");
  // }
  cout<<dp[b-1][a-1]<<endl;
}

int main() {
  while(cin>>a>>b,a) solve();
  return 0;
}