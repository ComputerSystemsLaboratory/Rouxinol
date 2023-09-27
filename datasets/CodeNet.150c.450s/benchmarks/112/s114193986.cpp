#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    char T[128];
    for (int i = 0; i < 128; i++)
      T[i] = char(i);
    for (int i = 0; i < n; i++) {
      char f, t;
      cin >> f >> t;
      T[f] = t;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
      char c;
      cin >> c;
      cout << T[c];
    }
    cout << endl;
  }
}