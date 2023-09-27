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

int day;
int n;
VI ys, ms, ds;

int main(void) {
	day = 0;
	REP (i, 1, 1000) {
		day += i % 3 == 0? 200 : 195;
	}
	cin >> n;
	rep (i, n) {
		int y, m, d;
		cin >> y >> m >> d;
		ys.PB(y);
		ms.PB(m);
		ds.PB(d);
	}
	rep (i, n) {
		int yd = 0, md = 0, d;
		REP (j, 1, ys[i]) {
			yd += j % 3 == 0? 200 : 195;
		}
		REP (j, 1, ms[i]) {
			md += ys[i] % 3 != 0 && j % 2 == 0? 19 : 20; 
		}
		d = yd + md + ds[i] - 1;
		cout << day - d << endl;
	}
    return 0;
}