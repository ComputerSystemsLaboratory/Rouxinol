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

vector<int> nums,odds;

int  dp[MAX+1];
int dp2[MAX+1];

int dfs(int n, int *memo, vector<int> &vec){
  if(memo[n]!=-1) return memo[n];
  int ret = INF;
  for(int nxt : vec){
    if(n==nxt) return 1;
    if(n>nxt) ret = min(ret, dfs(n-nxt, memo, vec)+1);
  }
  return memo[n] = ret;
}

int main(){
  int tmp=0, n=1;
  while(tmp<=MAX){
    tmp+=n*(n+1)/2;
    nums.pb(tmp);
    if(tmp%2==1) odds.pb(tmp);
    n++;
  }

  fill(dp, dp+MAX+1, -1);
  fill(dp2, dp2+MAX+1, -1);

  dp[0] = dp2[0] = 0;

  // ??§????????????????????????????????¨?????°?????°????¢????????????????
  reverse(all(nums));
  reverse(all(odds));

  while(cin>>n, n){
    cout << dfs(n, dp, nums) << " " << dfs(n, dp2, odds) << endl;
  }

  return 0;
}