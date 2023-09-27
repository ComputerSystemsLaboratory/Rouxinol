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

ll N, s[128], dp[100][21];

int main(){
  scanf("%lld", &N);
  rep(i, N) scanf("%lld", s+i);
  dp[0][s[0]] = 1;
  REP(i, 1,N) rep(j, 21){
    if(j + s[i] <= 20) dp[i][j+s[i]] += dp[i-1][j];
    if(j - s[i] >= 0) dp[i][j-s[i]] += dp[i-1][j];
  }
  /*  rep(i, 21){
    rep(j, N+1) printf("%lld ", dp[i][j]); puts("");
    }*/
  printf("%lld\n", dp[N-2][s[N-1]]);
  return 0;
}