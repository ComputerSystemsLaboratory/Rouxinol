#include<iostream>
using namespace std;;

int main() {
	int n;
	while (cin >> n) {
		int  i, j, p;
		p = 0;
		bool isprime[1000000];
		for (i = 0; i <= n; i++) {
			isprime[i] = true;
		}
		isprime[0] = false;
		isprime[1] = false;
		for (j = 2; j <= n; j++) {
			if (isprime[j]) {
				for (i = 2; i*j <= n; i++) {
					isprime[i*j] = false;
				}
				p++;
			}
		}
		cout << p << endl;
	}
	return 0;
}