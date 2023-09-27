#include <stdio.h>

#define MAX 100000
#define SENTINEL 2147483647 

typedef struct tagCard{
	char m;
	int n;
}CARD;

CARD A[MAX], B[MAX];
CARD L[MAX/2+2], R[MAX/2+2];
int cnt = 0;

void merge(CARD A[], int left, int mid, int right)
{
	int n1, n2;
	int i, j, k;
	n1 = mid - left;
	n2 = right - mid;
	for (i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	L[i].n = SENTINEL;
	for (i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	R[i].n = SENTINEL;
	for (i = 0, j = 0, k = left; k < right; k++) {
		cnt++;
		if (L[i].n <= R[j].n) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
	}

}

void mergeSort(CARD A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(CARD C[], int p, int r)
{
	int i = p - 1;
	int j = 0;
	int x = C[r].n;
	CARD temp;

	for (j = p; j < r; j++)
	{
		if (C[j].n <= x)
		{
			i++;
			temp = C[i];
			C[i] = C[j];
			C[j] = temp;
		}
	}
	temp = C[i + 1];
	C[i + 1] = C[r];
	C[r] = temp;
	return i + 1;
}

void quicksort(CARD A[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
	return;
}

int main()
{
	int i, n;
	char mark[2];
	int value;
	int isStable = 1;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %d", mark, &value);
		A[i].m = B[i].m = mark[0];
		A[i].n = B[i].n = value;
	}
	mergeSort(A, 0, n);
	quicksort(B, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		if (A[i].n == B[i].n)
		{
			if (A[i].m != B[i].m)
			{
				isStable = 0;
				break;
			}
		}
	}
	if (isStable)
	{
		printf("Stable\n");
	}
	else
	{
		printf("Not stable\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("%c %d\n", B[i].m, B[i].n);
	}
	return 0;
}
