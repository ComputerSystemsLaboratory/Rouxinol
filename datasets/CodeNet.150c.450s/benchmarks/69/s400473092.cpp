#include <iostream>
#include <stdio.h>

using namespace std;

int flag, a[10];

void f(int x0, int x1, int i)
{
	if (flag)
		return;
	if (i == 10)
	{
		flag = 1;
		return;
	}
	if (a[i] < x0 && a[i] < x1)
		return;
	if (a[i] > x0)
		f(a[i], x1, i + 1);
	if (a[i] > x1)
		f(x0, a[i], i + 1);
}

int main()
{
	int t, i;
	scanf("%d", &t);
	while (t--)
	{
		for (i = flag = 0; i < 10; i++)
			scanf("%d", &a[i]);
		f(0, 0, 0);
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}