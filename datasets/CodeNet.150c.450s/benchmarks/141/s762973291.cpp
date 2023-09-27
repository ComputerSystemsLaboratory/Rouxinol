#include <iostream>

#define SIZE 3

using namespace std;

int main() {
	float x[SIZE], y[SIZE], xp, yp, a, b, c;

	while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp) {
		a = (xp - x[0]) * (yp - y[1]) - (yp - y[0]) * (xp - x[1]);
		b = (xp - x[1]) * (yp - y[2]) - (yp - y[1]) * (xp - x[2]);
		c = (xp - x[2]) * (yp - y[0]) - (yp - y[2]) * (xp - x[0]);

		if ((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c < 0)) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}