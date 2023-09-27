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

int main()
{
	int x, y, s;
	while (cin >> x >> y >> s, x)
	{
		x += 100;
		y += 100;
		int ans = 0;
		FOR(i, 1, 1001)FOR(j, 1, 1001)
		{
			if (i*x / 100 + j*x / 100 == s) ans = max(ans, (i*y / 100 + j*y / 100));
		}
		cout << ans << endl;
	}
	return 0;
}