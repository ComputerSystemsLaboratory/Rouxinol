#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <ostream>
#include <bitset>
#include <list>
#include <deque>
#include <complex>
#include <cassert>
#include <cstring>
#include <cstdio>
#include <cfloat>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <climits>

using namespace std;

#define MAX_N 100
#define MAX_W 10000
#define INF 1e9
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rrep(i,n) for(int i = n ; i >= 0 ; i--)
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define all(p) (p).begin(),(p).end() 

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int N,W;
int v[MAX_N],w[MAX_N];

int solve(){
  int dp[MAX_N+1][MAX_W+1];
  memset(dp,0,sizeof(dp));
  rrep(i,N-1){
    rep(j,W+1){
      if(j < w[i]){
        dp[i][j] = dp[i+1][j];
      }else{
        dp[i][j] = max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
      }
    }
  }
  return dp[0][W];
}

int main(){
  scanf("%d%d",&N,&W);
  rep(i,N){
    scanf("%d%d",&v[i],&w[i]);
  }
  printf("%d\n",solve());
  return 0;
}