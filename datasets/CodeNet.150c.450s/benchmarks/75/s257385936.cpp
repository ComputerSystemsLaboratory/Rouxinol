#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

int H = 0;

//1  maxHeapify(A, i)
//2      l = left(i)
//3      r = right(i)
//4      // select the node which has the maximum value
//5      if l ≤ H and A[l] > A[i]
//6          largest = l
//7      else
//8          largest = i
//9      if r ≤ H and A[r] > A[largest]
//10         largest = r
//11
//12     if largest ≠ i　// value of children is larger than that of i
//13         swap A[i] and A[largest]
//14         maxHeapify(A, largest) // call recursively
void maxHeapify(int A[], int i){
	int l = 2*i;
	int r = l+1;

	int largest = (l <= H && A[l] > A[i]) ? l : i;
	if(r <= H && A[r] > A[largest]) largest = r;
	if(largest != i){
		swap(A[i], A[largest]);
		maxHeapify(A, largest);
	}
}

//1 buildMaxHeap(A)
//2    for i = H/2 downto 1
//3        maxHeapify(A, i)
void buildMaxHeap(int A[]){
	for(int i = H/2; i > 0; i--)
		maxHeapify(A, i);
}

int main(){
	cin >> H;
	int A[H+1];
	for(int i = 1; i <= H; i++){
		cin >> A[i];
	}

	buildMaxHeap(A);
	for(int i = 1; i <= H; i++){
		printf(" %d", A[i]);
	}
	printf("\n");
	return 0;
}

