#include<iostream>
#include<cstdio>
using namespace std;
int N;
int parent(int i) { return i / 2; }
int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }

void maxHeapify(int A[], int i)
{
	int l = left(i);
	int r = right(i);
	int largest = 0;
	if (l <= N&&A[l] > A[i]) {
		largest = l;
	}
	else
		largest = i;
	if (r <= N&&A[r] > A[largest])
		largest = r;
	if (largest != i) {
		swap(A[largest], A[i]);
		maxHeapify(A, largest);
	}
}
int main()
{
	scanf("%d", &N);
	int A[500000];
	for (int i = 1; i <= N; i++)
		scanf("%d", &A[i]);
	for (int i = N / 2; i >= 1; i--)
		maxHeapify(A, i);
	for (int i = 1; i <= N; i++) {
		printf(" ");
		printf("%d", A[i]);
	}
	printf("\n");
	return 0;
}