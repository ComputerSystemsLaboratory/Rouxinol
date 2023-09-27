#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int cnt, A[500010];

inline void mergeSort(int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    cnt += right - left;
  }
}

int main() {
  int N;
  scanf("%d", &N);
  REP(i, N) scanf("%d", A+i);
  mergeSort(0, N);
  sort(A, A + N);
  REP(i, N) {
    if (i) {
      printf(" %d", A[i]);
    } else {
      printf("%d", A[i]);
    }
  }
  printf("\n%d\n", cnt);
  return 0;
}