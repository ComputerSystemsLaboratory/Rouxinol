#include <bits/stdc++.h>
using namespace std;

bool lessThan(int h1, int w1, int h2, int w2) {
  int d1 = h1*h1 + w1*w1;
  int d2 = h2*h2 + w2*w2;
  if(d1 != d2) return d1 < d2;
  return h1 < h2;
}

int main() {
  for(int h, w; cin >> h >> w && (h|w);) {
    int c, d;
    c = d = 200;
    for(int a = 1; a <= 150; ++a) {
      for(int b = a+1; b <= 150; ++b) {
        if(lessThan(h, w, a, b) && lessThan(a, b, c, d)) {
          c = a;
          d = b;
        }
      }
    }
    cout << c << " " << d << endl;
  }
  return 0;
}