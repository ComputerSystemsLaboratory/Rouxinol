#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const long double EPS = 1e-8;
using vi = vector <int>;
using vvi = vector <vi>;

signed main() {
	int n, m;
	while (cin >> n >> m, n) {
		int pear[n], berry[m];
		rep (i, n) {
			cin >> pear[i];
		}
		rep (i, m) {
			cin >> berry[i];
		}

		int mini = INF;
		int outa, outb;
		rep (i, n) {
			rep (j, m) {
				int sum = pear[i] + berry[j];
				swap(pear[i], berry[j]);
				int sumn = 0, summ = 0;
				rep (k, n) sumn += pear[k];
				rep (k, m) summ += berry[k];
				if(sumn == summ && mini > sum) outa = pear[i], outb = berry[j], mini = sum;
				swap(pear[i], berry[j]);
			}
		}
		if (mini == INF) cout << -1 << endl;
		else
			cout << outb << " " << outa << endl;
	}
}
