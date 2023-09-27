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
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

#define MAX 220

int main(void)
{
	int n;
	while (cin >> n, n) {
		vector<pii> pos;
		pos.push_back(pii(0, 0));
		rep(i, n-1) {
			int p, d;
			cin >> p >> d;
			int x = pos[p].first, y = pos[p].second;
			pos.push_back(pii(x+dx[d], y+dy[d]));
		}
		int x1, y1, x2, y2;
		x1 = x2 = pos[0].first;
		y1 = y2 = pos[0].second;
		REP(i, 1, pos.size()) {
			if (x1 < pos[i].first) x1 = pos[i].first;
			if (x2 > pos[i].first) x2 = pos[i].first;
			if (y1 < pos[i].second) y1 = pos[i].second;
			if (y2 > pos[i].second) y2 = pos[i].second;
		}
		printf("%d %d\n", abs(x1-x2)+1, abs(y1-y2)+1);
	}
	return 0;
}