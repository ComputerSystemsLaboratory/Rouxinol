#include <iostream>
#include <stdio.h>
#define MAX_NODES 500000

using namespace std;
//think easy make easy

int n;//num of nodes

void maxHeapify(int A[],int i){//i is index of root
	int l,r;
	int largest;
	int tmp;

	l = 2 * i;
	r = l + 1;

	if(l <= n && A[l] > A[i]) largest = l;
	else largest = i;

	if(r <= n && A[r] > A[largest]) largest = r;

	if(largest != i){
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		maxHeapify(A,largest);
	}

	
}

void buildMaxHeap(int A[]){
	for(int i=n/2;i>0;i--){//1~n/2が左右の子少なくとも一方が存在する範囲
		maxHeapify(A,i);
	}
}

int main(){
	//1オリジン(添え字が1からはじまる)のためナル文字分の+1に加えさらに+1する
	int H[MAX_NODES+1+1];
	
	scanf("%d",&n);

	for(int i=1;i<=n;i++) scanf("%d",&H[i]);//1オリジンであることに注意

	buildMaxHeap(H);

	for(int i=1;i<=n;i++) cout <<" " <<H[i];
	cout <<endl;

	return 0;
}