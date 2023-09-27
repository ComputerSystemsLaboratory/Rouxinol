#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

const int MAXN = 10010;

int f[MAXN];
int n, W;

int main()
{
	ios::sync_with_stdio(false);
	
	cin >> n >> W;
	memset(f, 0, sizeof(f));
	for(int i = 1; i <= n; ++i)
	{
		int v, w;
		cin >> v >> w;
		for(int j = W; j >= w; --j)
			f[j] = max(f[j], f[j - w] + v);
	}
	
	cout << f[W] << endl;
	
	return 0;
}