#include <stdio.h>

int max;
int s;

int solve(int n, int m, int l)
{
	if (m == max){
		if (n == 0){
			return (1);
		}
		
		return (0);
	}
	if (l == 10){
		return (0);
	}
	return (solve(n - l, m + 1, l + 1) + solve(n, m, l + 1));
}

int main(void)
{
	while (1){
	scanf("%d%d", &max, &s);
	if (max == 0 && s == 0){
		return (0);
	}
	printf("%d\n", solve(s, 0, 0));
	}
	return (0);
}