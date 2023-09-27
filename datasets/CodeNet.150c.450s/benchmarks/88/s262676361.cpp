#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 1; i < n; i++)
using namespace std;
static const int MAX = 151;

class Rect {
public:
  int h, w;
  Rect(int _h, int _w) {
    h = _h;
    w = _w;
  }

  int length() { return h * h + w * w; }

  bool operator<(Rect r) {
    return make_pair(length(), h) < make_pair(r.length(), r.h);
  }
};

int main() {
  vector<Rect> r;
  int h, w;
  REP(x, MAX) {
    REP(y, x) { r.push_back(Rect(y, x)); }
  }
  sort(r.begin(), r.end());

  while (cin >> h >> w, h) {
    for (int i = 0; i < r.size(); i++) {
      if (r[i].h == h && r[i].w == w)
        cout << r[i + 1].h << " " << r[i + 1].w << endl;
    }
  }
}
