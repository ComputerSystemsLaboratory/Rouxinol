#include <iostream>
using namespace std;
int main() {
		int a, b, c = 0, d = 0;
		for (int i = 0; i < 4; i++) {
			cin >> a;
			c = c + a;
		}
		for (int i = 0; i < 4; i++) {
			cin >> b;
			d = d + b;
		}
		if (c < d)
			cout << d << endl;
		else {
			cout << c << endl;
		}
	return 0;
}