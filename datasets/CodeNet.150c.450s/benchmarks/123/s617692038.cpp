#include<cstdio>
using namespace std;
int prime[10000];
int p[10000];
int c[10000];
int main() {
	for (int i = 2; i*i < 10000; i++) {
		for (int j = i*i; j < 10000; j += i) prime[j] = 1;
	}
	int cnt = 0;
	for (int i = 2; i < 10000; i++) {
		if (prime[i] == 0) {
			p[cnt] = i; cnt++;
		}
	}
	int n, q, z = 0;
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &n); bool OK = true;
		for (int j = 0; j < cnt; j++) {
			if (n < p[j]*p[j])break;
			if (n%p[j] == 0)OK = false;
		}
		if (OK == true)z++;
	}
	printf("%d\n", z);
	return 0;
}