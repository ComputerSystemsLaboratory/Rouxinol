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

int day(int y, int m)
{
	return (y%3==0||m%2!=0)?20:19;
}

int millennium(int ey, int em, int ed)
{
	int cnt = 0;
	for (int y = 1; y <= ey; y++) {
		for (int m = 1; m <= 10; m++) {
			for (int d = 1; d <= day(y, m); d++) {
				if (y == ey && m == em && d == ed)
					return cnt;
				cnt++;
			}
		}
	}
}

int main(void)
{
	int n;	
	cin >> n;
	rep(t, n) {
		int y, m, d;
		cin >> y >> m >> d;
		cout << millennium(1000, 1, 1)-millennium(y, m, d) << endl;
	}
	return 0;
}