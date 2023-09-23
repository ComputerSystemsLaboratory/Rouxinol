#include <iostream>
using namespace std;

int R[200010];
int M[200010];
// const int infty = 1000000010;

int main() {
  int n;
  cin >> n;
  for (auto i = 0; i < n; i++) {
    cin >> R[i];
  }
  int kau = R[0];
  for (auto i = 1; i < n; i++) {
    M[i] = R[i] - kau;
    // cerr << M[i] << " = " << R[i] << " - " << kau << endl;
    kau = min(kau, R[i]);
  }
  int ans = M[1];
  for (auto i = 2; i < n; i++) {
    ans = max(ans, M[i]);
  }
  cout << ans << endl;
}