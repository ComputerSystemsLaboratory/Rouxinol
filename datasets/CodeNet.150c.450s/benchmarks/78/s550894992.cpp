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

bool   dp[6][1000001];
bool dp2[38][1000001];

int main(){
  int n=1;
  vector<int> vec, vec2;
  int tmp=0;
  while(tmp<=1000000){
    tmp+=n*(n+1)/2;
    vec.pb(tmp);
    if(tmp%2==1) vec2.pb(tmp);
    n++;
  }
  // dp[i][j] : i???????????£???j?????°????????????
  dp[0][0]=true;
  repl(i,1,5+1){
    for(int upd : vec){
      rep(j, 1000001){
        dp[i][j] = dp[i][j] | dp[i-1][j];
        if(j-upd>=0 && dp[i-1][j-upd]) dp[i][j] = true;
      }
    }
  }
  dp2[0][0]=true;
  repl(i,1,38){
    for(int upd : vec2){
      rep(j, 1000001){
        dp2[i][j] = dp2[i][j] | dp2[i-1][j];
        if(j-upd>=0 && dp2[i-1][j-upd]) dp2[i][j] = true;
      }
    }
  }

  while(cin>>n, n){
    int res=1;
    while(dp[res][n]==false) res++;
    cout<<res<<" ";
    res=1;
    while(dp2[res][n]==false) res++;
    cout<<res<<endl;
  }
  return 0;
}