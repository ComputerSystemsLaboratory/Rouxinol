#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}