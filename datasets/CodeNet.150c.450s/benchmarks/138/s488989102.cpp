#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y) {
	if (x >= y) {
		ll q0 = x;
		ll q1 = y;
		while (q1 > 0) {
			ll tmp = q0;
			q0 = q1;
			q1 = tmp%q1;
		}
		return q0;
	}
	else gcd(y, x);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll x, y;
	cin >> x >> y;
	cout << gcd(x, y) << "\n";

	return 0;
}
