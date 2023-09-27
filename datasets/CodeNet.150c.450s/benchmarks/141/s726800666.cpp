#include<iostream>

using namespace std;

struct Point{
  double x, y;
  Point(){ x = 0; y = 0; }
  Point(double x_, double y_){ x = x_; y = y_; }
};

bool rotation_direction(const Point& p1, const Point& p2, const Point& p3){
  double x = p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y) + p3.x*(p1.y-p2.y);
  return (x > 0);
}

bool solve(const Point& a, const Point& b, const Point& c, const Point& p){
  bool flag = rotation_direction(a, b, c);
  return (flag == rotation_direction(p, a, b) &&
	  flag == rotation_direction(p, b, c) &&
	  flag == rotation_direction(p, c, a));
}

int main(){
  Point a, b, c, p;
  while(cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> p.x >> p.y){
    if(solve(a, b, c, p)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}