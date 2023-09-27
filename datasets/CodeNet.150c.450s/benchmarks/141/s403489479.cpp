#include<iostream>
#include<vector>
using namespace std;
struct Point { long double px, py; };
Point Minus(Point a, Point b) { Point C; C.px = a.px - b.px; C.py = a.py - b.py; return C; }
long double dot(const Point& a, const Point& b) { return a.px * b.px + a.py * b.py; }
long double crs(const Point& a, const Point& b) { return a.px * b.py - a.py * b.px; }
int contain(vector<Point> v, Point p) {
	bool in = false;
	for (int i = 0; i < v.size(); ++i) {
		Point a = Minus(v[i], p), b = Minus(v[(i + 1) % v.size()], p);
		if (a.py > b.py) swap(a, b);
		if (a.py <= 0 && 0 < b.py)
			if (crs(a, b) < 0) in = !in;
		if (crs(a, b) == 0 && dot(a, b) <= 0) return 1;
	}
	return in ? 2 : 0;
}
int main() {
	vector<Point>vec;
	Point P;
	while (cin >> P.px >> P.py) {
		vec.clear();
		vec.push_back(P);
		for (int j = 0; j < 2; j++) { cin >> P.px >> P.py; vec.push_back(P); }
		cin >> P.px >> P.py;
		int v = contain(vec, P);
		if (v == 2) { cout << "YES" << endl; }
		else { cout << "NO" << endl; }
	}
}