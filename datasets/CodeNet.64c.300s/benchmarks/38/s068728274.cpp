#include <cstdio>
#include <algorithm>
using namespace std;

int a[10];

bool dfs(int k, int l, int r) {
	if (k == 10)
		return true;
	if (a[k] > l && dfs(k + 1, a[k], r))
		return true;
	if (a[k] > r && dfs(k + 1, l, a[k]))
		return true;
	return false;
}

int main() {
	int N;
	scanf("%d", &N);
	for (; N > 0; N--) {
		for (int i = 0; i < 10; i++)
			scanf("%d", &a[i]);
		printf(dfs(0, 0, 0) ? "YES\n" : "NO\n");
	}
}