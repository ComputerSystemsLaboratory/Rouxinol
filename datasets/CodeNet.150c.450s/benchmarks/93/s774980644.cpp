#include<stdio.h>
#include<iostream>
#define MAX 100000
#define SENTINEL 2000000000
using namespace std;

struct Card {
	char suit;
	int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card A[], int n, int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left;
	int n2 = right - mid;
	for (i = 0; i < n1; i++)L[i] = A[left + i];
	for (i = 0; i < n2; i++)R[i] = A[mid + i];
	L[n1].value = R[n2].value = SENTINEL;
	i = j = 0;
	for (k = left; k < right; k++) {
		if (L[i].value <= R[j].value) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
}

void mergesort(struct Card A[], int n, int left, int right)
{
	int mid;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		mergesort(A, n, left, mid);
		mergesort(A, n, mid, right);
		merge(A, n, left, mid, right);
	}
}

int Partition(struct Card A[], int n,int p, int r)
{
	int i, j ;
	struct Card t, x;
	x = A[r];
	i = p - 1;
	for (j = p; j < r; j++) {
		if (A[j].value <= x.value) {
			i++;
			t = A[i]; A[i] = A[j]; A[j] = t;
		}
	}
	t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;
	return i + 1;
}

void QSort(struct Card A[], int n, int p,int r)
{
	int q;
	if (p < r) {
		q = Partition(A,n,p, r);
		QSort(A,n,p, q - 1);
		QSort(A,n,q + 1, r);
	}
}

int main()
{
	int n, i, v;
	struct Card A[MAX], B[MAX];
	char S[10];
	int stable = 1;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s %d", S, &v);
		A[i].suit = B[i].suit = S[0];
		A[i].value = B[i].value = v;
	}

	mergesort(A, n, 0, n);
	QSort(B, n, 0, n - 1);

	for (i = 0; i < n; i++) {
		if (A[i].suit != B[i].suit)stable = 0;
	}

	if (stable == 1)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (i = 0; i < n; i++) {
		cout << B[i].suit <<" "<< B[i].value<<endl;
	}
	return 0;
}
