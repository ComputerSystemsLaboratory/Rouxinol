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

int n, m;
VI sns, sms;
const int INF = INT_MAX / 2;

int main(void) {
	while (1) {
		sns.clear();
		sms.clear();
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		rep (i, n) {
			int sn;
			cin >> sn;
			sns.PB(sn);
		}
		rep (i, m) {
			int sm;
			cin >> sm;
			sms.PB(sm);
		}
		int max_v = INF;
		int ans1, ans2;
		rep (i, n) rep (j, m) {
			int sum1, sum2;
			swap(sns[i], sms[j]);
			sum1 = accumulate(ALL(sns), 0);
			sum2 = accumulate(ALL(sms), 0);
			if (sum1 == sum2 && max_v > sns[i] + sms[j]) {
				ans1 = sms[j];
				ans2 = sns[i];
				max_v = sns[i] + sms[j];
			}
			swap(sns[i], sms[j]);
		}
		if (max_v == INF) {
			cout << -1 << endl;
		} else {
			cout << ans1 << " " << ans2 << endl;
		}
	}
    return 0;
}