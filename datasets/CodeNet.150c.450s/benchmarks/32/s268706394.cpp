//#include"bits/stdc++.h"
#include<iostream>
#include<ostream>
#include<vector>
#include<string>
#include<algorithm>

#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)



using namespace std;
using ll = long long;



void solve();

int main() {

   solve();
   return 0;

}

void solve() {

	ll n=0, max=0, min=0;

	while (cin >> n >> min >> max, n) {
		vector<ll> v(n+1);
		REP(i, n) {
			cin >> v[i+1];
		}

		ll g = -1e9, ans = 0;

		FOR(i, min , max+1) {
			if (g <= (v[i] - v[i + 1])) {
				g = (v[i] - v[i + 1]);
				ans = i;
			}
		}
		cout << ans << endl;
	}
}