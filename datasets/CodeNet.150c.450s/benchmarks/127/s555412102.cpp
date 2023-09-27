#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define repp(i, m, n) for(int i = m; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;

int main()
{
	int m;
	cin >> m;
	string x, y, z, w;
	rep(i, m)
	{
		cin >> x;
		int k=x.size();
		map<string, int> table;
		int ans=0;
		repp(j, 1, k)
		{
			y=x;
			y.resize(j);
			z=x;
			w=x.substr(j);
			rep(l, 8)
			{
				string s=y, t=w;
				if(l%2==0)	reverse(s.begin(), s.end());
				if((l/2)%2==0)	reverse(t.begin(), t.end());
				if(l<4) swap(s, t);
				string u=s+t;
				table[u]++;
				if(table[u]==1) ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}