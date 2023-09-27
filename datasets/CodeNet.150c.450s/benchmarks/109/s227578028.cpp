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

int a[24 * 60 * 60];

int main()
{
	int n;
	while (cin >> n&&n)
	{
		FOR(i, 24 * 60 * 60)a[i] = 0;
		FOR(i, n)
		{
			int st, en;
			int h, m, s;
			scanf("%d:%d:%d", &h, &m, &s);
			st = h * 60 * 60 + m * 60 + s;
			scanf("%d:%d:%d", &h, &m, &s);
			en = h * 60 * 60 + m * 60 + s;
			a[st]++;
			a[en]--;
		}
		int ans = 0;
		for (int i = 1; i < 24 * 60 * 60; i++)
		{
			a[i] += a[i - 1];
			ans = max(ans, a[i]);
		}
		cout << ans << endl;
	}
}