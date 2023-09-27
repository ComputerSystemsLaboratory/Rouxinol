#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <complex>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)

typedef double D;
typedef complex<D> P;
typedef pair<P, P> L;
typedef vector<P> VP;
const D EPS = 1e-9;
#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)

D dot(P a, P b) {
  return (conj(a)*b).X;
}

D cross(P a, P b) {
  return (conj(a)*b).Y;
}

int ccw(P a, P b, P c) {
  b -= a; c -= a;
  if (cross(b,c) > EPS) return +1;
  if (cross(b,c) < -EPS) return -1;
  if (dot(b,c) < -EPS) return +2;
  if (norm(b) < norm(c)) return -2;
  return 0;
}

int main() {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    P a[3], p;
    a[0] = P(x1, y1);
    a[1] = P(x2, y2);
    a[2] = P(x3, y3);
    p = P(xp, yp);
    bool ok = true;
    for (int i = 0; i < 3; i++) {
      if (ccw(a[i], a[(i+1)%3], a[(i+2)%3]) != ccw(a[(i+1)%3], a[(i+2)%3], p)) {
	ok = false;
	break;
      }
    }
    if (ok) {
      std::cout << "YES" << std::endl;
    }else {
      std::cout << "NO" << std::endl;
    }
  }
}