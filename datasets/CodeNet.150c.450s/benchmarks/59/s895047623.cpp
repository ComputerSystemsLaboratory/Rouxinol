#include <iostream>
using namespace std;

void trAce(int A[],int N){
	for(int k=0;k<N;k++){
		if(k>0) cout<<" ";
		cout<<A[k];
	}
	cout<<endl;
}

void insertionSort(int A[],int N){
	int i,j,v;
	for(i=1;i<N;i++){
		v=A[i];
		j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		trAce(A,N);
	}
}

int main(){
	int N,i,A[101];
	cin>>N;
	for(i=0;i<N;i++) cin>>A[i];
	trAce(A,N);
	insertionSort(A,N);
	return 0;
}


