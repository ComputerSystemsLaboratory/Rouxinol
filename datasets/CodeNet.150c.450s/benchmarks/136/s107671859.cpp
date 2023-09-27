#include <iostream>
using namespace std;
long GCDr(long m, long n) {
	int r;
	if (m < n) {
		swap(m, n);
	}
	while (n > 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int main() {
	long long a, b;
	while (cin >> a >> b) {
		long long GCD, LCM;
		if (a == b) {
			//a=b??????????????????
			GCD = a;
			LCM = a;
		}
		else {
			GCD = GCDr(a, b);
		}
		LCM = a * b / GCD;
		cout << GCD << " " << LCM << endl;
	}
}