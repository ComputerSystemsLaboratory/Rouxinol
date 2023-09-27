#include <iostream>
#include <vector>
using namespace std;

long n;

void CountingSort(long A[], long B[], long k){
	vector<long> C(k + 1); // count 0 to k
	for (long i = 0; i <= k; i++) C[i] = 0; // initialize
	for (long i = 0; i < n; i++) C[A[i]]++; // counting
	for (long i = 1; i <= k; i++) C[i] += C[i - 1];
	for (long i = 0; i < n; i++){
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
}

int main(){
	cin >> n;
	long *A, *B;
	A = new long[2000000];
	B = new long[2000000];
	for (long i = 0; i < n; i++) cin >> A[i];
	CountingSort(A, B, 10000);
	delete[] A;
	for (long i = 0; i < n; i++){
		if (i) cout << " ";
		cout << B[i];
	}
	cout << endl;
	delete[] B;
	return 0;
}