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

void mergeSort(int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    cnt += right - left;
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
  sort(A, A + N);
  REP(i, N) {
    cout << A[i] << (i == N-1 ? '\n' : ' ');
  }
  cout << cnt << endl;
  return 0;
}