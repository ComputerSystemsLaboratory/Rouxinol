#include<iostream>

using namespace std;

void trace(int A[],int N){
	for(int i=0; i < N; i++){
		if(i>0)cout << " ";
		cout << A[i];
	}
	cout << endl;
}

void insetionSort(int A[],int N){
	int v,j;
	for(int i=0; i<N; i++){
		v=A[i];
		j=i-1;
		while(j>=0 && A[j]>v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		trace(A,N);
	}
}
int main(){
	int n;
	cin >> n;
	int A[n];
	for(int i=0; i<n; i++)cin >> A[i];

	insetionSort(A,n);
}
