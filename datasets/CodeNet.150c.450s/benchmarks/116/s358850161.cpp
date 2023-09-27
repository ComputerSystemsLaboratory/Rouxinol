#include <cstdio>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int n, m, a[100009];
int main() {
	while (scanf("%d%d", &n, &m), n) {
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int sum = 0;
		for (int i = 0; i < m; i++) sum += a[i];
		int ret = sum;
		for (int i = m; i < n; i++) {
			sum += a[i] - a[i - m];
			ret = max(ret, sum);
		}
		printf("%d\n", ret);
	}
	return 0;
}