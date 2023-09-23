#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int is_prime[1000000];

int main() {
	memset(is_prime, 1, sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < 1000000; i++) {
		if (is_prime[i]) {
			for (int j = i * 2; j < 1000000; j += i)is_prime[j] = false;
		}
	}
	int a, d, n;
	while (scanf("%d%d%d", &a, &d, &n), a) {
		int cnt = 0;
		for (int i = a;; i += d) {
			if (is_prime[i])cnt++;
			if (cnt == n) {
				printf("%d\n", i);
				break;
			}
		}
	}
}