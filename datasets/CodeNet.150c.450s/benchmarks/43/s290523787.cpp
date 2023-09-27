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

int main(){
  int n, p[2], c[2];
  while(scanf("%d", &n) && n){
    p[0] = p[1] = 0;
    while(n--){
      scanf("%d%d", c, c+1);
      if(c[0] > c[1]) p[0] += c[0]+c[1];
      else if(c[0] < c[1]) p[1] += c[0]+c[1];
      else p[1] += c[1], p[0] += c[1];
    }
    printf("%d %d\n", p[0], p[1]);
  }
  return 0;
}