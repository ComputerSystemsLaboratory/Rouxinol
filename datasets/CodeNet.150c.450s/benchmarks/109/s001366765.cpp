#include <stdio.h>
#include <algorithm>
using namespace std;
int r[86401], n, h1, m1, s1, h2, m2, s2;
int main() {
	while (~scanf("%d", &n)) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%02d:%02d:%02d %02d:%02d:%02d", &h1, &m1, &s1, &h2, &m2, &s2);
			r[h1 * 3600 + m1 * 60 + s1]++;
			r[h2 * 3600 + m2 * 60 + s2]--;
		}
		int ret = 0, sum = 0;
		for (int i = 0; i < 86400; i++) {
			sum += r[i]; r[i] = 0;
			ret = max(ret, sum);
		}
		printf("%d\n", ret);
	}
	return 0;
}