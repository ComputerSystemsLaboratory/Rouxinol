#include <cstdio>
int dfs(int n, int s, int cnt, int sum, int num) {
	int res = 0;
	if (cnt==n&&sum==s) return 1;
	else if (cnt==n) return 0;
	if (num==10) return 0;
	res += dfs(n, s, cnt+1, sum+num, num+1);
	res += dfs(n, s, cnt, sum, num+1);
	return res;
}
int main() {
	int n, s;
	while (scanf("%d%d",&n,&s)) {
		if (n==0&&s==0) break;
		int res = dfs(n, s, 0, 0, 0);
		printf("%d\n",res);
	}
}