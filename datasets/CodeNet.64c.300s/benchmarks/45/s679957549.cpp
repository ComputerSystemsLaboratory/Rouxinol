#include <iostream>
using namespace std;

int n, m, p;
int x[100];

int main() {
	while (cin >> n >> m >> p) {
		if (!n) break;
		for (int i = 0; i < n; i++) cin >> x[i];
		m--;
		
		int sumX = 0;
		for (int i = 0; i < n; i++) sumX += x[i];
		
		if (x[m] == 0) {
			cout << 0 << endl;
		}
		else {
			cout << sumX * (100 - p) * 100 / (100 * x[m]) << endl;
		}
	}
	return 0;
}