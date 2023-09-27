#include <iostream>
using namespace std;

int sum(int y, int m, int d) {
	int t = 0;
	t += (y - 1) * 195 + (y - 1) / 3 * 5;
	t += (m - 1) * 19 + m / 2;
	if (y % 3 == 0) t += (m - 1) / 2;
	t += d - 1;
	return t;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int y, m, d;
		cin >> y >> m >> d;
		
		cout << sum(1000, 1, 1) - sum(y, m, d) << endl;
	}
	return 0;
}