#include <stdio.h>

int n, A[11234], B[11234];
int ans[2];

int main(void) {
	while (true) {
		ans[0] = ans[1] = 0;
		scanf("%d", &n);
		if (n == 0) { break; }
		for (int i = 0; i < n; ++i) { scanf("%d%d", &A[i], &B[i]); }

		for (int i = 0; i < n; ++i) {
			if (A[i] > B[i]) { ans[0] += A[i] + B[i]; }
			else if (A[i] < B[i]) { ans[1] += A[i] + B[i]; }
			else { ans[0] += A[i], ans[1] += B[i]; }
		}

		printf("%d %d\n", ans[0], ans[1]);
	}
	return 0;
}