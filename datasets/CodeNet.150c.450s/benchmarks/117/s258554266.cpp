#include <cstdio>

#define N_MAX 500000
#define A_MAX 2000000000

int A[N_MAX], A1[N_MAX / 2 + 2], A2[N_MAX / 2 + 2];
int cnt = 0;

void myPrint(int n, int A[]) {
	for (int i = 0; i < n; i++) {
		if (i != 0) printf(" ");
		printf("%d", A[i]);
	}
	printf("\n");
}

void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) A1[i] = A[left + i];
	for (int i = 0; i < n2; i++) A2[i] = A[mid + i];
	A1[n1] = A2[n2] = A_MAX;
	int i1 = 0, i2 = 0;
	for (int i = left; i < right; i++) {
		cnt++;
		if (A1[i1] <= A2[i2]) {
			A[i] = A1[i1++];
		}
		else {
			A[i] = A2[i2++];
		}
	}
}

void mergeSort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);

	mergeSort(0, n);
	myPrint(n, A);
	printf("%d\n", cnt);

	return 0;
}