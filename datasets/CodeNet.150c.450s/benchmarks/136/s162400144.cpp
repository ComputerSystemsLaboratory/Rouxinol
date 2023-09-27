#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main() {
	ll a, b;
	while (cin >> a >> b) {
		cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
	return 0;
}