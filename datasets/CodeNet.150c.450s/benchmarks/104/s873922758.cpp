#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int w, n;
	int g[31];
	scanf("%d %d", &w, &n);
	for (int i = 1; i <= w; ++i)
		g[i] = i;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(g[a], g[b]);
	}
	for (int i = 1; i <= w; ++i)
		printf("%d\n", g[i]);

	return 0;
}