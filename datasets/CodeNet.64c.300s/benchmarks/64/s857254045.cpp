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

int gcd(int a, int b) {
  if (b==0) return a;
  return gcd(b, a%b);
}

int main() {
  int a, b;
  scanf("%d%d ", &a, &b);
  int res = (a >= b) ? gcd(a, b) : gcd(b, a);
  printf("%d\n", res);
  return 0;
}