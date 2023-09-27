#include <iostream>
#include <string>

using namespace std;

int keisan(string a) {
	int counter = 0;
	int counter2 = 1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'm') {
			counter += counter2 * 1000;
			counter2 = 1;
		} else if (a[i] == 'c') {
			counter += counter2 * 100;
			counter2 = 1;
		} else if (a[i] == 'x') {
			counter += counter2 * 10;
			counter2 = 1;
		} else if (a[i] == 'i') {
			counter += counter2;
			counter2 = 1;
		} else {
			counter2 = a[i]-'0';
		}
	}
	return counter;
}

int main() {
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		int aa, bb;
		aa = keisan(a);
		bb = keisan(b);
		int c = aa+bb;
		if (c/1000 > 1) {
			cout << c/1000 << 'm';
		} else if (c/1000 == 1) {
			cout << 'm';
		}
		c %= 1000;
		if (c/100 > 1) {
			cout << c/100 << 'c';
		} else if (c/100 == 1) {
			cout << 'c';
		}
		c %= 100;
		if (c/10 > 1) {
			cout << c/10 << 'x';
		} else if (c/10 == 1) {
			cout << 'x';
		}
		c %= 10;
		if (c > 1) {
			cout << c << 'i';
		} else if (c == 1) {
			cout << 'i';
		}
		cout << endl;
	}
	return 0;
}