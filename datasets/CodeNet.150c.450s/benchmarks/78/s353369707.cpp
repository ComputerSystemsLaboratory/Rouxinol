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
#define F first
#define S second
#define INF 1 << 30
#define M_MAX 1000001

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

vector<int>r;
int dp[M_MAX], odp[M_MAX];

int main(){
  fill(dp, dp+M_MAX, INF);
  //  fprintf(stderr, "error\n");
  fill(odp, odp+M_MAX, INF);

  int n = 0;
  while(++n){
    int x = n*(n+1)*(n+2)/6;
    if(x > 1000000) break;
    r.push_back(x);
    //    printf("%d %d\n", n, x);
  }

  dp[0] = odp[0] = 0;

  REP(i, 0, r.size()){
    int m = r[i];
    REP(j, m, M_MAX+1)
      dp[j] = min(dp[j], dp[j-m]+1);
    if(m%2)
      REP(j, m, M_MAX+1)
	odp[j] = min(odp[j], odp[j-m]+1);
  }

  //  printf("end\n");
  while(scanf("%d", &n) && n)
    printf("%d %d\n", dp[n], odp[n]);

  return 0;
}