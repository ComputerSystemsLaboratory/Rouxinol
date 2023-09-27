#include <cstdio>
#include <vector>
using namespace std;

int H;

void maxHeapify(vector<int>& A, int i) {
	int l=2*i;
	int r=2*i+1;
	int largest;

	if(l<=H && (A[l]>A[i])) {
		largest = l;
	} else {
		largest = i;
	}

	if(r<=H && (A[r]>A[largest])) {
		largest = r;
	}

	if(largest!=i) {
		swap(A[i],A[largest]);
		maxHeapify(A,largest);
	}
	return;
}

void buildMaxHeap(vector<int>& A) {
	for(int i=H/2; i>=1; --i) {
		maxHeapify(A,i);
	}
	return;
}

int main() {
	int i;
	vector<int> A;
	scanf("%d",&H);
	A.resize(H+1);
	for(i=1; i<=H; ++i) {
		scanf("%d",&A[i]);
	}
	buildMaxHeap(A);
	for(i=1; i<=H; ++i) {
		printf(" %d",A[i]);
	}
	printf("\n");
	return 0;
}