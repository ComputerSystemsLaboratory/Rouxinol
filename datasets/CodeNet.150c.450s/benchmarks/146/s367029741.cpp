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

struct Vector2D
{
	float x, y;

	Vector2D()
	{

	}

	Vector2D(Vector2D v0, Vector2D v1)
	{
		this->x = v1.x - v0.x;
		this->y = v1.y - v0.y;
	}
};

float outer(Vector2D a, Vector2D b)
{
	return a.x * b.y - a.y * b.x;
}

int main()
{
	int n;
	for (cin >> n; n--;)
	{
		vector<Vector2D> p(4);

		for (int i = 0; i < 4; i++)
		{
			cin >> p.at(i).x >> p.at(i).y;
		}

		Vector2D ab = Vector2D(p.at(0), p.at(1));
		Vector2D cd = Vector2D(p.at(2), p.at(3));

		if (outer(ab, cd) == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
