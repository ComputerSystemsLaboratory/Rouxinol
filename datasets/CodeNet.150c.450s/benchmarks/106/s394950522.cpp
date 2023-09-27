#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> P;

int main() {
	ll a, b, c, cnt = 0;
	cin >> a >> b >> c;
	for (int i = 1; i <= c; i++) {
		if (c%i==0&&i >= a && i <= b)cnt++;
	}
	cout << cnt << endl;
	return 0;
}
