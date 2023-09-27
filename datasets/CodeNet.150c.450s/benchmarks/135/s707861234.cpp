#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define MOD 1000000007
#define ALL(a) (a).begin(),(a).end()
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
	int h[2000]; int w[2000];
	while (cin >> n >> m, n)
	{
		REP(i, n) cin >> h[i];
		REP(i, m) cin >> w[i];
		map<int,int> ari;
		int sh[2000]; int sw[2000];
		sh[0] = sw[0] = 0;
		FOR(i,1, n+1) sh[i] = sh[i - 1] + h[i - 1];
		FOR(i, 1, m + 1) sw[i] = sw[i - 1] + w[i - 1];
		REP(i, n)FOR(j, i + 1, n+1)
		{
			int t = sh[j] - sh[i];
			if (ari.find(t) == ari.end()) ari[t] = 1;
			else ari[t]++;
		}
		int cnt = 0;
		REP(i, m)FOR(j, i + 1, m+1)
		{
			cnt += ari[sw[j] - sw[i]];
		}
		cout << cnt << endl;
	}
	return 0;
}