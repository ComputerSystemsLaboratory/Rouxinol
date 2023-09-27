#include <iostream>
using namespace std;

int main() {
  int n, q, t, cnt = 0;
  cin >> n;
  int s[n];

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> t;
    for (int j = 0; j < n; j++) {
      if (t == s[j]) {
        cnt += 1;
        break;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}