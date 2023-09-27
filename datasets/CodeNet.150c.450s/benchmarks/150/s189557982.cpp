#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 10005;
int c[MAX];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int *a, *b;
	cin >> n;
	a = new int[n + 1];
	b = new int[n + 1];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		++c[a[i]];
	}
	int i;
	for (i = 0; i <= MAX; ++i)
	{
		if (c[i])
		{
			--c[i];
			cout << i;
			break;
		}
	}
	for (i = 0; i <= MAX; ++i)
	{
		while (c[i])
		{
			--c[i];
			cout << ' ' << i;
		}
	}
	cout << endl;
	return 0;
}