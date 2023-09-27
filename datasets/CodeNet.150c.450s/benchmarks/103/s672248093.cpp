#include <bits/stdc++.h>

using namespace std;

int ct(int x, int n, int s)
{
	if (x == 10){
		return (s == 0 && n == 0);
	}
	
	return (ct(x + 1, n - 1, s - x) + ct(x + 1, n, s));
}

int main()
{
	int n, s;
	
	while (scanf("%d %d", &n, &s) && n){
		printf("%d\n", ct(0, n, s));
	}
	
	return (0);
}