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

/* 交差判定　直線・線分は縮退してはならない。接する場合は交差するとみなす。isecはintersectの略 */

// 直線と点
bool isecLP(P a1, P a2, P b) {
  return abs(ccw(a1, a2, b)) != 1;  // return EQ(cross(a2-a1, b-a1), 0); と等価
}

// 直線と直線
bool isNotParallel(P a1, P a2, P b1, P b2) {
  return !isecLP(a2-a1, b2-b1, 0);
}

int main() {
  int n;
  cin >> n;
  rep(_,n) {
    VP ps(4);
    rep(i,4) {
      D x,y;
      cin >> x >> y;
      ps[i] = P(x,y);
    }
    cout << (isNotParallel(ps[0], ps[1], ps[2], ps[3]) ? "NO" : "YES") << endl;
  }
  return 0;
}