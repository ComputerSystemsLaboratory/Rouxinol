/*宣言*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int main()
{
	int n, u, k, w[101][101], v, c;
	int d[101], kas[101] = { 0 }, K;
	cin >> n;
	memset(d, 0x7f, sizeof(d));
	memset(w, 0x7f, sizeof(w));
	rep(i, n)
	{
		cin >> u >> k;
		rep(j, k)
		{
			cin >> v >> c;
			w[u][v] = c;
		}
	}
	d[0]=0;
	int p[101];
	int Min,Min1;
	Min = 0;
	Min1 = 100000000;
	kas[0] = 1;
	rep(j, n)
	{
		rep(i, n)
		{
			if (d[i] > d[Min] + w[Min][i])
			{
				d[i] = d[Min] + w[Min][i];
				p[i] = Min;
			}
			if (Min1 > d[i] && kas[i] == 0)
			{
				Min1 = d[i];
				K = i;
			}
		}
		kas[K] = 1;
		Min = K;
		Min1 = 100000000;
	}
	rep(i, n)
	{
		cout << i <<' '<< d[i] << endl;
	}
	return 0;
}

