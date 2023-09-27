#include <iostream>

#define DEBT 100000

using namespace std;

int main() {
	int		n;
	double	tmp;
	int		debt = DEBT;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		debt *= 1.05;
		tmp = debt / 1000.0;
		if ((debt > (int)tmp * 1000)) {
			debt = (int)tmp * 1000 + 1000;
		}
		else {
			debt = (int)tmp * 1000;
		}
	}
	cout << debt << endl;
}
