#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int a, b, c=1, GCD, LCM ,  d ,e;

	while (cin >> a >> b) {
		d = a;
		e = b;
		while (c) {
			c = a % b;
			if (c == 0) {
				GCD = b;
				break;
			}
			else {
				a = b;
				b = c;
			}
		}
		d /= GCD;
		e /= GCD;
		LCM = d * e * GCD;

		cout << GCD << " " << LCM << endl;
		c = 1;
	}

	return 0;

}