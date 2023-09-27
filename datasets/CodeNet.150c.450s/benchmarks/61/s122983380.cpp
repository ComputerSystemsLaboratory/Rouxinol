#include <algorithm>
#include <numeric>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (!n) break;
		int d[110];
		for (int i = 0; i < n; i++) {
			cin >> d[i];
		}
		int u = 0;
		int i = 0;
		for (i = 0; i < 10001; i++) {
			if (d[u] == x) {
				u++;
				if (u == n) break;
			}
			x = (a*x+b)%c;
		}
		if (i == 10001) {
			printf("-1\n");
		} else {
			printf("%d\n", i);
		}
	}
}