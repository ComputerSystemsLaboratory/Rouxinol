#include <cstdio>
#include <iostream>

using namespace std;

int loadCheck(int N[], int n, int k, int P) {
	int i = 0;
	for (int j = 0; j < k; ++j) {
		int load = 0;
		while (load + N[i] <= P) {
			load += N[i];
			++i;
			if (i == n)
				return n;
		}
	}

	return i;
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
		if (loadCheck(N, n, k, mid) == n) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	cout << right << endl;

	return 0;
}