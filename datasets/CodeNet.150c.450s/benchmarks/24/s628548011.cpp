#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)
#define dump3(x, y, z) (cout << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", "<< z << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int main(void)
{
	int n, m;
	while (cin >> n >> m, n|m) {
		vector<pii> pds;
		rep(i, n) {
			int d, p;
			cin >> d >> p;
			pds.push_back(pii(p, d));
		}
		sort(ALL(pds));
		reverse(ALL(pds));
		rep(i, pds.size()) {
			if (m >= pds[i].second) {
				m -= pds[i].second;
				pds[i].second = 0;
			} else {
				pds[i].second -= m;
				m = 0;
				break;
			}
		}

		int ans = 0;
		rep(i, pds.size())
			ans += pds[i].first * pds[i].second;
		cout << ans << endl;
	}
	return 0;
}