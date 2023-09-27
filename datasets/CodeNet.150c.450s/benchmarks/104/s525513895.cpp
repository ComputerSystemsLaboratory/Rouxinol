#include <bits/stdc++.h>

using namespace std;

int main() {
	int w, n;
	cin >> w >> n;

	int kuji[n], a[n], b[n];
	for (int i = 1; i <= w; i++) kuji[i] = i;

	for (int i = 0; i < n; ++i) {
		scanf("%d, %d", &a[i], &b[i]);
		int tmp = kuji[a[i]];
		kuji[a[i]] = kuji[b[i]];
		kuji[b[i]] = tmp;
	}

	for (int i = 1; i <= w; ++i) {
		cout << kuji[i] << endl;
	}
}