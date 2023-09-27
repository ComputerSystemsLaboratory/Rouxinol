#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 10005;
int c[MAX];
int main(void)
{int n;
	int *a, *b;
	scanf("%d", &n);
	a = new int[n + 1];
	b = new int[n + 1];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
		++c[a[i]];
	}
	int i;
	bool flag = false;
	for (i = 0; i <= MAX; ++i)
	{
		while (c[i])
		{
			--c[i];
			printf("%d", i);
			flag = true;
			break;
		}
		if (flag)
			break;
	}
	for (; i <= MAX; ++i)
	{
		while (c[i])
		{
			--c[i];
			printf(" %d", i);
		}
	}
	
	
	putchar('\n');
	return 0;
}