#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn = 10;
int flag = 0;
int a[maxn];
void dfs(int l, int r, int x) {
	if (x == 10) {
		flag = 1;
		return;
	}
	if (a[x] > l) dfs(a[x], r, x + 1);
	else if (a[x] > r) dfs(l, a[x], x + 1);
	if (flag == 1) return;

}


int main() {
	int t = 0;
	scanf("%d", &t);
	while (t--) {
		flag = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &a[i]);
		}
		dfs(0, 0, 0);
		if (flag == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}



