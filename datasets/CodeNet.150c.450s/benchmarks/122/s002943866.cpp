#include<iostream>
#include<utility>
#include<cstdlib>
#include<string>
using namespace std;

void insert(int A[],int key);
void heapIncreaseKey(int A[],int i,int key);
int heapExtractMax(int A[]);
void maxHeapify(int A[],int i);

int Sentinel = -2000000000;
int H;
int A[2000000];

int main(){
	string command;
	cin>>command;
	int key;

	while(command!="end"){
		if(command=="insert"){
			cin>>key;
			insert(A,key);
		}else if(command=="extract"){
			cout<<heapExtractMax(A)<<endl;
		}
		cin>>command;
	}
}
	
void insert(int A[],int key){
	H++;
	A[H] = Sentinel;
	heapIncreaseKey(A,H,key);
}

void heapIncreaseKey(int A[],int i,int key){
	if(key<A[i]) exit(0);
	A[i] = key;
	int parent = i/2;
	while(i>1 && A[parent]<A[i]){
		swap(A[i],A[parent]);
		i = parent;
		parent = i/2;
	}
}

int heapExtractMax(int A[]){
	if(H<1) exit(0);
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(A,1);
	return max;
}

void maxHeapify(int A[],int i){
	int left = i*2, right = left+1, largest;
	if(left<=H && A[left]>A[i])
		largest = left;
	else
		largest = i;
	if(right<=H && A[largest]<A[right])
		largest = right;

	if(largest != i){
		swap(A[i],A[largest]);
		maxHeapify(A,largest);
	}
}