#include <iostream>

void swap(int*, int*);

using namespace std;

int main(){
	int i, n, A[100000], cnt = -1;
	
	cin >> n;
	for(i=0;i<n;++i)cin >> A[i];
	for(i=0;i<n;++i){
		if(A[i] <= A[n-1]){
			cnt++;
			swap(&A[cnt], &A[i]);
		}
	}
	
	for(i=0;i<n;++i){
		if(i == cnt) cout << "[";
		cout << A[i];
		if(i == cnt) cout << "]";
		if(i != n-1) cout << " ";
	}
	cout << "\n";
	
	return 0;
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
