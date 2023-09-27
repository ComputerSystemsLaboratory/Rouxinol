#include <cstdio>
using namespace std;
#define SENTINEL 2000000000
#define MAX 100000

struct Card
{
	int value;
	char mark;
};
Card L[MAX / 2 + 2], R[MAX / 2 + 2];
int cnt;

void merge(Card A[], int n, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1].value = R[n2].value = SENTINEL;

	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		cnt++;
		if (L[i].value <= R[j].value) A[k] = L[i++];
		else A[k] = R[j++];
	}
}

void mergeSort(Card A[], int n, int left, int right)
{
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, n, left, mid);
		mergeSort(A, n, mid, right);
		merge(A, n, left, mid, right);
	}
}

void show(Card A[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%c %d\n", A[i].mark, A[i].value);
}

int partition(Card A[], int p, int r)
{
	int x = A[r].value;//???????????????????????????????´????
	int i = p - 1;//x??\??????????´????????°??????????
	Card cmp;

	//j???x????????§??????????´????????°??????????
	for (int j = p; j < r; j++) {
		if (A[j].value <= x) {
			i++;
			cmp = A[j];
			A[j] = A[i];
			A[i] = cmp;
		}
	}
	cmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = cmp;
	return i + 1;
}

void quickSort(Card A[], int p, int r)
{
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int main()
{
	static Card A[MAX], B[MAX];
	int n, v;
	char m[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", m, &v);
		A[i].mark = B[i].mark = m[0];
		A[i].value = B[i].value = v;
	}
	
	mergeSort(A, n, 0, n);
	quickSort(B, 0, n - 1);

	for (int i = 0; i < n; i++) {
		if (A[i].mark != B[i].mark) {
			printf("Not stable\n");
			break;
		}
		if (i == n - 1) printf("Stable\n");
	}
	show(B, n);
	return 0;
}