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

const int N = 100000;
const int K = 100000;
int n, k;
int w[N], t[K];

bool check(int limit) {
  int i, j;
  
  for (i=0; i<n; i++)
    if (limit < w[i]) return false;

  memset(t, 0, sizeof(t));
  i = j = 0;
  while (i<n && j<k) {
    if (t[j] + w[i] < limit) 
      t[j] += w[i++];
    else if (t[j] + w[i] == limit)
      t[j++] += w[i++];
    else
      j++;
  }

  if (i<n && j==k)
    return false;
  else
    return true;
}

int main() {
  int i;
  scanf("%d%d ", &n, &k);
  for (i=0; i<n; i++)
    scanf("%d ", w+i);

  int l = 0, u = 0;
  for (i=0; i<n; i++) u += w[i];
  while (u-l > 1) {
    int m = (l+u)/2;
    if (check(m))
      u = m;
    else
      l = m;
  }
  printf("%d\n", u);
  return 0;
}