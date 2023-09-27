#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int x, y, s;

int main(void) {
	while (1) {
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;
		int ans = -1;
		REP (i, 1, s) REP (j, 1, s) {
			int p1 = i * (100 + x) / 100.0;
			int p2 = j * (100 + x) / 100.0;
			int np1 = i * (100 + y) / 100.0;
			int np2= j * (100 + y) / 100.0;
			if (p1 + p2 == s && ans < np1 + np2) {
				ans = np1 + np2;
			}
		}
		cout << ans << endl;
	}
    return 0;
}