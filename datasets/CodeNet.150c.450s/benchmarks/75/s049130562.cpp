#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void maxHeapify(int *h, int i, int n){
	int l,r,largest;
	
	l = i*2;
	r = i*2+1;
	
	if(l<=n && h[l-1] > h[i-1]){
		largest = l;
	}else{
		largest = i;
	}
	if(r<=n && h[r-1] > h[largest-1]){
		largest = r;
	}
	if(largest != i){
		swap(h+i-1,h+largest-1);
		maxHeapify(h,largest,n);
	}
}

void buildMaxHeap(int *h, int n){
	for(int i = n/2;i>=1;--i){
		maxHeapify(h,i,n);
	}
}

int main() {
	int n,*h;
	cin>>n;
	h = new int[n];
	for(int i=0;i<n;++i){
		cin>>h[i];
	}
	buildMaxHeap(h,n);
	for(int i=0;i<n;++i)cout<<" "<<h[i];
	cout<<endl;
	return 0;
}