#include<iostream>
using namespace std;

void trace(int A[],int N){
	for(int i=0;i<N;i++){
		if(i>0) cout<<" ";
		cout<<A[i];
	}
	cout<<endl;
}

void bubbleSort(int A[],int N){
	int flag = 1;
	int i=0;
	int count=0;
	
	while(flag){
		flag=0;
		for(int j=N-1;j>i;j--){
			if(A[j]<A[j-1]){
				swap(A[j],A[j-1]);
				count++;
				flag=1;
			}
		}
		i++;
	}
	trace(A,N);
	cout<<count<<endl;
}

int main(){
	int N;
	cin>>N;
	int A[100];
	
	for(int i=0;i<N;i++) cin>>A[i];
	
	bubbleSort(A,N);
	
}