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

int N;
vector<int>a;

int dfs(int n, int b, int c){
  if(n == 10) return 1;

  if(b < a[n] && dfs(n+1, a[n], c)) return 1;
  if(c < a[n] && dfs(n+1, b, a[n])) return 1;
  return 0;
}

int main(){
  scanf("%d", &N);
  rep(i, N){
    a.clear();
    int b;
    rep(i, 10){
      scanf("%d", &b);
      a.PB(b);
    }

    printf("%s\n", dfs(0, 0, 0)?"YES":"NO");
  }
  return 0;
}