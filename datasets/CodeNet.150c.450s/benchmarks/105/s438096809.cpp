#pragma GCC optimize ("O2")
#pragma GCC target ("avx")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "
#define ce(x) cerr << (x) << "\n"
#define cesp(x) cerr << (x) << " "
#define pb push_back
#define mp make_pair
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define Would
#define you
#define please

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);


	int T;
	cin >> T;

	rep(k, T) {
		int N;
		cin >> N;
		ll A[200];
		rep(j, N) cin >> A[j];
		string S;
		cin >> S;

		ll B[62] = {};
		int dame = 0;
		for (int i = N - 1; i >= 0; i--) {
			ll a = A[i];
			if (S[i] != '1') {
				for (int j = 60; j >= 0; j--) {
					if (a >> j & 1) {
						if (B[j]) a ^= B[j];
						else {
							B[j] = a;
							break;
						}
					}
				}
			}
			else {
				for (int j = 60; j >= 0; j--) {
					if (a >> j & 1) {
						if (B[j]) a ^= B[j];
						else {
							dame = 1;
							break;
						}
					}
				}
			}
		}

		if (dame) co(1);
		else co(0);
	}


	Would you please return 0;
}