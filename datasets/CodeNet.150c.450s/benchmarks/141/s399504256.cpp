#include <iostream>
#include <cmath>

using namespace std;

#define v2d Vector2D

struct Vector2D	{
	double x, y;
};

Vector2D sub_vector2D(const Vector2D& a, const Vector2D& b) {
	Vector2D ret;
	ret.x = a.x - b.x; ret.y = a.y - b.y;
	return ret;
}

double out_mul(v2d a, v2d b) {
	return a.x*b.y - a.y*b.x;
}

bool point_in_triangle_2D(v2d a, v2d b, v2d c, v2d p) {
	v2d ab = sub_vector2D(b, a);
	v2d bp = sub_vector2D(p, b);
	
	v2d bc = sub_vector2D(c, b);
	v2d cp = sub_vector2D(p, c);
	
	v2d ca = sub_vector2D(a, c);
	v2d ap = sub_vector2D(p, a);
	
	double c1 = out_mul(ab, bp), c2 = out_mul(bc, cp), c3 = out_mul(ca, ap);
	
	if ( (c1>0 && c2>0 && c3>0) || (c1<0 && c2<0 && c3<0) ) return true;
	return false;
}

int main() {
	v2d a, b, c, p;
	
	while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> p.x >> p.y) {
		if (point_in_triangle_2D(a, b, c, p)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}