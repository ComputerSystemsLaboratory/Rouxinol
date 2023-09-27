#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int ansH, ansW;
int H, W;
void solve() {
  int d = INF;
  ansH = 0, ansW = 0;
  for (int h = 1; h <= 150; h++) {
    for (int w = h+1; w <= 150; w++) {
      if ((h*h+w*w) == (H*H+W*W) && h>H) {
        ansH = h;
        ansW = w;
        return;
      } else if ((H*H+W*W) < (h*h+w*w) && (h*h+w*w) < d) {
        d = h*h+w*w;
        ansH = h;
        ansW = w;
      }
    }
  }
  return;
}

signed main() {
  while (cin>>H>>W, H+W!=0) {
    solve();
    cout << ansH << " " << ansW << endl;
  }
}

