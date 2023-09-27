#include <iostream>

using namespace std;

int wh[1500001];
int ww[1500001];

int main() {
	int n, m;

	while (cin >> n >> m && (n > 0 && m > 0)) {
		int h[1500], w[1500];

		for (int i = 0; i < n; i++) {
			cin >> h[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> w[i];
		}

		fill_n(wh, 1500001, 0);
		fill_n(ww, 1500001, 0);

		for (int i = 0; i < n; i++) {
			int temp = 0;
			for (int j = i; j < n; j++) {
				temp += h[j];
				wh[temp]++;
			}
		}

		for (int i = 0; i < m; i++) {
			int temp = 0;
			for (int j = i; j < m; j++) {
				temp += w[j];
				ww[temp]++;
			}
		}

		int count = 0;

		for (int i = 0; i < 1500001; i++) {
			count += (wh[i] * ww[i]);
		}

		cout << count << endl;
	}

	return 0;
}