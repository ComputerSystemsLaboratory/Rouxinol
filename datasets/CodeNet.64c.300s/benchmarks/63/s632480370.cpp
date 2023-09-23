#include <stdio.h>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
int main() {
	ll a, b;
	while(scanf("%lld %lld", &a, &b) != EOF) {
		if(a < b) swap(a, b);
		ll m = a, n = b;
		while(n) {
			ll t = m / n;
			swap(m -= t * n, n);
		}
		printf("%ld ", m);
		ll c = b / m;
		cout << a * c << endl;
	}
	return 0;
}