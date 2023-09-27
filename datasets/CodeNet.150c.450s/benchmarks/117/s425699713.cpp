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

void merge(int left, int mid, int right) {
  int n1 = mid - left, n2 = right - mid;
  vector<int> L(n1+1), R(n2+1);
  REP(i, n1) L[i] = A[left + i];
  REP(i, n2) R[i] = A[mid + i];
  L[n1] = R[n2] = (int)1e9 + 1;
  int i = 0, j = 0;
  FOR(k, left, right) {
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  REP(i, N) cin >> A[i];
  mergeSort(0, N);
  REP(i, N) {
    cout << A[i] << (i == N-1 ? '\n' : ' ');
  }
  cout << cnt << endl;
  return 0;
}