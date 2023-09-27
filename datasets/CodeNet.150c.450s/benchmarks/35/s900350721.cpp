#include <iostream>

using namespace std;

int s[5000];

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    cin >> s[0];
    int r = s[0], m = 0;
    for (int i = 1; i < n; i++) {
      cin >> s[i];
      r = max(r, s[i]);
      s[i] += s[i-1];
    }
    for (int i = 0; i < n; i++)
      if (s[i] < m)
        m = s[i];
      else
        r = max(r, s[i]-m);
    cout << r << endl;
  }
}