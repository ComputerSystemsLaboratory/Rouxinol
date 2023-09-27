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

const int N = 20;
const int Q = 20;
int n, q;
int a[N];
int m;

bool check(int i, int k) {
  if (k==m) return true;
  if (m<k || i==n) return false;

  if (check(i+1, k)) return true;
  if (check(i+1, k + a[i])) return true;

  return false;
}

int main() {
  int i;
  scanf("%d ", &n);
  for (i=0; i<n; i++)
    scanf("%d ", a+i);
  scanf("%d ", &q);
  for (i=0; i<q; i++) {
    scanf("%d ", &m);
    if (check(0, 0)) 
      printf("yes\n");
    else
      printf("no\n");
  }

	return 0;
}