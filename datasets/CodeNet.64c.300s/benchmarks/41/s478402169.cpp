#include <stdio.h>
#include <iostream>

#define abs(a) (a<0?-(a):a)
#define square(x) ((x)*(x))
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define swap(a,b) ((a!=b)?(a+=b,b=a-b,a-=b):0)
#define This
#define True true
#define False false
#define null Null


using namespace std;
int N;
void maxHeapify(int num[],int i){
	int left=2*i;
	int right=2*i+1;
	int largest;
	if(left<=N&&num[left]>num[i]){
		largest=left;	
	}else{
		largest=i;
	}
	if(right<=N&&num[right]>num[largest]){
		largest=right;
	}

	if(largest!=i){
		swap(num[i],num[largest]);
		maxHeapify(num,largest);
	}
}

void buildMaxHeap(int num[]){
	for(int i=N/2;i>=1;i--){
		maxHeapify(num,i);
	}

	for(int i=1;i<=N;i++){
		cout<<" "<<num[i];
	}
	cout<<endl;
}
int main(){
	int num[1000000];
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>num[i];
	}
	buildMaxHeap(num);
}

