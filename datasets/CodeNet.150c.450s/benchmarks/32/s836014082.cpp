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


int main()
{
	int m, n1, n2;
	while (cin >> m >> n1 >> n2&&m)
	{
		vi a;
		FOR(i, m)
		{
			inin(x);
			a.push_back(x);
		}
		sort(a.rbegin(), a.rend());

		int g = -1, ans;
		for (int i = n1-1; i < n2;i++)
		{
			if (a[i]- a[i+1] >= g)
			{
				g = a[i] - a[i+1];
				ans = i+1;
			}
		}
		cout << ans << endl;
	}
}