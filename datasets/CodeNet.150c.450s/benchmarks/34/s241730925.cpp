#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define fi first
#define se second

#define INF 2147483600

long dp[31];

int main(){
  fill(dp, dp+31, 0);
  dp[0]=1;
  for(int i=1; i<=30; i++){
    for(int j=1; j<=3; j++){
      if(i-j>=0) dp[i] += dp[i-j];
    }
  }
  int n;
  while(cin>>n, n){
    long res = (((dp[n]+9)/10)+364)/365;
    cout<<res<<endl;
  }

  return 0;
}