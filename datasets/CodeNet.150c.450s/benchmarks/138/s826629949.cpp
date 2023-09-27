#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B

int gcd(int a, int b) {
	if (b == 0) return a;
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}