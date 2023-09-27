#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

int main() {
	int a[4], b[4];
	while (cin >> a[0]) {
		rep (i, 3) cin >> a[i + 1];
		rep (i, 4) cin >> b[i];

		int hit = 0, blow = 0;
		rep(i, 4) {
			rep(j, 4) {
				if (a[i] == b[j]) blow++;
			}
			if (a[i] == b[i]) {
				hit++;
				blow--;
			}
		}
		cout << hit << " " << blow << endl;
	}
}