#include <iostream>
#include <cmath>

using namespace std;

typedef struct _Point {
	double x;
	double y;
} Point;
typedef Point Vector;

Point subPoint(Point a, Point b) {
	Point ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}

bool apint(Point a, Point b, Point c, Point p) {
	Vector ab = subPoint(b, a);
	Vector bp = subPoint(p, b);
	Vector bc = subPoint(c, b);
	Vector cp = subPoint(p, c);
	Vector ca = subPoint(a, c);
	Vector ap = subPoint(p, a);
	double c1 = ab.x * bp.y - ab.y * bp.x;
	double c2 = bc.x * cp.y - bc.y * cp.x;
	double c3 = ca.x * ap.y - ca.y * ap.x;
	if( ( c1 > 0 && c2 > 0 && c3 > 0 ) || ( c1 < 0 && c2 < 0 && c3 < 0 ) )
		return true;
	return false;
}

int main() {
	Point a, b, c, p;
	while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> p.x >> p.y) {
		if (apint(a, b, c, p) == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}