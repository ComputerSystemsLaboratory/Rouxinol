#include<iostream>
#include<algorithm>
using namespace std;

int allocate(int n, int w[], int k, int p) {
	int load = 0;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (load + w[i] > p) {
			cnt++;
			if (cnt > k) return -1;
			load = 0;
		}
		load += w[i];
	}
	return 0;
}

int main() {
	int n, k, w[100000], m, s=0;
	cin >> n;
	cin >> k;
	m = (1 << 30) * -1;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		m = max(m, w[i]);
		s += w[i];
	}

	int i = m;
	int j = s;
	while (i <= j) {
		int guess = i + (j - i) / 2;
		if (allocate(n, w, k, guess) < 0) {
			i = guess + 1;
		}
		else {
			j = guess - 1;
		}
	}
	cout << i << endl;
}
