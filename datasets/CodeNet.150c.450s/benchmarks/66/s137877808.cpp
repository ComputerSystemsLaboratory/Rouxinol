#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;

int main() {
  int n, m;
  bool key = 1;
  cin >> n;
  string A[n];
  rep(i, n) cin >> A[i];
  cin >> m;
  rep(i, m) {
    string S;
    cin >> S;
    rep(i, n) if (A[i] == S) {
      cout << (key ? "Opened" : "Closed") << " by " << S << endl;
      if (key)
        key = 0;
      else
        key = 1;
      goto end;
    }
    cout << "Unknown " << S << endl;
  end:;
  }
  return 0;
}