#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

template<class T> void debug(T begin, T end){ for(T i = begin; i != end; ++i) cerr<<*i<<" "; cerr<<endl; }
inline bool valid(int x, int y, int W, int H){ return (x >= 0 && y >= 0 && x < W && y < H); }

typedef long long ll;
const int INF = 100000000;
const double EPS = 1e-8;
const int MOD = 1000000007;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int sign(double r){ return (r < -EPS) ? -1 : (r > EPS) ? 1 : 0; }
bool eq(double a, double b){ return abs(b - a) < EPS; }

struct Point{
  double x, y;
  Point() {}
  Point(double x, double y) : x(x), y(y) {}
  Point operator+(const Point& b) const { return Point(x + b.x, y + b.y); }
  Point operator-(const Point& b) const { return Point(x - b.x, y - b.y); }
  Point operator*(const double b) const { return Point(x * b, y * b); }
  Point operator*(const Point& b) const { return Point(x * b.x - y * b.y, x * b.y + y * b.x); }
  Point operator/(const double b) const { return Point(x / b, y / b); }
  bool operator< (const Point& b) const { return x != b.x ? x < b.x : y < b.y; }
  bool operator==(const Point &b) const { return eq(x, b.x) && eq(y, b.y); }
  double dot(const Point &b){ return x * b.x + y * b.y; }
  double cross(const Point &b){ return x * b.y - y * b.x; }
  double norm(){ return x * x + y * y; }
  double arg(){ return atan2(x, y); }
  double abs(){ return sqrt(norm()); }
  Point rotate(double theta){ return Point(cos(theta) * x - sin(theta) * y, sin(theta) * x + cos(theta) * y); }
  Point rotate90(){ return Point(-y, x); }
};

ostream& operator<<(ostream& os, Point& p){ return os<<"("<<p.x<<","<<p.y<<")"; }
istream& operator>>(istream& is, Point& a){ return is>>a.x>>a.y; }
Point polor(double rho, double theta){ return Point(rho * cos(theta), rho * sin(theta)); }

struct Line : public vector<Point> {
  Line(const Point &a, const Point &b) {
    push_back(a); push_back(b);
  }
  Point vector(){
    return back() - front();
  }
};
typedef vector<Point> Polygon;
struct Circle {
  Point p; double r;
  Circle(const Point &p, double r) : p(p), r(r) { }
};

int main(){
  int N;
  cin>>N;
  while(N--){
    Point p[4];
    REP(i, 4) cin>>p[i];
    Line l1(p[0], p[1]);
    Line l2(p[2], p[3]);
    if(eq(l1.vector().cross(l2.vector()), 0)){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}