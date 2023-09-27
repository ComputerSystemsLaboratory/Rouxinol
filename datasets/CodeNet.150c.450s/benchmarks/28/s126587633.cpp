#include <iostream>
#include <cmath>

using namespace std;

int n, k;
int *w, maxw = 0, sumw = 0;

bool load(int p) {
	int truck = 1;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum + w[i] > p) {
			sum = w[i];
			truck++;
		} else {
			sum += w[i];
		}
	}
	return truck <= k;
}

int main() {
	cin >> n >> k;
	w = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		maxw = max(maxw, w[i]);
		sumw += w[i];
	}
	int l = maxw, r = sumw, mid, ans;
	while (l <= r) {
		mid = (l + r) / 2;
		if (load(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << ans << endl;
	delete[] w;
	return 0;
}