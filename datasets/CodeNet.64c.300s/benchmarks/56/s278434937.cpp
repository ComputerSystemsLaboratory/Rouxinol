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

int n;

int main()
{
	cin >> n;
	int ny = 195;
	int uy = 200;
	int y, m, d;
	REP(i, n)
	{
		cin >> y >> m >> d;
		int cnt = 0;
		int year = y; int month = m;
		y = 1000 - y - 1;
		cnt += 590 * (y / 3);
		if (y % 3 == 1) cnt += uy;
		else if (y % 3 == 2) cnt += uy + ny;
		if (year % 3 == 0)
		{
			m = 10 - m;
			cnt += m * 20;
			cnt += 20 - d;
		}
		else 
		{
			m = 10 - m;
			if (month % 2 == 0) cnt += 39 * (m / 2) + 19 - d;
			else cnt += 39 * (m / 2) + 19 + 20 - d;
		}
		cnt++;
		cout << cnt << endl;

	}
	return 0;
}