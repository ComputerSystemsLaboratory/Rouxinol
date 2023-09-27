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

int n;
VI ss;

int main(void) {
	while (1) {
		ss.clear();
		cin >> n;
		if (n == 0) break;
		rep (i, n) {
			int s;
			cin >> s;
			ss.PB(s);
		}
		sort(ALL(ss));
		int sum = 0;
		REP (i, 1, ss.size() - 1) {
			sum += ss[i];
		}
		cout << sum / (n - 2) << endl;
	}
    return 0;
}