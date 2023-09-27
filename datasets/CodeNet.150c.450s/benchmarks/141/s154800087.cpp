#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
#include <complex>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef vector<int> vi;

// geometry library start

const double EPS = 1.0e-10;

class P {
public:
	double x, y;
	P() {}
	P(int x_, int y_) : x(x_), y(y_) {}
	P(double x_, double y_) : x(x_), y(y_) {}
	P(const P& p) : x(p.x), y(p.y) {}
	P operator+(const P& p) const { return P(x+p.x, y+p.y); } 
	P operator-(const P& p) const { return P(x-p.x, y-p.y); }
	P operator-() const { return P(-x, -y); }
	P operator*(double s) const { return P(x*s, y*s); }
	P operator/(double s) const { return P(x/s, y/s); }
	P& operator=(const P& p) { x=p.x; y=p.y; return (*this); }
	double dot(const P& p) const { return x*p.x + y*p.y; }
	double det(const P& p) const { return x*p.y - y*p.x; }
	double norm() const { return sqrt(x*x + y*y); }
	double norm2() const { return x*x + y*y; }
	P proj(const P& p) const { double k=det(p)/norm2(); return P(x*k, y*k); }
};

double tri(P a, P b, P c) { return (b - a).det(c - a); }
int sign(double r) { return r < -EPS ? -1 : r > EPS ? 1 : 0; }

class L {
public:
	P s, t;
	L() {}
	L(P s_, P t_) : s(s_), t(t_) {}
	L(const L& l) : s(l.s), t(l.t) {}
	L& operator=(const L& l) { s=l.s; t=l.t; return (*this); }
	double length() { return (s - t).norm(); }
	P vec() const { return t - s; }
	P proj(const P& p) { return s + vec().proj(p - s); }
	int iLL(const L& l) const {
		if(sign(vec().det(l.vec()))) return 1;
		if(sign(vec().det(l.s - s))) return 0;
		return -1;
	}
	bool iLS(const L& l) const { return sign(tri(s, t, l.s)) * sign(tri(s, t, l.t)) <= 0; } 
	bool iSS(const L& l) const { return iLS(l) && l.iLS(*this); }
	P pLL(const L& l) const { return s + vec() * (l.s - s).det(l.vec()) / vec().det(l.vec()); }
	double dLP(const P& p) const { return abs(tri(s, t, p)) / vec().norm(); }
	double dSP(const P& p) const {
		if(sign(vec().dot(p - s)) <= 0) return (p - s).norm();
		if(sign(vec().dot(p - t)) >= 0) return (p - t).norm();
		return dLP(p);
	}
};

class C {
public:
	P p;
	double r;
	C() {}
	C(P p_, double r_) : p(p_), r(r_) {}
	C(const C& c) : p(c.p), r(c.r) {}
	C& operator=(const C& c) { p=c.p; r=c.r; return (*this); }
};

// geometry library end

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF) {
		P p1(x1, y1);
		P p2(x2, y2);
		P p3(x3, y3);
		P  p(xp, yp);

		double d1 = (p1 - p).det(p2 - p);
		double d2 = (p2 - p).det(p3 - p);
		double d3 = (p3 - p).det(p1 - p);
		if(sign(d1) == sign(d2) && sign(d2) == sign(d3)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}