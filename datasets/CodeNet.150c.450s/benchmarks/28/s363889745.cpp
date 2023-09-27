#include<iostream>
#include<climits>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
typedef long long ll;

using namespace std;

ll n, k;
ll W[100000];

bool check(ll M) {
	ll cost = 0, cnt = 0, i;
	rep(i,n) {
		cost += W[i];
		while (cost > M) {
			cost = W[i];
			cnt++;
			if (cnt==k) return false;
		}
	}
	return true;
}

int main() {
	// input
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll L=0, R=INT_MAX, M, x, i;
	cin >> n >> k;
	rep(i,n) cin >> W[i];

	while(L < R) {
		M = (L + R) / 2;
		if (check(M)) R = M;
		else L = M + 1;
	}
	cout << L << endl;
	return 0;
}