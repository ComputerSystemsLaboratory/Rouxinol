#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define MOD 1000000007
#define ALL(a) (a).begin(),(a).end()
#define pb(x) push_back(x)
#define ms(m,v) memset(m,v,sizeof(m))
#define D10  fixed<<setprecision(10) 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> P;
typedef long long ll;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int cost[15][15];
		REP(i, 15)REP(j, 15) cost[i][j] = (i == j ? 0 : INF);
		int a, b, c;
		int city = 0;
		REP(i, n)
		{
			cin >> a >> b >> c;
			cost[a][b] = cost[b][a] = c;
			city = max({ city, a, b });
		}
		city++;
		REP(k, city)REP(i, city)REP(j, city) cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
		int sum[15] = {};
		REP(i, city)
		{
			REP(j, city) sum[i] += cost[i][j];
		}
		int ans; int anssum = INF;
		REP(i, city)
		{
			if (anssum > sum[i])
			{
				ans = i;
				anssum = sum[i];
			}
		}
		cout << ans << " " << anssum << endl;
	}
	return 0;
}