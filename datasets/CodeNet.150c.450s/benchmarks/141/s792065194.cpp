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
double dot(Point a, Point b) {
	return a.x*b.x + a.y*b.y;
}
bool isPrallel(Segment s1, Segment s2) {
	return equals(cross(s1.p2 - s1.p1, s2.p2 - s2.p1), 0.0);
}
bool isOrthogonal(Segment s1, Segment s2) {
	return equals(dot(s1.p2 - s1.p1, s2.p2 - s2.p1), 0.0);
}
typedef vector<Point>Polygon;
int contains(Polygon g, Point p) {
	int n = g.size();
	bool x = false;
	rep(i, n) {
		Point a = g[i] - p, b = g[(i + 1) % n] - p;
		if (abs(cross(a, b)) < EPS&&dot(a, b) < EPS)return 1;
		if (a.y > b.y)swap(a, b);
		if (a.y < EPS&&EPS<b.y&&cross(a, b)>EPS)x = !x;
	}
	return x ? 2 : 0;
}
int main() {
	while (1) {
		Polygon g;
		double x, y;
		rep(i, 3) {
			if (!(cin >> x))return 0;
			cin >> y;
			g.push_back(Point(x, y));
		}
		cin >> x >> y;
		if (contains(g, Point( x,y )) == 2)puts("YES");
		else puts("NO");
	}
}