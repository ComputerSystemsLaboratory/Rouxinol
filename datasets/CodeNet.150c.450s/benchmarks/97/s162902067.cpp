#include <iostream>

using namespace std;

int main() {
	while (1) {
		int mp[410][410];
		int h = 0, w = 0, ni, di, N, l, r;

		for (int j = 0; j < 410; j++) {
			for (int k = 0; k < 410; k++) mp[j][k] = -1;
		}

		cin >> N;
		if (N == 0) break;
		mp[205][205] = 0;
		for (int i = 1; i < N; i++) {
			// cerr << i << endl;
			cin >> ni >> di;
			bool found = false;
			for (int j = 0; j < 410; j++) {
				// cerr << j << endl;
				for (int k = 0; k < 410; k++) {
					if (mp[j][k] == ni) {
						if (di == 0)
							k--;
						else if (di == 1)
							j++;
						else if (di == 2)
							k++;
						else
							j--;
						mp[j][k] = i;
						found = true;
						break;
					}
					if (found) break;
				}
			}
		}
		// cerr << "map made" << endl;
		l = -1;
		r = -1;

		for (int j = 0; j < 410; j++) {
			bool found = false;
			for (int k = 0; k < 410; k++) {
				if (mp[j][k] >= 0) {
					found = true;
					if (l < 0) {
						l = k;
						r = k + 1;
					} else {
						if (k < l)
							l = k;
						else if (k + 1 > r)
							r = k + 1;
					}
				}
			}
			if (found) {
				h++;
			}
		}

		printf("%d %d\n", w = r - l, h);
	}
}
