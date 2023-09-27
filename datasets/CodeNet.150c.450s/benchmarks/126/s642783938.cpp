#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b && a != 0) {
		int m, x, y, f[17][17] = { 0 };
		cin >> m;
		f[1][1] = 1;
		while (m--) {
			cin >> x >> y;
			f[y][x] = -1;
		}
		for (int i = 1; i <= b; ++i) {
			for (int j = 1; j <= a; ++j) {
				if (f[i][j] == -1)
					continue;
				if (i - 1 > 0 && f[i - 1][j] != -1)
					f[i][j] += f[i - 1][j];
				if (j - 1 > 0 && f[i][j - 1] != -1)
					f[i][j] += f[i][j - 1];
			}
		}
		cout << f[b][a] << endl;
	}

	return 0;
}