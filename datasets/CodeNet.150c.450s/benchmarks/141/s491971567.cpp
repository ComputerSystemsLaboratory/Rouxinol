#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

struct vector2D
{
	double x, y;

	vector2D(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
};

vector2D vec(double ax, double ay, double bx, double by)
{
	return vector2D(bx - ax, by - ay);
}

double outer(vector2D a, vector2D b)
{
	return a.x * b.y - a.y * b.x;
}

int main()
{
	vector<double> x(3);
	vector<double> y(3);
	double xp, yp;
	for (;cin >> x.at(0) >> y.at(0) >> x.at(1) >> y.at(1) >> x.at(2) >> y.at(2) >> xp >> yp;)
	{
		vector2D ab = vec(x.at(1), y.at(1), x.at(0), y.at(0));
		vector2D bc = vec(x.at(2), y.at(2), x.at(1), y.at(1));
		vector2D ca = vec(x.at(0), y.at(0), x.at(2), y.at(2));

		vector2D ap = vec(xp, yp, x.at(0), y.at(0));
		vector2D bp = vec(xp, yp, x.at(1), y.at(1));
		vector2D cp = vec(xp, yp, x.at(2), y.at(2));


		if ((outer(ab, bp) >= 0 && outer(bc, cp) >= 0 && outer(ca, ap) >= 0) || (outer(ab, bp) <= 0 && outer(bc, cp) <= 0 && outer(ca, ap) <= 0))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
