#include<iostream>
using namespace std;
bool isprime[1000005];
int prime[1000005];
void sieve() {
	for (int i = 0; i <= 1000000; i++) isprime[i] = true;
	isprime[0] = isprime[1] = false;
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= 1000000; i++) {
		if (isprime[i]) {
			prime[i] = prime[i - 1] + 1;
			for (int j = 2 * i; j <= 1000000; j += i) isprime[j] = false;
		}
		else prime[i] = prime[i - 1];
	}
}
int main() {
	sieve();
	int n;
	while (cin >> n) {
		cout << prime[n] << endl;
	}
}