#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int D;
	scanf("%d", &D);
	int c[26], s[D][26], t[D], last[26];
	for (int i = 0; i < 26; ++i) scanf("%d", &c[i]);
	for (int i = 0; i < D; ++i) {
		for (int j = 0; j < 26; ++j) scanf("%d", &s[i][j]);
	}
	for (int i = 0; i < D; ++i) scanf("%d", &t[i]);
	fill_n(last, 26, -1);
	int ans = 0;
	for (int i = 0; i < D; ++i) {
		last[t[i] - 1] = i;
		ans += s[i][t[i] - 1];
		for (int j = 0; j < 26; ++j) ans -= c[j] * (i - last[j]);
		printf("%d\n", ans);
	}
	return 0;
}