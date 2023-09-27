#include <bits/stdc++.h>
using namespace std;

#define N 86400
int main() {
	int n, time[N], max, num, h, m, s;
	while (cin >> n, n) {
		max = 0; num = 0;
		for (int i = 0; i < N; ++i) time[i] = 0;
		for (int i = 0; i < n; ++i) {
			scanf("%02d:%02d:%02d", &h, &m, &s);
			++time[h * 3600 + m * 60 + s];
			scanf("%02d:%02d:%02d", &h, &m, &s);
			--time[h * 3600 + m * 60 + s];
		}
		for (int i = 0; i < N; ++i) {
			num += time[i];
			if (max < num) max = num;
		}
		cout << max << endl;
	}
	return 0;
}
