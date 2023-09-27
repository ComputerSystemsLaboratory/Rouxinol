#include <cstdio>
#include <iostream>

using namespace std;

int mount(int P, int n, int k, int N[]) {
	int cnt = 0;
	for (int i = 0; i < k; ++i) {
		int w = 0;
		while (w + N[cnt] <= P) {
			w += N[cnt++];
			if (cnt == n)
				return n;
		}
	}
	return cnt;
}

int main() {

	int n, k;
	scanf("%d %d", &n, &k);

	int N[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &N[i]);
	}

	int left = 0;
	int right = 1000000000;
	while (left < right) {
		int mid = (left + right) / 2;
		if (mount(mid, n, k, N) == n) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	cout << right << endl;

	return 0;
}