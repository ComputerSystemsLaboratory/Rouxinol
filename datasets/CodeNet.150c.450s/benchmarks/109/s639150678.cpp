#include <cstdio>
#include <algorithm>

using namespace std;

int second(int h, int m, int s) {
	return h * 3600 + m * 60 + s;
}

int main() {
	int n;
	int train[24 * 60 * 60];
	const int trainNum = sizeof train / sizeof train[0];
	while (true) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (int i = 0; i < trainNum; i++) {
			train[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			int h1, m1, s1, h2, m2, s2;
			scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
			int tmp1 = second(h1, m1, s1);
			int tmp2 = second(h2, m2, s2);
			train[tmp1]++;
			train[tmp2]--;
		}
		int a = 0;
		int ans = 0;
		for (int i = 0; i < trainNum; i++) {
			a += train[i];
			ans = max(a, ans);
		}
		printf("%d\n", ans);

	}

	return 0;
}