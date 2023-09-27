#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n, i;
	int y, m, d, res;
	int a[3] = { 0,395,200 }, b[2] = { 0,19 };

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> y >> m >> d;
		y; m; d;
		res = (999 - y) / 3 * 590 + a[y % 3];
		if (y % 3 == 0) {
			res += (10 - m) * 20;
		}
		else {
			res += (10 - m) / 2 * 39 + b[m % 2];
		}
		res += 20 - d + !((y % 3 != 0) && (m % 2 == 0));
		cout << res << endl;
	}

	return 0;
}