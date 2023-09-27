#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	double x, y, det;
	vector<double> a(3);
	vector<double> b(3);
	while(1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < 3; i++)
		{
			cin >> b[i];
		}
		if (cin.eof())
		{
			break;
		}
		det = a[0] * b[1] - a[1] * b[0];
		x = (b[1] * a[2] - b[2] * a[1]) / det + 0;
		y = (-a[2] * b[0] + a[0] * b[2]) / det + 0;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
}
