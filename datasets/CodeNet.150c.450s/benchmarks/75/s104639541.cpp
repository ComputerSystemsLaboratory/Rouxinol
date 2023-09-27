#include <bits/stdc++.h>
using namespace std;

int heap[500001];
int H;

int left(int i){
	return i * 2;
}
int right(int i){
	return i * 2 + 1;
}

void maxHeapify(int* A,int i){
	int l = left(i);
	int r = right(i);

	int largest;
	if(l <= H && A[l] >= A[i]){ 
		largest = l;
	}
	else{
		largest = i;
	}
	if(r <= H && A[r] > A[largest]){
		largest = r;
	}
	if(largest != i){
		int tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		maxHeapify(A,largest);
	}
}
void buildMaxHeap(int* A){
	for(int i = H / 2; i > 0; i--){
		maxHeapify(A,i);
	}
}

int main(){
	scanf("%d",&H);
	for(int i = 1; i <= H; i++){
		scanf("%d",&heap[i]);
	}
	buildMaxHeap(heap);

	for(int i = 1; i <= H; i++){
		printf(" %d",heap[i]);
	}
	printf("\n");

	return 0;
}

