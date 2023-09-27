#include <cstdio>

#define NMAX 200000
#define SENTINEL 2000000000

typedef long long llong;

int A[NMAX], L[(NMAX / 2) + 2], R[(NMAX / 2) + 2];

llong merge(int left, int mid, int right) {
	llong cnt = 0;
	int nl = mid - left;
	int nr = right - mid;
	for (int i = 0; i < nl; i++) L[i] = A[left + i];
	for (int i = 0; i < nr; i++) R[i] = A[mid + i];
	L[nl] = R[nr] = SENTINEL;
	int j = 0, k = 0;
	for (int i = left; i < right; i++) {
		if (L[j] < R[k]) {
			A[i] = L[j++];
		}
		else {
			A[i] = R[k++];
			cnt += nl - j;
		}
	}
	return cnt;
}

llong mergeSort(int left, int right) {
	llong c1, c2, c3;
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		c1 = mergeSort(left, mid);
		c2 = mergeSort(mid, right);
		c3 = merge(left, mid, right);
		return c1 + c2 + c3;
	}
	else {
		return 0;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", A + i);

	llong cnt = mergeSort(0, n);
	printf("%lld\n", cnt);

	return 0;
}
