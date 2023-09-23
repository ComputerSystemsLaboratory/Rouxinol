#include<iostream>
#include<cstdio>
#define MAX 500000+5
using namespace std;
int heap[MAX];
int num;
void maxheapify(int i){
	int largest;
	int left=i*2;int right=i*2+1;
	if(left<=num&&heap[left]>heap[i]){
		largest=left;
	}else{
		largest=i;
	}
	if(right<=num&&heap[largest]<heap[right]){
		largest=right;
	}
	if(largest!=i){
		swap(heap[largest],heap[i]);
		maxheapify(largest);
	}
	return;
}
int main(){
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		scanf("%d",&heap[i]);
	}
	for(int i=num/2;i>=1;i--){
		maxheapify(i);
	}
	for(int i=1;i<=num;i++){
		cout<<" "<<heap[i];
	}
	cout<<endl;
}
