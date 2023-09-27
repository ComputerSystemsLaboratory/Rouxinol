#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int A[200000];
int B[200000];

long long calc_num_of_invs(int begin, int end) {
	long long num_of_invs;

	if (begin == end) {
		return 0LL;
	}
	int mid = (begin + end) / 2;
	num_of_invs = calc_num_of_invs(begin, mid);
	num_of_invs += calc_num_of_invs(mid+1, end);
	int pB = 0;
	int pA1 = begin;
	int pA2 = mid + 1;
	while (pA1 <= mid && pA2 <= end) {
		if (A[pA1] < A[pA2]) {
			B[pB++] = A[pA1++];
		}
		else {
			num_of_invs += mid - pA1 + 1;
			B[pB++] = A[pA2++];
		}
	}
	if (pA1 > mid) {
		while (pA2 <= end) {
			B[pB++] = A[pA2++];
		}
	}
	else {
		while (pA1 <= mid) {
			B[pB++] = A[pA1++];
		}
	}
	pB = 0;
	for (int i = begin; i <= end; ++i) {
		A[i] = B[pB++];
	}

	return num_of_invs;
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	printf("%lld\n", calc_num_of_invs(0, n - 1));


	return 0;
}