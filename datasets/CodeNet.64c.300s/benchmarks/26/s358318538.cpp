#include <iostream>
#include <cmath>
#define X 1000000007
typedef long long ll;
using namespace std;

ll powdiv(ll m, ll n) {
		if (n == 1) {
				return m % X;
		}
		if (n % 2 == 0) {
				ll a = powdiv(m, n / 2) % X;
				return a * a % X;
		} else {
				ll a = powdiv(m, n / 2) % X;
				return a * a % X * m  % X;
		}
}

int main() {
		ll m, n;
		cin >> m >> n;

		cout << powdiv(m, n) << endl;

		return 0;
}