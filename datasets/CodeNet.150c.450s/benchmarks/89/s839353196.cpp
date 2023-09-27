#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define RREP(i, a, n) for(int i=n-1; i>=a; i--)

bool prime[1000001];
void create_prime() {
	prime[0] = prime[1] = false;
	REP(i, 2, 1000001) prime[i] = true;

	for (int i = 2; i*i <= 1000001; i++) {
		for (int j = 2 * i; j < 1000001; j += i) {
			prime[j] = false;
		}
	}
	return;
}
int main() {
	create_prime();
	
	int a, d, n;
	while (cin >> a >> d >> n, a || d || n) {
		int cnt = 0, idx = a;
		while (cnt < n) {
			if (prime[idx]) cnt++;
			idx += d;
		}

		cout << idx - d << endl;
	}

	return 0;
}