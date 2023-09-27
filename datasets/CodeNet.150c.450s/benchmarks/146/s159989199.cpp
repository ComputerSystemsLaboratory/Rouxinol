#include <iostream>
using namespace std;

double abs_(double a)
{
	if (a > 0) return a;
	else return -a;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x[4], y[4];
		double a, b;
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		a = (x[2] - x[3]) * (y[0] - y[1]);
		b = (x[0] - x[1]) * (y[2] - y[3]);
		bool h = abs_(a - b) < 0.0000000001;
		if (h)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}


	return 0;
}
