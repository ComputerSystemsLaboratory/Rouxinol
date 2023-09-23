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

const int N = 44;
int n;
int memo[N+1];

//?????????TLE?§£???
//?¨?????????????????????§2^44 - (?????????)

int fib(int k) {
  if (memo[k]) return memo[k];
  return fib(k-1) + fib(k-2);
}

int dp(int k) {
  memset(memo, 0, sizeof(memo));
  if (k<=1) return 1;
  memo[0] = memo[1] = 1;
  for (int i=2; i<=k; i++)
    memo[i] = memo[i-1] + memo[i-2];
  return memo[k];
}

int main() {
//  memset(memo, 0, sizeof(memo));
//  memo[0] = memo[1] = 1;
  scanf("%d ", &n);
//  printf("%d\n", fib(n));
  printf("%d\n", dp(n));

	return 0;
}