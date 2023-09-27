#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n;
	int a, b, c;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector< vector<int> > d(10, vector<int>(10, 100000));
		for (int i = 0; i < 10; i++) {
			d[i][i] = 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
		}
		for (int k = 0; k < 10; k++) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
				}
			}
		}
		int hyou[10] = {0};
		int p, q;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (i == j) {
					continue;
				} else if (d[i][j] >= 100000) {
					continue;
				}
				hyou[i] += d[i][j];
			}
		}
		p = 0;
		q = hyou[0];
		for (int i = 1; i < 10; i++) {
			if (hyou[i] == 0) {
				break;
			}
			if (q > hyou[i]) {
				p = i;
				q = hyou[i];
			}
		}
		cout << p << ' ' << q << endl;
	}
	return 0;
}