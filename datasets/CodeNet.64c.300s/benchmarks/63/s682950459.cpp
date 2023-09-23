#include <iostream>
#include <algorithm>
using namespace std;
int gcd (int a, int b) {
	for (;;) {
		if (!(a %= b)) return b;
		if (!(b %= a)) return a;
	}
}
int main () {
	int a, b, n, m;
	while (cin >> a >> b) {
		m = (n = gcd (a, b)) ? a/n*b : 0;
		cout << n << " " << m << endl;
	}
}