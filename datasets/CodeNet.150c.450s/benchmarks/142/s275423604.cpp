#pragma GCC optimize ("O2")
#pragma GCC target ("avx2")
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


	int N, K, kari;
	cin >> N >> K;

	int k = N - K;
	int A[100000];
	char kotae[800000], *it = kotae;

	if (k <= K) {
		rep(i, k) cin >> A[i];
		rep(i, K - k) cin >> kari;
		rep(i, k) {
			cin >> kari;
			if (kari > A[i]) {
				*it++ = 'Y';
				*it++ = 'e';
				*it++ = 's';
				*it++ = '\n';
			}
			else {
				*it++ = 'N';
				*it++ = 'o';
				*it++ = '\n';
			}
		}
	}
	else if (K == 1) {
		int mae;
		cin >> mae;
		rep(i, k) {
			cin >> kari;
			if (kari > mae) {
				*it++ = 'Y';
				*it++ = 'e';
				*it++ = 's';
				*it++ = '\n';
			}
			else {
				*it++ = 'N';
				*it++ = 'o';
				*it++ = '\n';
			}
			mae = kari;
		}
	}
	else {
		rep(i, K) cin >> A[i];
		int kazu = k / K;
		int amari = k % K;
		rep(j, kazu) rep(i, K) {
			cin >> kari;
			if (kari > A[i]) {
				*it++ = 'Y';
				*it++ = 'e';
				*it++ = 's';
				*it++ = '\n';
			}
			else {
				*it++ = 'N';
				*it++ = 'o';
				*it++ = '\n';
			}
			A[i] = kari;
		}
		rep(i, amari) {
			cin >> kari;
			if (kari > A[i]) {
				*it++ = 'Y';
				*it++ = 'e';
				*it++ = 's';
				*it++ = '\n';
			}
			else {
				*it++ = 'N';
				*it++ = 'o';
				*it++ = '\n';
			}
		}
	}

	fwrite(kotae, 1, it - kotae, stdout);


	Would you please return 0;
}