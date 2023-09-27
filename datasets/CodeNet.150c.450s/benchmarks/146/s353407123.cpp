#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	setprecision(5);
	long double x[4], y[4],d1,d2,d3,d4;
	int ans[100];
	cin >> n;
	for (int a = 0; a < n; a++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		if (x[0] > x[1]) {
			d1 = x[0] - x[1];
			d3 = y[0] - y[1];
		}
		else {
			d1 = x[1] - x[0];
			d3 = y[1] - y[0];
		}
		if (x[2] > x[3]) {
			d2 = x[2] - x[3];
			d4 = y[2] - y[3];
		}
		else {
			d2 = x[3] - x[2];
			d4 = y[3] - y[2];
		}

		if (d3 / d1 == d4 / d2)
			ans[a] = 0;
		else
			ans[a] = 1;
	}
	for (int b = 0; b < n; b++) {
		if (ans[b] == 0)
			cout << "YES" << endl;
		else if (ans[b] == 1)
			cout << "NO" << endl;
	}
}