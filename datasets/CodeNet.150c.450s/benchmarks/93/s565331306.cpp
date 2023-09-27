#include<stdio.h>
#include<stdlib.h>
const int MAXSIZE = 100000 + 2;
const int INF = 2000000000;
struct Card {
	char type;
	int data;
}a[MAXSIZE],b[MAXSIZE];
struct Card L[MAXSIZE / 2 + 2], R[MAXSIZE / 2 + 2];
void Merge(struct Card A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++)R[i] = A[mid + i];
	L[n1].data = R[n2].data = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].data <= R[j].data) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
}
void Merge_sort(struct Card A[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		Merge_sort(A, left, mid);
		Merge_sort(A, mid , right);
		Merge(A, left, mid, right);
	}
}
int Partition(struct Card A[], int p, int r) {
	int x = A[r].data;
	int i = p - 1;
	struct Card temp;
	for (int j = p; j < r; j++) {
		if (A[j].data <= x) {
			i++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	temp = A[r];
	A[r] = A[i + 1];
	A[i + 1] = temp;
	return i + 1;
}
void Quick_sort(struct Card A[], int p, int r) {
	if (p < r) {
		int q = Partition(A, p, r);
		Quick_sort(A, p, q - 1);
		Quick_sort(A, q + 1, r);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char c[10]; int num;
		scanf("%s %d", c, &num);
		a[i].type = b[i].type = c[0];
		a[i].data = b[i].data = num;
	}
	Merge_sort(a, 0, n);
	Quick_sort(b, 0, n - 1);

	int stable = 1;
	for (int i = 0; i < n; i++) {
		if (a[i].type != b[i].type) {
			stable = 0; break;
		}
	}
	if (stable) {
		printf("Stable\n");
	}
	else {
		printf("Not stable\n");
	}
	for (int i = 0; i < n; i++) {
		printf("%c %d\n", b[i].type, b[i].data);
	}
	
	return 0;
}