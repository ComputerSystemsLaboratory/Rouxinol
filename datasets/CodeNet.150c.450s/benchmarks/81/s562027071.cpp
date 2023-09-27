#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 100000000;

int main() {
  int n, p, a, b, c;
  int m[10][10];
  while (1) {
    cin >> n;
    if (!n) break;
    for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
        m[i][j] = INF;
      }
      m[i][i] = 0;
    }
    p = 0;
    for (int i=0; i<n; i++) {
      cin >> a >> b >> c;
      p = max(p, a);
      p = max(p, b);
      m[a][b] = c;
      m[b][a] = c;
    }
    for (int i=0; i<=p; i++) {
      for (int j=0; j<=p; j++) {
        for (int k=0; k<=p; k++) {
          m[j][k] = min(m[j][k], m[j][i] + m[i][k]);
        }
      }
    }
    a = INF;
    b = -1;
    for (int i=0; i<=p; i++) {
      c = 0;
      for (int j=0; j<=p; j++) {
        c += m[i][j];
      }
      if (a > c) {
        a = c;
        b = i;
      }
    }
    cout << b << " " << a << endl;
  }
}