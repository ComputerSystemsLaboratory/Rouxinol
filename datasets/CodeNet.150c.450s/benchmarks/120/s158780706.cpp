#include <vector>
#include <iostream>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int H, W, x, popcount[1024];
int main() {
	for (int i = 0; i < 1024; i++) {
		for (int j = 0; j < 10; j++) {
			if (i & (1 << j)) popcount[i]++;
		}
	}
	while (scanf("%d%d", &H, &W), H) {
		vector<int> bit(W);
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				scanf("%d", &x);
				bit[j] |= x << i;
			}
		}
		vector<int> cnt(1 << H);
		for (int i = 0; i < W; i++) cnt[bit[i]]++;
		int ret = 0;
		for (int i = 0; i < 1 << H; i++) {
			vector<int> f(1 << H);
			for (int j = 0; j < 1 << H; j++) {
				f[j] = popcount[i ^ j];
				f[j] = max(f[j], H - f[j]);
			}
			int res = 0;
			for (int j = 0; j < 1 << H; j++) res += cnt[j] * f[j];
			ret = max(ret, res);
		}
		printf("%d\n", ret);
	}
	return 0;
}