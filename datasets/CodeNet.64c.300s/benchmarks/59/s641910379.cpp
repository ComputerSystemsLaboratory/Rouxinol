#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int i, j;
	int n;
	int A[10000];
	int res = 0;
	bool prime;

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", A + i);
	}

	for (i = 0;i < n;i++) {
		prime = true;
		for (j = 2;j <= (int)sqrt(A[i]);j++) {
			if (A[i] % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime)res++;
	}

	printf("%d\n", res);

	return 0;
}