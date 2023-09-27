
#include<cstdio>
using namespace std;
const static int MAX_N = 12;
static int num[12], left[12], right[12];
static bool ret = false;
void dfs(int cur, int n, int num[], int left[],int l, int right[],int r) {
	if (cur == n) {
		for (int i = 0; i < l-1; i++) {
			if (left[i] > left[i + 1])
				return;
		}
		for (int j = 0; j < r - 1; j++) {
			if (right[j] > right[j + 1])
				return;
		}
		ret = true;
	} else {
		left[l] = num[cur];
		dfs(cur + 1, n, num, left, l + 1, right, r);
		right[r] = num[cur];
		dfs(cur + 1, n, num,left, l, right, r + 1);
	}
}

int main() {
	int n;
	for (scanf("%d ", &n); n; n--) {
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
		}
		dfs(0, 10, num, left, 0, right, 0);
		if (ret)printf("YES\n");
		else printf("NO\n");
		ret = false;
	}
}