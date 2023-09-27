#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  while (true) {
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0) break;
    int rh = 160, rw = 160;
    rep (ww, 160) rep (hh, ww) if (ww > 0 && hh > 0) {
      if (h * h + w * w > hh * hh + ww * ww) continue;
      if (h * h + w * w == hh * hh + ww * ww && h >= hh) continue;
      if (rh * rh + rw * rw < hh * hh + ww * ww) continue;
      if (rh * rh + rw * rw == hh * hh + ww * ww && rh < hh) continue;
      rh = hh;
      rw = ww;
    }
    cout << rh << " " << rw << endl;
  }
  return 0;
}