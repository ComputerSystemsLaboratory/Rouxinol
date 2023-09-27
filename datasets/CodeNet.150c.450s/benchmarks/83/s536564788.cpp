#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define INF (1<<29)

int main() {
	int N, W, ans = 0;
	cin >> N >> W;
	int v[110], w[110], t[10001];
	for (int i = 0; i < N; i++) {
		cin >> v[i] >> w[i];
	}
	for (int i = 0; i <= W; i++) t[i] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = W - w[i]; j >= 0; j--) {
			t[j + w[i]] = max(t[j + w[i]], t[j] + v[i]);
			ans = max(ans, t[j + w[i]]);
		}
	}
	printf("%d\n", ans);

	return 0;
}