#include <iostream>
#include <algorithm>
using namespace std;

long n;

long partition(long A[], long p, long r){
	long x = A[n - 1];
	long i = p - 1;
	long j;
	for (j = p; j < r; j++){
		if (A[j] <= x){
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[n - 1]);
	return i + 1;
}

int main(){
	cin >> n;
	long A[100000];
	for (long i = 0; i < n; i++) cin >> A[i];
	long p = partition(A, 0, n - 1);
	for (long i = 0; i < n; i++){
		if (i) cout << " ";
		if (i == p) cout << "[" << A[i] << "]";
		else cout << A[i];
	}
	cout << endl;
	return 0;
}