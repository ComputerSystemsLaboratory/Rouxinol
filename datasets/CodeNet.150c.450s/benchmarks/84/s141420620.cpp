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
const int INF = 1000000001;
const int N = 200000;
int n;
int a[N], L[N], R[N];

ll merge(int l, int m, int r) {
  ll res = 0LL;
  int i, j, k;
  int nl = m - l;
  int nr = r - m;
  for (i=0; i<nl; i++)
    L[i] = a[l + i];
  for (i=0; i<nr; i++)
    R[i] = a[m + i];
  
//  L[nl] = R[nr] = INF;
  
  k = l;
  i = j = 0;
  while (i<nl || j<nr) {
    if (i==nl)
      a[k++] = R[j++]; 
    else if (j==nr)
      a[k++] = L[i++];
    else if (L[i] <= R[j])
      a[k++] = L[i++];
    else {
      a[k++] = R[j++]; 
      res += (ll)(nl - i);
    }
  }

/*
  i = j = 0;
  for (k=l; k<r; k++) {
    if (L[i] <= R[j]) {
      a[k] = L[i++];
//      res += j;
    } else {
      res += (ll)(nl - i);
      a[k] = R[j++];
    }
  }
*/

  return res;
}

ll merge_sort(int l, int r) {
  ll res = 0;
  if (l+1<r) {
    int m = (l+r)/2;
    res = merge_sort(l, m);
    res += merge_sort(m, r);
    res += merge(l, m, r);
  }
  return res;
}

int main() {
  scanf("%d ", &n);
  for (int i=0; i<n; i++)
    scanf("%d ", a+i);

  printf("%lld\n", merge_sort(0, n));

  return 0;
}