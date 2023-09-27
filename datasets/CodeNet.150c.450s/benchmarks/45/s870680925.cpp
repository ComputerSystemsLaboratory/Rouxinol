#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

ullong d = 1000000007;

ullong power(int m, int n) {
	ullong v = 1;

	if (n > 0) {
		v = power(m, n / 2);
		if (n % 2 == 0) {
			v = (v * v) % d;
		} else {
			v = (((v * v) % d) * m) % d;
		}
	}
	return v;
}

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	cout << power(m, n) << endl;

	return 0;
}