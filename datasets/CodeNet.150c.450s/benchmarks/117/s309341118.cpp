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
const int INF = (1e+9) + 1;
const int N = 500000;
int n, c;
int a[N], L[N], R[N];

void merge(int l, int m, int r) {
  int i, j, k;
  int nl = m - l;
  int nr = r - m;
  for (int i=0; i<nl; i++)
    L[i] = a[l + i];
  for (i=0; i<nr; i++)
    R[i] = a[m + i];

  L[nl] = R[nr] = INF;

  i = j = 0;
  for (k=l; k<r; k++) {
    c++;
    if (L[i] <= R[j])
      a[k] = L[i++];
    else
      a[k] = R[j++];
  }
}

void merge_sort(int l, int r) {
  if (l+1<r) {
    int m = (l+r)/2;
    merge_sort(l, m);
    merge_sort(m, r);
    merge(l, m, r);
  }
}

int main() {
  int i;
  c = 0;
  scanf("%d ", &n);
  for (i=0; i<n; i++)
    scanf("%d ", a+i);
  merge_sort(0, n);

  for (i=0; i<n; i++)
    printf("%d%c", a[i], ( (i==n-1) ? '\n' : ' '));
  printf("%d\n", c);

  return 0;
}