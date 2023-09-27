#include <iostream>
using namespace std;

typedef struct {
  double x;
  double y;
} point;

int main() {
  point a, b, c, d;
  int n;
  cin >> n;
  while (n--) {
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    point p, q;
    p.x = b.x - a.x;
    p.y = b.y - a.y;
    q.x = d.x - c.x;
    q.y = d.y - c.y;

    if (-1e-10  < p.x * q.y - p.y * q.x && p.x * q.y - p.y * q.x < 1e-10)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}