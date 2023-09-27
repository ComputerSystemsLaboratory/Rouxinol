#include "bits/stdc++.h"
using namespace std;
#define MAXN 1000000
#define ll long long

ll dp[MAXN + 1];
ll Odp[MAXN + 1];

int main() {
	cin.tie(0); ios::sync_with_stdio(false);

	for (int i = 0; i < MAXN + 1;i++) {
		dp[i] = i;
		Odp[i] = i;
	}
	// n := n???????????£?????¢???
	// p := ??£?????¢?????°
	// n = 1 p = 1 ?????´???????????????
	// n = 2, p = 2*3*4/6 = 4??????
	ll p = 4;
	for (int n = 2; p <= MAXN;n++) {
		 p = n*(n + 1)*(n + 2) / 6;
		 //cout << n << " " << p << endl;
		for (int i = 0; i + p <= MAXN;i++) {
			dp[i + p] = min(dp[i + p], dp[i] + 1);
			if (p % 2 == 1) {
				Odp[i + p] = min(Odp[i + p], Odp[i] + 1);
			}
		}
	}
	int N;
	while (cin >> N,N) {
		cout << dp[N] << " " << Odp[N] << endl;
	}

}