#include <iostream>

template <class T>
struct vec {
  T x, y;
  vec(const T& _x, const T& _y) : x(_x), y(_y) {}
  vec<T> operator+(const vec<T>& rhs) const {
    return vec<T>(x + rhs.x, y + rhs.y);
  }
  vec<T> operator-(const vec<T>& rhs) const {
    return vec<T>(x - rhs.x, y - rhs.y);
  }
};

using namespace std;

int main(int ac, char **av) {
  float x1, x2, x3, y1, y2, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    vec<float> T1 {x1, y1};
    vec<float> T2 {x2, y2};
    vec<float> T3 {x3, y3};
    vec<float> Tp {xp, yp};

    auto ab = T2 - T1;
    auto bp = Tp - T2;
    auto bc = T3 - T2;
    auto cp = Tp - T3;
    auto ca = T1 - T3;
    auto ap = Tp - T1;

    auto c1 = ab.x * bp.y - ab.y * bp.x;
    auto c2 = bc.x * cp.y - bc.y * cp.x;
    auto c3 = ca.x * ap.y - ca.y * ap.x;

    if ((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}