#include <iostream>
#include <math.h>
using namespace std;

bool IsEqual(double a, double b)
{
	if (fabs(a - b) < 0.0000001) return true;
	return false;
}

int main()
{
	int n;
	double x[4];
	double y[4];

	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> x[i] >> y[i];
		}

		double dx1 = x[1] - x[0];
		double dy1 = y[1] - y[0];
		double dx2 = x[3] - x[2];
		double dy2 = y[3] - y[2];

		if (IsEqual(dx1, 0) && IsEqual(dx2, 0)) cout << "YES" << endl;
		else if (IsEqual(dx1, 0) || IsEqual(dx2, 0)) cout << "NO" << endl;
		else if (IsEqual(dy1 / dx1, dy2 / dx2)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}