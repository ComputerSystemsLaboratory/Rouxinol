#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main () {
	int n;
	while (scanf("%d", &n), n) {
		int recode[24 * 60 * 60];
		memset(recode, 0, sizeof(recode));
		for (int i = 0; i < n; i++) {
			int h, m, s;
			scanf("%d:%d:%d", &h, &m, &s);
			recode[h * 60 * 60 + m * 60 + s] += 1;
			scanf("%d:%d:%d", &h, &m, &s);
			recode[h * 60 * 60 + m * 60 + s] -= 1;
		}
		int current = 0, result = 0;
		for (int i = 0; i < 24 * 60 * 60; i++) {
			current += recode[i];
			result = max(current, result);
		}
		printf("%d\n", result);
	}
	return 0;
}