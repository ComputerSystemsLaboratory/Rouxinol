#include<cstdio>

int H;

int left(int i){
	return 2 * i;
}

int right(int i){
	return 2 * i + 1;
}

void maxHeapify(int A[],int i){
	int l = left(i);
	int r = right(i);
	int largest;
	if (l <= H && A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r <= H && A[r] > A[largest])
		largest = r;
	if (largest != i){
		int a = A[i];
		A[i] = A[largest], A[largest] = a;
		maxHeapify(A, largest);
	}
}

void buildMaxHeap(int A[]){
	for(int i = H / 2;i >= 1;i--)
		maxHeapify(A, i);
}

int main(void){
	scanf("%d", &H);
	int A[H], i;
	for(i = 1;i <= H;i++)
		scanf("%d", &A[i]);
	buildMaxHeap(A);
	for(i = 1;i <= H;i++)
		printf(" %d", A[i]);
	printf("\n");
	return 0;
}