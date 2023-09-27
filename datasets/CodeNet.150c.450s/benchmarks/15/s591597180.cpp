#include <iostream>
using namespace std;

const int N_MAX = 10000;
const int Q_MAX = 500;

int main() {
  int n, q;
  int s[N_MAX + 1], t[Q_MAX + 1];
  cin >> n;
  for (int i = 0; i < n; i++) cin >> s[i];
  cin >> q;
  for (int i = 0; i < q; i++) cin >> t[i];

  int ans = 0;
  for (int i = 0; i < q; i++) {
    s[n] = t[i];
    int j = 0;
    while (s[j] != t[i]) j++;
    if (j < n) ans++;
  }
  cout << ans << endl;
  return 0;
}