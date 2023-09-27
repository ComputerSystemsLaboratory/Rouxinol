#include <bits/stdc++.h>
#define rep(i,n) for(int i=(0);i<(n);i++)

using namespace std;

typedef long long ll;

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int m = 26;
	int d;
	cin >> d;

	vector<ll> c(m);
	rep(i, m) cin >> c[i];

	vector<vector<ll>> s(d, vector<ll>(m));
	rep(i, d) rep(j, m) cin >> s[i][j];

	vector<ll> pen(m, 0);
	ll sat = 0;

	vector<ll> t(d);
	rep(i, d) {
		cin >> t[i];
		t[i]--;
	}
	
	rep(i, d){
		rep(j, m) pen[j] += c[j];
		sat += s[i][t[i]];
		pen[t[i]] = 0;
		rep(j, m) sat -= pen[j];
		cout << sat << endl;
	}

}
