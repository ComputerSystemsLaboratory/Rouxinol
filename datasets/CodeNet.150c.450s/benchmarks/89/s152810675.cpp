#include<cstdio>
using namespace std;

int prime[10000];
int primeN = 0;

int main() {
	for (int i = 2; i < 100000; i++) {
		bool flag = true;
		for (int j = 0; j < primeN; j++) {
			if (i % prime[j] == 0) {
				flag = false;
				break;
			}
		}
		if (flag) prime[primeN++] = i;
	}
	int a, d, n;
	while (1) {
		scanf("%d%d%d", &a, &d, &n);
		if (a == 0) break;
		for (int i = a;; i += d) {
			if (i <= 1) continue;
			bool flag = true;
			for (int j = 0; prime[j] * prime[j] <= i; j++) {
				if (i % prime[j] == 0) {
					flag = false;
					break;
				}
			}
			if (flag) n--;
			if (n == 0) {
				printf("%d\n", i);
				break;
			}
		}
	}
}
