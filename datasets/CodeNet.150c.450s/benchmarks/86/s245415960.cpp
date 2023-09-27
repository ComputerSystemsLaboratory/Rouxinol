#include <iostream>

using namespace std;

int main() {
	int n, m, p;
	while ( cin >> n >> m >> p, n || m || p ) {
		--m;
		int X[100], sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> X[i];
			sum += X[i];
		}
		sum *= 100-p;
		cout << (X[m] == 0 ? 0 : sum / X[m]) << endl;
	}
}