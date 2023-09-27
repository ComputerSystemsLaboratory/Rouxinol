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

int main(void)
{
	int n, m, p;
	while (cin >> n >> m >> p, n|m|p) {
		m--;
		vector<int> xs = vector<int>(n);
		rep(i, n) cin >> xs[i];

		ll sum = 0;
		rep(i, n) sum += 100*xs[i];
		if (xs[m] == 0)
			cout << 0 << endl;
		else 
			cout << sum*(100-p)/(100*xs[m]) << endl;
	}
	return 0;
}