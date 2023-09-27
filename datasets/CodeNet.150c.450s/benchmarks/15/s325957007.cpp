#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  int S[n];
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  int q;
  cin >> q;
  int T[q];
  for (int i = 0; i < q; i++) {
    cin >> T[i];
  }

  int ans = 0;
  for (int i = 0; i < q; i++) {
    for (int j = 0; j < n; j++) {
      if(T[i] == S[j]) {
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
}