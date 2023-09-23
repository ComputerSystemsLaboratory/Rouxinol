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

int n, m, p;

int main()
{
	while (cin >> n >> m >> p, n)
	{
		int cnt = 0;
		m--;
		int bet;
		int atari;
		REP(i, n)
		{
			cin >> bet;
			cnt += bet;
			if (i == m) atari = bet;
		}
		int pool = cnt * (100-p);
		if (atari == 0) cout << 0 << endl;
		else cout << pool / atari << endl;
	}
	return 0;
}