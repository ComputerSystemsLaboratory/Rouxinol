#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class vec2d {
public:
  double x,y;
  void set(double x=0.0,double y=0.0) {
    this->x = x;
    this->y = y;
  }
};
double cross(vec2d A,vec2d B) {
  return (A.x*B.y - B.x*A.y);
}
bool is_paralles(vec2d A,vec2d B) {
  if(fabs(cross(A,B)) < 1e-12) return true;
  return false;
}

int main() {
  int n; cin >> n;
  for(int i=0;i<n;i++) {
    vec2d AB,CD;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    AB.set(x2-x1,y2-y1);
    CD.set(x4-x3,y4-y3);
    if(is_paralles(AB,CD)) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}