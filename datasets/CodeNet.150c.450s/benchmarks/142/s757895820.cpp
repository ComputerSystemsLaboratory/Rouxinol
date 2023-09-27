#include <bits/stdc++.h>

using namespace std;

int n, k, a[200005];

int main()
{
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; ++i) scanf("%d", &a[i]);
	for(int i = k + 1; i <= n; ++i)
	{
		if(a[i] > a[i - k]) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}