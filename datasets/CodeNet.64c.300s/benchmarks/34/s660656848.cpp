#include <iostream>
#include <algorithm>

using namespace std;

void insertion(int *A,int N);

int main() {
	int N,a[1000];
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}

	cout << a[0];
	for(int k = 1; k < N; k++) cout << " " << a[k];
	cout << endl;

	insertion(a,N);
	return 0;
}

void insertion(int *A,int N){
	for (int i = 1; i < N; i++){
		int v = A[i];
		int j = i - 1;
		
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
	A[j+1] = v;
	
	cout << A[0];
	for(int k = 1; k < N; k++) cout << " " << A[k];
	cout << endl;
	}
}