#include<iostream>
#include<cmath>
using namespace std;

int Sort(int A[],int N){
	int min,t,s=0;
	for(int i=0; i<N-1; i++){
		min = i;
		for(int j=i; j<N; j++){
			if( A[j]<A[min] ) min = j;
		}

		t = A[i];
		A[i] = A[min];
		A[min] = t;

		if( i != min ) s++;
	}
	return s;
}


int main(){
	int A[100],N,i,s;

	cin >> N;
	for(int i=0; i<N; i++) cin >> A[i];

	s = Sort(A,N);

	for(int i=0; i<N; i++){
		if( i>0 ) cout << " ";
		cout << A[i];
	}
	cout << "\n";
	cout << s << "\n";
	return 0;
}