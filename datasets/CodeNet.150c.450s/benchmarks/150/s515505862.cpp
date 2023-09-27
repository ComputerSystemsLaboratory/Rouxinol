#include <cstdio>
using namespace std;

#define MAX 200001
#define VAL_MAX 10000

int main() {
	int n = 0;
	scanf("%d", &n);
	int *A = new int[n+1];
	int count[VAL_MAX+1] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		count[A[i]]++;
	}
	// ??¨???
	for (int i = 1; i < VAL_MAX+1; i++) {
		count[i] += count[i - 1];
	}
	// sort
	int *out = new int[n + 1];
	for (int i = n - 1; 0 <= i; i--) {
		// out[c[a[i]]] ???????´?
		out[count[A[i]]] = A[i];
		count[A[i]]--;
	}

	for (int i = 1; i <= n; i++) {
		if (i-1) printf(" ");
		printf("%d", out[i]);
	}
	printf("\n");
	return 0;
}