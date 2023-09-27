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
#define MAX 1000000

int  dp[MAX+1];
int dp2[MAX+1];

int main(){
  vector<int> nums,odds;

  int tmp=0, n=1;
  while(tmp<=MAX){
    tmp+=n*(n+1)/2;
    nums.pb(tmp);
    if(tmp%2==1) odds.pb(tmp);
    n++;
  }

  fill(dp, dp+MAX+1, INF);
  fill(dp2, dp2+MAX+1, INF);
  dp[0]=0; dp2[0]=0;

  repl(i,1,MAX+1){
    for(int nxt : nums){
        if(i<nxt) continue;
        dp[i] = min(dp[i], dp[i-nxt]+1);
    }
    for(int nxt : odds){
        if(i<nxt) continue;
        dp2[i] = min(dp2[i], dp2[i-nxt]+1);
    }
  }

  while(scanf("%d", &n), n){
    printf("%d %d\n", dp[n], dp2[n]);
  }

  return 0;
}