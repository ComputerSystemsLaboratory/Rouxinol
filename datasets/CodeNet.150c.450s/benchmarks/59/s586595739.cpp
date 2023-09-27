#include<iostream>
#define SIZE 1000
using namespace std;

void insertionSort(int (&A)[SIZE],int N){
	int v, i, j, k;
	for(i=0;i<N;i++){
		cout << A[i];
		if(i!=N-1)cout << " ";
		else cout <<endl;
	}	
	for(i=1;i<N;i++){
		v = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		for(k=0;k<N;k++){
			cout << A[k];
			if(k!=N-1)cout << " ";
			else cout <<endl;
		}
	}
	return;
}

int main(){
	int A[SIZE] = {0}, N, i;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> A[i];
	}
	insertionSort(A, N);
	return 0;
}