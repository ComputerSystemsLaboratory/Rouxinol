#include <iostream>
using namespace std;

class point{
public:
	double x;
	double y;
	point(double px, double py){
		x = px;
		y = py;
	}
};

double cross(point a, point b, point c, point d){
	return (b.x - a.x) * (d.y - c.y) - (b.y - a.y) * (d.x - c.x);
}

bool pn(double a){
	if (a > 0)
		return true;
	else
		return false;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		point a = point(x1, y1);
		point b = point(x2, y2);
		point c = point(x3, y3);
		point p = point(xp, yp);
		if ((pn(cross(p, a, b, a)) && pn(cross(p, b, c, b)) && pn(cross(p, c, a, c))) ||
			(pn(cross(p, a, b, a) * (-1)) && pn(cross(p, b, c, b) * (-1)) && pn(cross(p, c, a, c) * (-1)))){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
	return 0;
}