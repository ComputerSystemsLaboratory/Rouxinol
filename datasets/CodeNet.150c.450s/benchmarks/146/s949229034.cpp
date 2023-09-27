#include <iostream>
using namespace std;
int main()
{
	double x[4], y[4];
	int n;
	cin >> n;
	while (n--) {
		for (int i = 0; i < 4; ++i) cin >> x[i] >> y[i];
		double A1 = y[1] - y[0];
		double B1 = x[0] - x[1];
		double C1 = A1 * x[0] + B1 * y[0];
		double A2 = y[3] - y[2];
		double B2 = x[2] - x[3];
		double C2 = A1 * x[2] + B1 * y[2];
		if (A1 * B2 - A2 * B1 == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}