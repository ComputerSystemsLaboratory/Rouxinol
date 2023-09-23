#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

bool is_prime[1000000];
int prime[1000000];

int main() {
	int n;
	rep(i, 1000000)is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	int p = 0;
	for (int i = 2; i < 1000000; i++) {
		if (is_prime[i]) {
			prime[p++] = i;
			for (int j = 2 * i; j < 1000000; j += i)is_prime[j] = false;
		}
	}
	while (cin >> n) {
		cout << upper_bound(prime, prime + p, n) - prime << endl;
	}
	return 0;
}