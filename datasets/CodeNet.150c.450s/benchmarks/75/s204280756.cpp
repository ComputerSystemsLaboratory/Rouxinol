#include<iostream>
#include<vector>
#include<limits.h>
#include<queue>
#include<string>
using namespace std;

void maxHeapify(vector<int> &A, int i){
	int l=2*i+1;
	int r=2*i+2;
	int largest;
	int H=A.size();
	
	if ((l<=H-1)&&(A[l]>A[i])){
		largest=l;
	}else{
		largest=i;
	}
	
	if ((r<=H-1)&&(A[r]>A[largest])){
		largest=r;
	}
	if (largest!=i){
		swap(A[i], A[largest]);
		maxHeapify(A,largest);
	}
}

void buildMaxHeap(vector<int> &A){
	int i;
	int H=A.size();
	for (i=(H-2)/2;i>=0;i--){
		maxHeapify(A,i);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,i;
	cin >> n;
	vector<int> A(n);
	for (i=0;i<n;i++){
		cin >> A[i];
	}
	buildMaxHeap(A);
	for (i=0;i<n;i++){
		cout <<" "<<A[i];
		if (i==n-1) cout << endl;
	}
	return 0;
}