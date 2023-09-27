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
int w[N], c[K];

bool check(int lmt) {
  int i, j;

  for (i=0; i<n; i++)
    if (lmt < w[i]) return false;

/*
  for (i=0; i<(int)min(k, n); i++)
    c[i] = w[i]; 

  int full = -1;
  for (i=k-1; i>=0; i--)
    if (c[i] == lmt) {
      full = i;
      break;
    }

  for (i=k; i<n; i++) {
    bool is_put = false;
    for (j=full+1; j<k; j++)
      if (c[j]+w[i] <= lmt) {
        is_put = true;
        c[j] += w[i];
        if (c[j] == lmt) full++;
        break;
      }
    if (!is_put) return false;
  }
*/

  memset(c, 0, sizeof(c));
  int full = -1;
  for (i=0; i<n; i++) {
    bool is_put = false;
    for (j=full+1; j<k; j++) {
      if (lmt < c[j] + w[i])
        full++; 
      else {
        c[j] += w[i];
        if (c[j] == lmt) full++;
        is_put = true;
        break;
      }
    }
    if (!is_put) return false;
  }

  return true;
}

int main() {
  int i;
  scanf("%d%d ", &n, &k);
  for (i=0; i<n; i++)
    scanf("%d ", w+i);
  memset(c, 0, sizeof(c));
//  sort(w, w+n, greater<int>());

  //?±?????????????(l, u]????????????????????¨??????????????¢?´¢
  int l = 0, u = 0;
  for (i=0; i<n; i++) u += w[i];
  while (u-l > 1) {
    int m = (int)(((ll)l + u)/2);
    if (check(m))
      u = m;
    else
      l = m;
  }

  printf("%d\n", u);

  return 0;
}