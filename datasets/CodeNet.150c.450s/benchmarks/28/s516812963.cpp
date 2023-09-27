#include "bits/stdc++.h"

using namespace std;

#define int long long
#define ll long long
typedef pair<int, int> P;
#define mod 1000000007
#define INF (1LL<<60)

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl


int n, k;
int w[123456];

bool func(int P){
	int truck = 1, weight = 0;
	rep(i, n){
		if (w[i] > P) return false;

		if (weight + w[i] <= P) weight += w[i];
		else {
			weight = w[i]; truck++;
		}
	}
	if (truck <= k) return true;
	else return false;
}

signed main(){


	cin >> n >> k;
	rep(i, n) cin >> w[i];

	int ng = 0, ok = 1e9;

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;

//		cerr << mid << " " << func(mid) << endl;

		if (func(mid)) ok = mid;
		else ng = mid;
	}

	cout << ok << endl;
	return 0;
}

