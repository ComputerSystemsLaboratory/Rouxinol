#include "bits/stdc++.h"
#define ll long long
using namespace std;

ll dph[1500 * 1000 + 1];
ll dpw[1500 * 1000 + 1];

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, M;
	while (true) {
		cin >> N >> M;
		if (N == 0 && M == 0)break;
		vector<ll> H(N + 1, 0), W(M + 1, 0);

		for (int i = 1; i <= 1500 * 1000;i++) dph[i] = dpw[i] = 0;

		for (int i = 1; i <= N;i++) {
			cin >> H[i];
			H[i] += H[i - 1];

		}
		for (int i = 1;i <= M;i++) {
			cin >> W[i];
			W[i] += W[i - 1];
		}
		ll ans = 0;

		for (int i = 0;i <= N;i++) {
			for (int j = i + 1; j <= N;j++) {
				dph[H[j] - H[i]]++;
			}
		}

		for (int k = 0; k <= M;k++) {
			for (int l = k + 1;l <= M;l++) {
				dpw[W[l] - W[k]]++;
			}
		}

		ll MIN_HW = min(H[N], W[M]);

		for (int i = 1; i <= MIN_HW;i++) {
			//cout << "i = " << i << endl;
			//cout << "dph = " << dph[i] << " dpw = " << dpw[i] << endl;
			ans += dph[i] * dpw[i];
		}

		/* ????¬? TLE
		for (int i = 0;i <= N;i++) {
			for(int j = i + 1; j <= N;j++){

				for (int k = 0; k <= M;k++) {
					for (int l = k + 1;l <= M;l++) {
						if (H[j] - H[i] == W[l] - W[k])ans++;
					}
				}

			}
		}
		*/
		cout << ans << endl;
	}
}