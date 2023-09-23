#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int A[1001];
	int num;
	for(int i=0;i<1001;i++){
		A[i] = 0;
	}

	cin >>num;
	
	for(int i=0;i<num;i++){
		scanf("%d",&A[i]);
	}
	void insertionSort(int* A,int N);//A[]はポインタ渡し
	insertionSort(A,num);

	return 0;
}

void insertionSort(int* A,int N){
	int v,j;

	for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;

	for(int i=1;i<N;i++){
		v = A[i];
		j = i -1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;
	}
}