#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m, l;
	cin >> n >> m >> l;
	const ll max_ = 100;
	ll a[max_][max_];
	ll b[max_][max_];
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}
	
	
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < l; j++) {
			ll c = 0;
			for (ll k = 0; k < m; k++) {
				c += a[i][k] * b[k][j];
			}
			if (j != l - 1)cout << c << " ";
			else cout << c << endl;
		}
	}

    return 0;
}