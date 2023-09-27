#include <iostream>

using namespace std;

int main() {
	int n, m, p;
	while (cin >> n >> m >> p) {
		if (n == 0 && m == 0 && p == 0) {
			break;
		}
		int t[110] = {0};
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> t[i];
			sum += t[i];
		}
		sum *= (100-p);
		if (t[m-1] == 0) {
			cout << 0 << endl;
		} else {
			cout << sum/t[m-1] << endl;
		}
	}
	return 0;
}