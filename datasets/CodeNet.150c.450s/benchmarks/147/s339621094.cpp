#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define endl "\n"
#define goat() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);srand(time(NULL))
typedef long long ll;

int main() {
	goat();
	ll n, i, x, y, z, c = 0;
	cin >> n;
	unordered_map<ll, ll>mp;
	for (x = 1; x <= 100; x++) {
		for (y = 1; y <= 100; y++) {
			for (z = 1; z <= 100; z++) {
				ll s = 0;
				s += x * x;
				s += y * y;
				s += z * z;
				s += x * y;
				s += y * z;
				s += x * z;
				mp[s]++;
			}
		}
	}
	for (i = 1; i <= n; i++) {
		cout << mp[i] << endl;
	}
}