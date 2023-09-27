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

#define MAX 60010
#define MAX_C 20
#define INF 1e9
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define all(p) (p).begin(),(p).end() 

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int N,M;
int c[MAX_C];

int solve(){
  int dp[MAX];
  fill(dp,dp+MAX,INF);
  dp[0] = 0;
  for(int i = 0 ; i < M ; i++){
    for(int j = c[i] ; j < MAX ; j++){
      dp[j] = min(dp[j],dp[j-c[i]] + 1);
    }
  }
  return dp[N];
}

int main(){
  scanf("%d%d",&N,&M);
  rep(i,M){
    scanf("%d",&c[i]);
  }
  printf("%d\n",solve());
  return 0;
}