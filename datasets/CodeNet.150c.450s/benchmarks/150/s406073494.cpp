#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define INF (2e9)

ll n, A[2000001];
ll B[2000001], C[10001];

int main() {
  cin >> n;
  REP(i, n) cin >> A[i];

  REP(i, 10001) C[i] = 0;
  REP(i, n) C[A[i]]++;
  for(int i = 1; i <= 10000; ++i) C[i] += C[i-1];
  for(int i = n-1; i >= 0; --i) {
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }

  cout << B[1];
  for(int i = 2; i <= n; ++i) cout << " " << B[i];
  cout << endl;

  return 0;
}
