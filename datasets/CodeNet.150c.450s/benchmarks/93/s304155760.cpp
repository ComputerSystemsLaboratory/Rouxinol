#include <cstdio>
#define MAX 100000
#define INF 999999
using namespace std;

typedef struct {
	char suit;
	int num;
} Card;

//int n;
//Card A[MAX], B[MAX];

void print(Card arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%c %d\n", arr[i].suit, arr[i].num);
	}
}

void swap(Card *a, Card *b)
{
	int ch;
	int num;
	
	ch = a->suit;
	a->suit = b->suit;
	b->suit = ch;
	
	num = a->num;
	a->num = b->num;
	b->num = num;
	
}

int Partition(Card arr[], int p, int r)
{
	int x = arr[r].num;
	int i = p-1;
	
	for (int j = p; j < r; j++) {
		if (arr[j].num <= x) {
			i++;
			swap(&arr[j], &arr[i]);
		}
		//test_def
		//print(arr, n);
		//test_end
	}
	swap(&arr[i+1], &arr[r]);
	
	return i+1;
}

void QuickSort(Card arr[], int p, int r)
{
	if (p < r) {
		int q = Partition(arr, p, r);
		QuickSort(arr, p, q-1);
		QuickSort(arr, q+1, r);
	}
}

void merge(Card arr[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	Card L[n1+1];
	Card R[n2+1];
	
	L[n1].num = R[n2].num = INF;
	for (int i = 0; i < n1; i++) {
		L[i].suit = arr[left+i].suit;
		L[i].num = arr[left+i].num;
	} 
	for (int i = 0; i < n2; i++) {
		R[i].suit = arr[mid+i].suit;
		R[i].num = arr[mid+i].num;
	}
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].num <= R[j].num) {
			arr[k].suit = L[i].suit;
			arr[k].num = L[i].num;
			i++;
		}
		else {
			arr[k].suit = R[j].suit;
			arr[k].num = R[j].num;
			j++;
		}
	}
}

void MergeSort(Card arr[], int left, int right)
{
	if (left+1 < right) {
		int mid = (left+right)/2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid, right);
		merge(arr, left, mid, right);
	}
}

bool isEqual(Card A[], Card B[], int n)
{
	for (int i = 0; i < n; i++) {
		if (A[i].suit != B[i].suit) {
			return false;
		}
	}
	
	return true;
}

int main(void)
{
	Card A[MAX], B[MAX];
	int n;
	
	scanf("%d", &n);
	while (getchar() != '\n');
	for (int i = 0; i < n; i++) {
		scanf("%c %d%*c", &A[i].suit, &A[i].num);
		B[i].suit = A[i].suit;
		B[i].num = A[i].num;
	}

	MergeSort(A, 0, n);
	QuickSort(B, 0, n-1);
	if (isEqual(A, B, n) == true) {
		printf("Stable\n");
	}
	else {
		printf("Not stable\n");
	}
	print(B, n);
	
	//test_def
	//putchar('\n');
	//print(A, n); 
	//putchar('\n');
	//print(B, n);
	//test_end
	
	return 0;
}

/*
S 3
C 3
H 4
D 4
S 4
C 5
S 2
C 2
H 3
D 3
C 5
C 3
H 4
D 4
S 4
C 4
H 5
D 5
S 5
C 5
*/
