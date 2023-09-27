#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 10005;
int c[MAX];
int main(void)
{
	int n;
	int *a, *b;
	scanf("%d", &n);
	a = new int[n + 1];
	b = new int[n + 1];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
		++c[a[i]];
	}
	
	for (int i = 1; i <= MAX; ++i)
		c[i] += c[i - 1];
	
	for (int i = 0; i < n; ++i)
	{
		b[c[a[i]]--] = a[i];
	}
	printf("%d", b[1]);
	for (int i = 2; i <= n; ++i)
	{
		printf(" %d", b[i]);
	}
	putchar('\n');
	return 0;
}