#include <iostream>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)

int parent(int i){return i/2;
} 

int left(int i){return 2*i;
}

int right(int i){return 2*i+1;
}

int H,A[MAX+1]; 

void maxHeapify(int i){
	int largest;
	int l = left(i);
	int r = right(i);
	if((l<=H)&&(A[l]>A[i]))
		 largest = l;
		else 
		 largest = i;
		 
	if((r<=H)&&(A[r]>A[largest]))
		 largest = r;

	if(largest!=i){
		swap(A[i],A[largest]);
		maxHeapify(largest);
	}
}

void buuldMaxHeap(int A[]){
	for(int i=H/2;i>=1;i--){
		maxHeapify(i);
	}
}

void heapIncrease(int i,int key){
	if(A[i]>key){
		return;
	}
	A[i] = key;
	while(i>1&&A[parent(i)]<key){
		swap(A[parent(i)],A[i]);
		i=parent(i);
	}
}

int Extract(){
	if(H<1) return -1;
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(1);
	return max;
}



void insert(int key){
	H++;
	A[H] = -INFTY;
	heapIncrease(H,key);
}


int main(){
	string com;
	int key;
	
	while(1){
		cin>>com;
		if(com[0]=='e'&&com[1]=='n') break;
		else if(com[0]=='e'){
			cout<<Extract()<<endl;
		}else if(com[0]=='i'){
			cin>>key;
			insert(key);
		}
	}
	return 0;
}