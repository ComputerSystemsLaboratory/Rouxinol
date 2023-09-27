#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

struct Point2D {
  double x,y;

  Point2D operator-(Point2D &p);
  friend istream &operator>>(istream &is, Point2D &t);
  friend double cross(Point2D &a, Point2D &b);
};

Point2D Point2D::operator-(Point2D &p) {
  Point2D t;
  t.x = x - p.x;
  t.y = y - p.y;
  return t;
}

istream &operator>>(istream &is, Point2D &t) {
  is >> t.x >> t.y;
  return is;
}

double cross(Point2D &a, Point2D &b) {
  return a.x * b.y - a.y * b.x;
}

int judge(double t) {
  if(t>0.0) return 1;
  else if(t<0.0) return -1;
  else return 0;
}

int main() {
  vector<Point2D> t(3);
  Point2D p;
  
  while(cin >> t[0] >> t[1] >> t[2] >> p) {
    int key = 0;
        
    for(int i = 0; i < 3; i++) {
      Point2D m = t[i] - t[( i + 1 ) % 3];
      Point2D n = t[i] - p;
      key += judge(cross(m, n));
    }
    cout << ((abs(key) == 3) ? "YES" : "NO") << endl;
  }
  
  return 0;
}