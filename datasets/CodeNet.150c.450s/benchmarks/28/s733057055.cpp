#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
using namespace std;
const int num = 100000;
int n, k, w[num];
inline int getp(int p) {
	int  cnt = 0, sum = 0, i = 0, num = 1;
	while (num <= k && i != n) {
		if (sum + w[i] <= p) {
			sum += w[i];
			cnt++;
			i++;
		}
		else {
			num++;
			sum = 0;
		}
	}
	return  cnt;
}
inline int  get(int l, int r) {
	while (l != r - 1) {
		int m = (l + r) / 2;
		if (getp(m) >= n) {
			r = m;
		}
		else { l = m; }
	}
	return r;
}
int main() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &w[i]);
	}

	int left = 0, right = 1000000000;
	int ans = get(left, right);
	cout << ans << endl;
	return 0;
}