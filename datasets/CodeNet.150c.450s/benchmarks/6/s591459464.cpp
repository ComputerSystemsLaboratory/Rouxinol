#include <iostream>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> P;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll a, b, c;
	cin >> a >> b >> c;
	cout << ((a < b&&b < c) ? "Yes" : "No") << endl;
	return 0;
}
