#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
#include<cmath>

using namespace std;
#define ll long long
#define ff first
#define ss second
#define e endl

void solve() {
	ll n; cin >> n;
	ll a[100001];
	unordered_map<ll, ll> m;
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
		sum += a[i];
	}
	ll q; cin >> q;
	while (q--) {
		ll b, c; cin >> b >> c;
		ll temp = m[b];
		m[b] = 0;
		m[c] += temp;
		sum += temp * (c - b);
		cout << sum << e;
	}

}

int main()
{
	//ll t; cin >> t; while (t--)
	solve();
	
}