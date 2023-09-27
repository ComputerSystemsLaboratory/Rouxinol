#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<math.h>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#include<unordered_map>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rep2(i,n) for(int i = (n - 1); i >= 0; i--)
#define PI 3.141592653589793

using namespace std;
using ll = long long;

int to[200000];

int main() {

	ll n, ans = 0;
	cin >> n;
	vector<ll> re;

	rep(i, n) {
		ll x;
		cin >> x;
		to[x]++;
		ans += x;
		if (to[x] == 1) {
			re.push_back(x);
		}
	}

	ll q;
	cin >> q;
	rep(i, q) {
		ll b, c;
		cin >> b >> c;
		ans -= to[b] * b;
		ans += to[b] * c;
		to[c] += to[b];
		to[b] = 0;
		cout << ans << endl;
	}



	return 0;
}