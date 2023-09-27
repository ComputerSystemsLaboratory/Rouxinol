#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll n, res = 100000;
	cin >> n;
	while (n--) {
		res = (res + res / 20 + 999) / 1000 * 1000;
	}
	cout << res << endl;
	return 0;
}