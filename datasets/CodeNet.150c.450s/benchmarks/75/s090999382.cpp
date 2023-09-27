#include <stdio.h>

#define N 5000000

int n;
int A[N];

void maxHeap(int i){
	int l = i*2;
	int r = i*2 + 1;
	int largest = i;
	int tmp;
	if(l <= n && A[l]>A[i]) largest = l;
	else largest = i;
	if(r <= n && A[r]>A[largest]) largest = r;

	if(largest != i) {
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		maxHeap(largest);
	}
}

void buildHeap(){
	int i;
	for(i=n/2;i>0;i--){
		maxHeap(i);
	}
}

int main(){
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	buildHeap();
	for(i=1;i<=n;i++){
		printf(" %d",A[i]);
	}
	printf("\n");
	return 0;

}