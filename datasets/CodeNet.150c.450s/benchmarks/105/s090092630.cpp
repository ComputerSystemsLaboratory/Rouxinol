#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, ans = 0;
    cin >> N;
    vi A(N), B(0);
    for (int i = 0; i < N; i++) cin >> A[i];
    string S;
    cin >> S;
    for (int i = N - 1; i >= 0; i--) {
      for (ll b : B) A[i] = min(A[i], A[i] ^ b);
      if (A[i] == 0) continue;
      if (S[i] == '0') B.push_back(A[i]);
      else ans = 1;
    }
    cout << ans << endl;
  }
}
