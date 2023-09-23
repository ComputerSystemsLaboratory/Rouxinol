#include <iostream>

using namespace std;

long long int kaidan (int n) {
	if (n == 0) {
		return 1;
	} else {
		if (n >= 3) {
			return kaidan(n-3)+kaidan(n-2)+kaidan(n-1);
		} else if (n > 1) {
			return kaidan(n-2)+kaidan(n-1);
		} else {
			return kaidan(n-1);
		}
	}
}


int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		long long int a = kaidan(n);
		long long int b;
		b = a / 10;
		if (a % 10 != 0) {
			b++;
		}
		a = b / 365;
		if (b % 365 != 0) {
			a++;
		}
		cout << a << endl;
	}
	return 0;
}