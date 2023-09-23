#include <cstdio>

int n, s, res;

void dfs(int prev, int sum, int deep);

int main(void)
{
	while (scanf("%d %d", &n, &s)){
		if (n == 0 && s == 0) break;
		
		res = 0;
		for (int i = 0; i < 10; i++){
			dfs(i, i, 1);
		}
		
		printf("%d\n", res);
	}
	
	return (0);
}

void dfs(int prev, int sum, int deep)
{
	if (sum == s && deep == n) {
		res++;
//		printf("%d %d\n", sum, deep);
		return;
	}
	if (s < sum || n < deep) return;
	
	for (int i = prev + 1; i < 10; i++){
		dfs(i, sum + i, deep + 1);
	}
	
	return;
}