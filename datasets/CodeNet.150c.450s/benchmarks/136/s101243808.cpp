#include <iostream>
#include <cmath>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0005

long int gcd(int a, int b) {
	if (a < 0) a *= -1;
	if (b < 0) b *= -1;
	if (a < b) {
		int t = a;
		a = b; 
		b = t;
	}
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		int g = gcd(a, b);
		cout << g << " " << (a / g * b) << endl;
	}
	return 0;
}