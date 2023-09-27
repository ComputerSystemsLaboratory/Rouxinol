#include<bits/stdc++.h>
#define EPS (1e-10)
#define equals(a,b)(fabs((a)-(b))<EPS)
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

struct Point {
	double x, y;
	Point(double x = 0, double y = 0) :x(x), y(y) {}
	Point operator*(double a) { return Point(a*x, a*y); }
	Point operator-(Point p) { return Point(x - p.x, y - p.y); }
};
struct Segment {
	Point p1, p2;
};
double cross(Point a, Point b) {
	return a.x*b.y - a.y*b.x;
}
bool isPrallel(Segment s1, Segment s2) {
	return equals(cross(s1.p2 - s1.p1, s2.p2 - s2.p1), 0.0);
}
int main() {
	int n; cin >> n;
	rep(i, n) {
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		Segment s1{ {x1,y1},{x2,y2} };
		Segment s2{ {x3,y3},{x4,y4} };
		puts(isPrallel(s1, s2) ? "YES" : "NO");
	}
}