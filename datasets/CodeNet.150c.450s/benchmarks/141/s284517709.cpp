#include <iostream>
#include <vector>
#include <float.h>
using namespace std;
struct Point
{
	Point() :x(0.0), y(0.0) {}
	Point(double _x, double _y) : x(_x), y(_y) {}
	double x;
	double y;
};
bool HalfPlaneTest(const Point& P1, const Point& P2, const Point& P)
{
	return ((P2.y - P1.y) * P.x - (P2.x - P1.x) * P.y + (P2.x * P1.y - P1.x * P2.y)) > 0;
}
struct Triangle
{
	Triangle() : minX(DBL_MAX), maxX(DBL_MIN), minY(DBL_MAX), maxY(DBL_MIN) {}
	void add(double x, double y) {
		vP.push_back(Point(x, y));
		if (x < minX) minX = x;
		if (x > maxX) maxX = x;
		if (y < minY) minY = y;
		if (y > maxY) maxY = y;
		if (vP.size() == 3){
			if (HalfPlaneTest(vP[0], vP[1], vP[2]))
				swap(vP[1], vP[2]);
		}
	}
	bool IsInclude(double x, double y){
		if (x <= minX || x >= maxX || y <= minY || y >= maxY)
			return false;
		Point p(x, y);
		if (HalfPlaneTest(vP[0], vP[1], p)) return false;
		if (HalfPlaneTest(vP[1], vP[2], p)) return false;
		if (HalfPlaneTest(vP[2], vP[0], p)) return false;
		return true;
	}
	vector<Point> vP;
	double minX;
	double maxX;
	double minY;
	double maxY;
};

int main()
{
	double x1, y1, x2, y2, x3, y3, x, y;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y){
		Triangle triangle;
		triangle.add(x1, y1);
		triangle.add(x2, y2);
		triangle.add(x3, y3);
		if (triangle.IsInclude(x, y))	cout << "YES\n";
		else							cout << "NO\n";
	}
	return 0;
}