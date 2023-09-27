#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for((i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef pair<int, int> PII;

const double EPS = 1e-10;

int calc(int a, int r) {
  return a*(100 + r)/100;
}

int main() {
  int x, y, s;
  int i, j;
  while (1) {
    scanf("%d%d%d ", &x, &y, &s); 
    if (!x && !y && !s) break;
    int res = 0;
    for (i=1; i<s; i++)
      for (j=i; j<s; j++) {
        int z = calc(i,x) + calc(j,x);
        if (z==s) res = max(res, calc(i,y) + calc(j,y));
      }
    printf("%d\n", res);
  }

	return 0;
}