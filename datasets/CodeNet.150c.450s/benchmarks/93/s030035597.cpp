#include <cstdio>
#include <algorithm>

#define MAX 100000
#define SENTINEL 2000000000

struct Card {
	char suit;
	int value;
};

Card L[MAX / 2 + 2], R[MAX / 2 + 2];

int partition(Card *A, int n, int p, int r) {
	Card x = A[r];
	int i = p - 1;
	Card t;
	for (int j = p; j < r; j++) {
		if (A[j].value <= x.value) {
			i++;
			//t = A[i]; A[i] = A[j]; A[j] = t;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i + 1], A[r]);
	//t = A[i+1]; A[i+1] = A[r]; A[r] = t;
	return i + 1;
}

void merge(Card *A, int n, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1].value = R[n2].value = SENTINEL;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].value <= R[j].value) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
	return;
}

void quickSort(Card *A, int n, int p, int r) {
	if (p < r) {
		int q = partition(A, n, p, r);
		quickSort(A, n, p, q - 1);
		quickSort(A, n, q + 1, r);
	}
	return;
}

void mergeSort(Card *A, int n, int left, int right) {
	if (left+1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, n, left, mid);
		mergeSort(A, n, mid, right);
		merge(A, n, left, mid, right);
	}
	return;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	Card A[MAX], B[MAX];
	char ctmp[10];
	int vtmp=0;
	for (int i = 0; i < n; i++) {
		scanf("%s %d", ctmp, &vtmp);
		A[i].suit = B[i].suit = ctmp[0];
		A[i].value = B[i].value = vtmp;
	}
	mergeSort(A,n,0,n);
	quickSort(B, n, 0, n - 1);
	int stable = 1;
	for (int i = 0; i < n; i++) {
		if (A[i].suit != B[i].suit) {
			stable = 0;
		}
	}
	if (stable) printf("Stable\n");
	else printf("Not stable\n");

	for (int i = 0; i < n; i++) {
		printf("%c %d\n", B[i].suit, B[i].value);
	}
	return 0;
}