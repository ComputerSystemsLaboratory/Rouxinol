#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
const int MAXN = 100100 ;
inline int read()
{
	int f = 1, x = 0; char c = getchar();
	while (c < '0' || c > '9') {if (c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') {x = (x << 3) + (x << 1) + c - '0'; c = getchar();}
	return f * x;
}
int f[MAXN], n, m, q;
int getfa(int x)
{
	if (f[x] == x) return f[x];
	return f[x] = getfa(f[x]);
}
int main()
{
	n = read(); m = read();
	for (int i = 0; i < n; ++i) f[i] = i;
	for (int i = 1, u, v; i <= m; ++i)
	{
		u = read(); v = read();
		int fa1 = getfa(u);
		int fa2 = getfa(v);
		if (fa1 != fa2)
			f[fa1] = fa2;
	}
	q = read();
	for (int i = 1; i <= q; ++i)
	{
		int u, v;
		u = read(); v = read();
		int fa1 = getfa(u), fa2 = getfa(v);
		if (fa1 == fa2) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}

