/*0ms,1008KB*/

#include<cstdio>
#include<cstring>

int a[15], l[15], r[15], t, i, j, lc, rc, cnt;
bool vis[15], flag;

bool solve()
{
	for (i = 0; i < 1024; ++i)
	{
		memset(l, 0, sizeof(l));
		memset(r, 0, sizeof(r));
		lc = rc = 0;
		for (cnt = 0, j = i; cnt < 10; ++cnt, j >>= 1)
		{
			if (j & 1) l[lc++] = a[cnt];
			else r[rc++] = a[cnt];
		}
		flag = true;
		for (j = 1; j < lc; ++j)
			if (l[j] < l[j - 1])
			{
				flag = false;
				break;
			}
		if (flag)
			for (j = 1; j < rc; ++j)
				if (r[j - 1] > r[j])
				{
					flag = false;
					break;
				}
		if (flag) return true;
	}
	return false;
}

int main()
{
	scanf("%d", &t);
	while (t--)
	{
		memset(vis, 0, sizeof(vis));
		for (i = 0; i < 10; ++i)
			scanf("%d", &a[i]);
		puts(solve() ? "YES" : "NO");
	}
	return 0;
}