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
#include<utility>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
/*
(char)'1' - (int)48 = (int)1;


*/


int main()
{
	int n, a, b, c, x;
	cin >> n >> a >> b >> c >> x;
	while (n!=0)
	{
		int y[120];
		for (int i = 0; i < n; i++)cin >> y[i];
		int ans = 0;
		int maxx = 20000;
		for (int i = 0; i < n; i++)
		{
			while (maxx>0)
			{
				if (x == y[i])
				{
					x = (a*x + b) % c;
					if (i != n - 1)ans++;
					break;
				}
				ans++;
				x = (a*x + b) % c;
				maxx--;

			}

		}
		if (ans > 10000)cout << -1 << endl;
		else cout << ans << endl;
		cin >> n >> a >> b >> c >> x;
	}
	
}