#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ALL(a) (a).begin(),(a).end()
#define pb(x) push_back(x)
#define ms(m,v) memset(m,v,sizeof(m))
#define D10  fixed<<setprecision(10) 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> P;
typedef long long ll;
struct edge{ int from, to, cost; };

int main()
{
	int n, m;
	while (cin >> n >> m, n)
	{
		vector<P> v;
		REP(i, n)
		{
			int a, b;
			cin >> a >> b; v.push_back(P(b, a));
		}
		sort(ALL(v));
		for (int i = n-1; i>=0&&m>0; i--)
		{
			if (v[i].second <= m)
			{
				m -= v[i].second;
				v[i].second = 0;
			}
			else
			{
				v[i].second -= m;
				m = 0;
			}
		}
		int sum = 0;
		REP(i, n) sum += v[i].first*v[i].second;
		cout << sum << endl;
	}
	return 0;
}