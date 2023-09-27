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
	int n, m;
	while (cin >> n >> m, n)
	{
		int t[105]; int h[105];
		int sumt = 0, sumh = 0;
		REP(i, n)
		{
			cin >> t[i];
			sumt += t[i];
		}
		REP(i, m)
		{
			cin >> h[i];
			sumh += h[i];
		}
		REP(i, n)REP(j, m)
		{
			if (sumt - t[i] + h[j] == sumh - h[j] + t[i])
			{
				cout << t[i] << " " << h[j] << endl;
				goto end;
			}
		}
		cout << -1 << endl;
	end:;
	}
}