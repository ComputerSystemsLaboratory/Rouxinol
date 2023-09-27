#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s
typedef pair<int, int> P;

int n, m;
int t[105]; int h[105];

int main()
{
	while (cin >> n >> m, n)
	{
		int sumt = 0; int sumh = 0;
		REP(i, n)
		{
			cin >> t[i]; sumt += t[i];
		}
		REP(i, m)
		{
			cin >> h[i]; sumh += h[i];
		}
		int mid = (sumt + sumh) / 2;
		if (mid * 2 != sumt + sumh)
		{
			cout << -1 << endl;
			continue;
		}
		int change = sumt - mid;
		P ans;
		int anssum = INF;
		REP(i, n)REP(j, m)
		{
			if (t[i] - h[j] == change)
			{
				if (anssum > t[i] + h[j])
				{
					ans = P(t[i], h[j]);
					anssum = t[i] + h[j];
				}
			}
		}
		if (anssum == INF) cout << -1 << endl;
		else cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}