#include <bits/stdc++.h>
#define dum(x) cout<<#x<<'='<<x<<endl
using namespace std;

int main() {
  int w, n; cin >> w >> n;
  vector<pair<int, int>> vp(w);
  for (int i = 0; i < w; i++) {
      vp.at(i) = make_pair(i + 1, i + 1);
  }

  for (int i = 0; i < n; i++) {
    int a, b; char c; cin >> a >> c >> b;
    int tmp;
    for (int i = 0; i < w; i++) {
      if (vp.at(i).second == a) {
        vp.at(i).second = b;
        tmp = i;
      }
    }
    for (int i = 0; i < w; i++) {
      if (i == tmp) continue;
      if (vp.at(i).second == b) {
        vp.at(i).second = a;
      }
    }
  }

  for (int i = 0; i < w; i++) {
    swap(vp.at(i).first, vp.at(i).second);
  }

  sort(vp.begin(), vp.end());
  for (int i = 0; i < w; i++) {
    cout << vp.at(i).second << endl;;
  }
}

