#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int sen[10][10000], C, R, a[10][10000];

int solve(){
  int res = 0;
  rep(i, R){
    int c = 0;
    rep(j, C) if(a[j][i]) c++;
    res += max(c, C - c);
  }
  return res;
}

int dfs(int n){
  if(n == C){
    memcpy(a, sen, sizeof(sen));
    return solve();
  }
  int res = 0;
  res =  dfs(n+1);
  rep(i, R) sen[n][i] = sen[n][i] ^ 1;
  res = max(res, dfs(n+1));
  rep(i, R) sen[n][i] = sen[n][i] ^ 1;
  return res;
}

int main(){
  while(scanf("%d%d", &C, &R) && C+R){
    rep(i, C) rep(j, R) scanf("%d", &sen[i][j]);

    printf("%d\n", dfs(0));
  }
  return 0;
}