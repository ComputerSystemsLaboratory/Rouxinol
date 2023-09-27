#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 10001
using namespace std;

void Counting_Sort(int *A, int n, int *B, int k){
	int *C = new int[N];
	for(int i=0; i<=k; i++) C[i]=0;
	for(int j=0; j<n; j++) C[A[j]] = C[A[j]]+1;
	for(int i=1; i<=k; i++) C[i] = C[i]+C[i-1];
	for(int j=n-1; j>=0; j--){
		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]]-1;
	}
	delete[] C;
}

int main(){
	int n;
	cin >> n;
	int *A = new int[n];
	int *B = new int[n+1];
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	Counting_Sort(A, n, B, N-1);
	for(int i=1;i<n+1;i++){
		cout << B[i];
		if(i == n) cout<< endl;
		else cout<< " ";
	}
	delete[] A;
	delete[] B;
	return 0;
}