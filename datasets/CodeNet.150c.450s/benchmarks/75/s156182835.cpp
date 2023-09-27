#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#define N 500000
#define NIL 2000000001
using namespace std;

int n;

void swap(int *,int *);
void maxHeapify(int [],int);
void buildMaxHeap(int []);

int main(){
	int heap[N];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>heap[i];
	}
	buildMaxHeap(heap);
	for(int i=1;i<=n;i++){
		cout<<" "<<heap[i];
	}
	cout<<endl;
	return 0;
}

void maxHeapify(int a[],int i){
	int l=2*i;
	int largest;
	int r=2*i+1;
	if( l <= n && a[l]>a[i]) largest=l;
	else largest=i;

	if(r<=n && a[r]>a[largest]) largest=r;

	if(largest!=i){
		swap(&a[i],&a[largest]);
		maxHeapify(a,largest);
	}
}

void buildMaxHeap(int a[]){
	for(int i=n/2;i>=1;i--) maxHeapify(a,i);
}


void swap(int *a,int *b){
	int w=*a;
	*a=*b;
	*b=w;
}