#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#define dump(a) (cerr << (#a) << " = " << (a) << endl)
#define FOR(it,c) for(__typeof((c).begin())it=(c).begin(); it!=(c).end();++it)
#define RFOR(it,c) for(__typeof((c).rbegin())it=(c).rbegin(); it!=(c).rend();++it)
#define exist(c, v) (find((c).begin(), (c).end(), (v)) != (c).end())

template<class T> inline void chmax(T& a, const T& b) { if(b > a) a = b; }
template<class T> inline void chmin(T& a, const T& b) { if(b < a) a = b; }

template<typename T, typename U> ostream& operator<<(ostream& os, const pair<T, U>& p) {
	os << '(' << p.first << ", " << p.second << ')';
	return os;
}

template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
	copy(v.begin(), v.end(), ostream_iterator<T>(os, " "));
	return os;
}

const double EPS = 1e-9;

struct point {
	double x, y;
	point():x(0), y(0) {}
	point(double x, double y):x(x), y(y) {}
	point(const point& p):x(p.x), y(p.y) {}

	point operator+ (const point& p) const {
		return point(x + p.x, y + p.y);
	}

	point operator- (const point& p) const {
		return point(x - p.x, y - p.y);
	}

	point operator* (const double s) const {
		return point(x * s, y * s);
	}

	point operator* (const point& p) const {
		return point(x * p.x - y * p.y, x * p.y + y * p.x);
	}

	point operator/ (const double s) const {
		return point(x / s, y / s);
	}

	bool operator< (const point& p) const {
		return x + EPS < p.x || abs(x - p.x) < EPS && y + EPS < p.y;
	}

	bool operator== (const point& p) const {
		return abs(x - p.x) < EPS && abs(y - p.y) < EPS;
	}
};

inline double abs(const point& p) {
	return sqrt(p.x * p.x + p.y * p.y);
}

inline double norm(const point& p) {
	return p.x * p.x + p.y * p.y;
}

inline double dot(const point& l, const point& r) {
	return l.x * r.x + l.y * r.y;
}

inline double cross(const point& l, const point& r) {
	return l.x * r.y - l.y * r.x;
}

struct segment {
	point a, b;
	segment(point a, point b):a(a), b(b){}
};

typedef vector<point> polygon;

inline int ccw(const point& a, point b, point c) {
	b = b - a;
	c = c - a;
	const double tmp = cross(b, c);
	if(tmp > EPS) return 1; // ccw
	if(tmp < -EPS) return -1; // cw
	if(dot(b, c) < 0) return 2; // c, a, b 順に一直線上
	if(norm(b) < norm(c)) return -2; // a, b, c 順に一直線上
	return 0; //a, c, b 順で一直線上
}

inline bool intersect(const segment& s, const segment& t) {
	return ccw(s.a, s.b, t.a) * ccw(s.a, s.b, t.b) <= 0 &&
		ccw(t.a, t.b, s.a) * ccw(t.a, t.b, s.b) <= 0;
}

inline bool intersect(const segment& s, const point& p) {
	return ccw(s.a, s.b, p) == 0;
}

inline point crosspoint(const segment& s, const segment& t) {
	if(!intersect(s, t)) // 交点を持たない
		return s.a; // 用改善

	const double tmp = cross(s.b - s.a, t.b - t.a);
	if(abs(tmp) < EPS) { // 一直線上
		if(intersect(s, t.a)) return t.a;
		if(intersect(s, t.b)) return t.b;
		if(intersect(t, s.a)) return s.a;
		return s.b;
	}

	return t.a + (t.b - t.a) * cross(s.b - s.a, s.b - t.a) * (1.0 / tmp);
}

const double INF = 1000;

bool contain(const polygon& p, const point& a) {
	const int d1 = ccw(a, p[0], p[1]), d2 = ccw(a, p[1], p[2]), d3 = ccw(a, p[2], p[0]);
	return !(d1 * d2 == -1 || d2 * d3 == -1 || d3 * d1 == -1);
}


int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;

	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
				&x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) == 8) {
		polygon p;
		p.push_back(point(x1, y1));
		p.push_back(point(x2, y2));
		p.push_back(point(x3, y3));
		puts(contain(p, point(xp, yp)) ? "YES" : "NO");
	}


	return EXIT_SUCCESS;
}