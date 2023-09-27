# define _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <numeric>
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
//# define M_PI 3.141592
# define INF ((int)(1<<30))
# define FOR(i,n) for(int i=0;i<(int)n;i++)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define toRad 2.0*M_PI/360.0
# define inin(x) int x;cin>>x;
# define all(x) x.begin(),x.end()
# define debug(x) cout<<#x<<" :"<<x<<endl;
# define rep(i,n) for(int i=0;i<(int)n;i++)
# define EPS 1e-12
# define CHECK(i,a) FOR(i,a.size())cout<<#a<<"["<<i<<"] : "<<a[i]<<endl; 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
int dx[4] = { 0,-1,1,0 }, dy[4] = { 1,0,0,-1 };


int main()
{
	int h;
	while (cin >> h&&h)
	{
		vi a[11];
		FOR(i, h)
		{
			FOR(j, 5)
			{
				inin(x); a[i].push_back(x);
			}
		}
		bool ok = true;
		int ans = 0;
		while (ok)
		{
			ok = false;
			FOR(i, h)
			{
				for (int j = 5; j >= 3;j--)
				{
					for (int k = 0; k <= 5 - j; k++)
					{
						bool okk = true;
						for (int l = k; l < k + j; l++)
						{
							if (a[i][k] == 0)okk = false;
							if (a[i][l] != a[i][k])okk = false;
						}
						if (okk)
						{
							ok = true;
							for (int l = k; l < k + j; l++)
							{
								ans += a[i][l];
								a[i][l] = 0;
							}
						}
					}
				}
			}
			for (int c = 0; c < h;c++) for (int i = 0; i < h - 1; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (a[i+1][j] == 0)
					{
						swap(a[i][j], a[i + 1][j]);
					}
				}
			}
		}
		cout << ans << endl;
	}
}