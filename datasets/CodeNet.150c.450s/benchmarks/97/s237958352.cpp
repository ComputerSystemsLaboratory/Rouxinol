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
bool fld[600][600];

int main()
{
	while (cin >> n, n)
	{
		memset(fld, false, sizeof(fld));
		vector<P> v;
		v.push_back(P(300, 300));
		REP(i, n-1)
		{
			int a, b;
			cin >> a >> b;
			if (b == 0) v.push_back(P(v[a].first - 1, v[a].second));
			if (b == 1) v.push_back(P(v[a].first, v[a].second - 1));
			if (b == 2) v.push_back(P(v[a].first + 1, v[a].second));
			if (b == 3) v.push_back(P(v[a].first, v[a].second + 1));
		}
		int maxx = 0, maxy = 0, minx = 1000, miny = 1000;
		REP(i, n)
		{
			maxx = max(maxx, v[i].first);
			minx = min(minx, v[i].first);
			maxy = max(maxy, v[i].second);
			miny = min(miny, v[i].second);
		}
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}

	return 0;
}