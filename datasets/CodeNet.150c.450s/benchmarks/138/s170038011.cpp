#include <iostream>

#define rep(i, first, to) for(ll i = first; i < to; ++i)

using namespace std;
typedef long long ll;

int gcd(int x, int y) {
	if (x == 0) {
		return y;
	}
	return gcd(y % x,x);
}
int main() {
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
}