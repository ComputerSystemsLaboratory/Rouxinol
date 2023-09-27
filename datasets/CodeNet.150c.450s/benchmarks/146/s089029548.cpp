#include <iostream>

using namespace std;

int main()
{
	int i, n;
	double x[4], y[4];
	cin >> n;
	
	for (i=0; i<n; i++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		if (x[0] == x[1]) {
			if (x[2] == x[3]) cout << "YES" << endl;
			else cout << "NO" << endl;
		} else {
			if ((y[0] - y[1]) / (x[0] - x[1]) == (y[2] - y[3]) / (x[2] - x[3])) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}