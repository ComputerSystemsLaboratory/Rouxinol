#include <iostream>
using namespace std;

int main() {
	long long a,b;
	while (cin >> a >> b) {
		long long gcd,lcm;
		// ??????????????????????????????
		long q = max (a,b);
		long r = min (a,b);
		for (;;) {
			if (r == 0) break;
			long new_r;
			new_r = q % r;
			q = r;
			r = new_r;
		}
		gcd = q;
		lcm = a * b / gcd;
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}