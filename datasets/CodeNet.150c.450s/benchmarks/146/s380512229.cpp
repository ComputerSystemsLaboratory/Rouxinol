#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <complex>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)

typedef double D;      // 座標値の型。doubleかlong doubleを想定
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;
const D EPS = (1e-10);    // 許容誤差。問題によって変える
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
  // return (conj(a)*b).Y;
  return (a.X*b.Y-a.Y*b.X);
}

bool is_parallel(P a1, P a2, P b1, P b2) {
  return EQ(cross(a1-a2, b1-b2), 0.0);
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    
    if (is_parallel(P(x1, y1), P(x2, y2), P(x3, y3), P(x4, y4))) {
      std::cout << "YES" << std::endl;
    }else {
      std::cout << "NO" << std::endl;
    }
  }

  
  return 0;
}