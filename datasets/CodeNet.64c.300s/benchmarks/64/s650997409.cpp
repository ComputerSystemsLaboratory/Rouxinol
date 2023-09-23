#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long a, b;
	while (cin >> a >> b) {
		long long gcd;
		long long c = max(a, b);
		long long d = min(a, b);
		while (true) {
			if (c % d == 0) {
				gcd = d;
				goto C;
			}
			else {
				c -= d;
				if (c <= d) {
					swap(c, d);
				}
			}
		}
	C:
		cout << gcd  << endl;
	}
}