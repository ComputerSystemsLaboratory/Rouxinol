#include<cstdio>
using namespace std;

struct Vec2 {
  double x, y;
  Vec2(double x_, double y_) : x(x_), y(y_) {}
};

bool in_the_triangle(const Vec2& a, const Vec2& b, const Vec2& c, const Vec2& p) {
  Vec2 aa(a.x-p.x, a.y-p.y);
  Vec2 bb(b.x-p.x, b.y-p.y);
  Vec2 cc(c.x-p.x, c.y-p.y);
  double k = aa.x*bb.y - bb.x*aa.y;
  double l = bb.x*cc.y - cc.x*bb.y;
  double m = cc.x*aa.y - aa.x*cc.y;
  return (k * l > 0 && k * m > 0);
}

int main() {
  double a,b,c,d,e,f,g,h;
  while (8==scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h)) {
    puts(in_the_triangle(Vec2(a,b),Vec2(c,d),Vec2(e,f),Vec2(g,h)) ? "YES" : "NO");
  }
  return 0;
}