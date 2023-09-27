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

int n, r;
VI ps, cs;
VI cards;

int main(void) {
	while (1) {
		cards.clear();
		ps.clear();
		cs.clear();
		cin >> n >> r;
		if (n ==  0 && r == 0) break;
		rep (i, n) {
			cards.PB(n - i);
		}
		rep (i, r) {
			int p, c;
			cin >> p >> c;
			ps.PB(p);
			cs.PB(c);
		}
		rep (i, r) {
			VI temp;
			REP (j, ps[i] - 1, ps[i] + cs[i] - 1) {
				temp.PB(cards[j]);
			}
			rep (j, ps[i] - 1) {
				temp.PB(cards[j]);
			}
			REP (j, ps[i] + cs[i] - 1, cards.size()) {
				temp.PB(cards[j]);
			}
			cards = temp;
		}
		cout << cards[0] << endl;
	}
	return 0;
}