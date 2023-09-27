#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <complex>
#include <map>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
#define rep(i,n) for (int i=0; i < (n); i++)

typedef double D;      // 座標値の型。doubleかlong doubleを想定
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;
const D EPS = 1e-9;    // 許容誤差。問題によって変える
#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)

// 内積　dot(a,b) = |a||b|cosθ
D dot(P a, P b) {
  return (conj(a)*b).X;
}
// 外積　cross(a,b) = |a||b|sinθ
D cross(P a, P b) {
  return (conj(a)*b).Y;
}

// 点の進行方向
int ccw(P a, P b, P c) {
  b -= a;  c -= a;
  if (cross(b,c) >  EPS) return +1;  // counter clockwise
  if (cross(b,c) < -EPS) return -1;  // clockwise
  if (dot(b,c)   < -EPS) return +2;  // c--a--b on line
  if (norm(b) < norm(c)) return -2;  // a--b--c on line or a==b
  return 0;                          // a--c--b on line or a==c or b==c
}


/* 多角形 */

// 頂点の順序（sortやmax_elementに必要）
namespace std {
  bool operator<(const P a, const P b) {
    return a.X != b.X ? a.X < b.X : a.Y < b.Y;
  }
}

// 凸包
VP convexHull(VP ps) {  // 元の点集合がソートされていいならVP&に
  int n = ps.size(), k = 0;
  sort(ps.begin(), ps.end());
  VP ch(2*n);
  for (int i = 0; i < n; ch[k++] = ps[i++]) // lower-hull
    while (k >= 2 && ccw(ch[k-2], ch[k-1], ps[i]) <= 0) --k;  // 余計な点も含むなら == -1 とする
  for (int i = n-2, t = k+1; i >= 0; ch[k++] = ps[i--]) // upper-hull
    while (k >= t && ccw(ch[k-2], ch[k-1], ps[i]) <= 0) --k;
  ch.resize(k-1);
  return ch;
}

// 凸判定。縮退を認めないならccwの判定部分を != 1 とする
bool isCcwConvex(const VP& ps) {
  int n = ps.size();
  rep (i, n) if (ccw(ps[i], ps[(i+1) % n], ps[(i+2) % n]) == -1) return false;
  return true;
}

// 凸多角形の内部判定　O(n)
// 点が領域内部なら1、境界上なら2、外部なら0を返す
int inConvex(P p, const VP& ps) {
  int n = ps.size();
  int dir = ccw(ps[0], ps[1], p);
  rep (i, n) {
    int ccwc = ccw(ps[i], ps[(i + 1) % n], p);
    if (!ccwc) return 2;  // 線分上に存在
    if (ccwc != dir) return 0;
  }
  return 1;
}

int main() {
  while (true) {
    VP ps(4);
    rep (i,4) {
      D x,y;
      if (! (cin >> x >> y) ) return 0;
      ps[i] = P(x,y);
    }
    VP conv = convexHull(ps);
    bool pFound = false;
    rep (i,conv.size()) if ( EQ(norm(conv[i]-ps[3]), 0) ) pFound = true;
    cout << (pFound ? "NO" : "YES") << endl;
  }
  return 0;
}