#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };



int main()
{
	int n, m;
	cin >> n >> m;
	while (n || m)
	{
		int a[120] = {}; int x = 0;
		int l[120] = {}; int y = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			x += a[i];

		}
		rep(i, m)
		{
			cin >> l[i];
			y += l[i];
		}
		int an = 99999;
		int X, Y;
		rep(i, n)
		{
			rep(k, m)
			{
				if (x + l[k]-a[i] == y + a[i]-l[k])
				{
					if (an>l[k] + a[i])
					{
						an = l[k] + a[i];
						X = a[i];
						Y = l[k];
					}
				}
			}

		}
		if (an == 99999)cout << -1 << endl;
		else cout << X <<" "<< Y << endl;


		cin >> n >> m;

	}
	return 0;
}