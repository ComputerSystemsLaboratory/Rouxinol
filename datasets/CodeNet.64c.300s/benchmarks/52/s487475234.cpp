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

int N, S;

int dfs(int num, int n, int s){
  if(n == N){
    if(s == S) return 1;
    return 0;
  }

  if(num == 10) return 0;

  return dfs(num+1, n+1, s+num) + dfs(num+1, n, s);
}

int main(){
  while(scanf("%d%d", &N, &S) && N+S){
    int v[10] = {};
    printf("%d\n", dfs(0, 0, 0));
  }
  return 0;
}