# define _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <string>
# include <bitset>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <iomanip>
# include <queue>
# include <sstream>
# include <climits>
# include <cmath>
# include <list>
# include <functional>
# include <string>
# include <ctime>
# include <set>
# include <map>
# include <stack>
using namespace std;
# define M_PI 3.141592
# define FOR(i,n) for(int i=0;i<(int)n;i++)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define toRad 2.0*M_PI/360.0
# define inin(x) int x;cin>>x;
# define all(x) x.begin(),x.end()
# define debug(x) cout<<#x<<" :"<<x<<endl;
# define rep(i,n) for(int i=0;i<(int)n;i++)
# define EPS 1e-12
# define CHECK(i,a) FOR(i,a.size())cout<<#a<<"["<<i<<"] : "<<a[i]<<endl; 

int main()
{
	int h, w;
	while (cin >> h >> w&&h)
	{
		int a[120][120] = {};
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				char c; cin >> c;
				int p = 0;
				switch (c)
				{
				case '@':p = 1; break;
				case '#':p = 2; break;
				case '*':p = 3; break;
				}
				a[i][j] = p;
			}
		}
		int ans = 0;
		int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (a[i][j] == 0)continue;
				ans++;
				typedef pair<int, int> pii;
				queue<pii> q;
				q.push(pii(i, j));
				int o = a[i][j];
				a[i][j] = 0;
				while (!q.empty())
				{
					pii now = q.front(); q.pop();
					for (int k = 0; k < 4; k++)
					{
						pii next = now;
						next.first += dx[k];
						next.second += dy[k];
						if (a[next.first][next.second] == o)
						{
							q.push(next);
							a[next.first][next.second] = 0;
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}