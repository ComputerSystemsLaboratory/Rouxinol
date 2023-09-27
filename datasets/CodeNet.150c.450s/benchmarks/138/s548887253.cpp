#include <iostream>
using namespace std;

int gcd( int a, int b) {
	if (b > a) swap(a, b);
	while (b >0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int a, b, s;
	cin >> a;
	cin >> b;

	s = gcd(a,b);

	cout << s << endl;
	return 0;
}