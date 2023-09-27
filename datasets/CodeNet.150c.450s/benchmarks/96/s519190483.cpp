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
	string ms[] = { "",
					".,!? ",
                    "abc",
					"def",
					"ghi",
					"jkl",
					"mno",
					"pqrs",
					"tuv",
					"wxyz" };

	int n;
	cin >> n;
	rep(TTT, n) {
		string str;
		cin >> str;
		vector<pii> ks;
		int prev = 0;
		int cnt = 0;
		rep(k, str.size()) {
			int i = str[k]-'0';
			if (prev != i) {
				if (prev != 0)
					putchar(ms[prev][cnt]);
				prev = i;
				cnt = 0;
			} else {
				if (prev != 0)
					cnt = (cnt+1)%ms[prev].size();
			}
		}
		if (prev != 0)
			putchar(ms[prev][cnt]);
		putchar('\n');
	}
	return 0;
}