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

#define MAX 257

int main(void)
{
	int n;
	cin >> n;
	vector<string> us = vector<string>(n);
	rep(i, n) cin >> us[i];

	int m;
	cin >> m;
	vector<string> ts = vector<string>(m);
	rep(i, m) cin >> ts[i];

	bool closed = true;
	rep(i, ts.size()) {
		bool f = true;
		rep(j, us.size())
			if (ts[i] == us[j]) {
				printf("%s by %s\n", (closed?"Opened":"Closed"), us[j].c_str());
				closed = !closed;
				f = false;
				break;
			}
		if (f)
			printf("Unknown %s\n", ts[i].c_str());
	}
	return 0;
}