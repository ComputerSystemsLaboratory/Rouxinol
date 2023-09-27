#include <stdio.h>
typedef long long LL;

int c[100001] = {0};

int read()
{
	char c;
	while((c = getchar()) < 48 || c > 57);
	int x = c - 48;
	while((c = getchar()) > 47 && c < 58) x = x * 10 + c - 48;
	return x;
}

int main()
{	 
	int n, T, x, y, t;
	LL s = 0;
		
	n = read();
	while(n--){
		x = read();
		c[x]++, s += x;
	}
	
	T = read();
	while(T--){
		x = read(), y = read();
		t = c[x], c[y] += t, c[x] = 0;
		s += (LL)(y - x) * (LL)t;
		printf("%lld\n", s);
	}
		
	return 0;
}