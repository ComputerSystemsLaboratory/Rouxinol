#include <stdio.h>
#include <algorithm>

int A[4], B[4];

int main(void) {
	for (int i = 0; i < 4; ++i) { scanf("%d", &A[i]); }
	for (int i = 0; i < 4; ++i) { scanf("%d", &B[i]); }

	printf("%d\n", std::max(A[0] + A[1] + A[2] + A[3], B[0] + B[1] + B[2] + B[3]));
	return 0;
}