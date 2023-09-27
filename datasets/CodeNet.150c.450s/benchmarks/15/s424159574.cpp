#include <iostream>
using namespace std;

long search(long A[], long n, long key){
	long i = 0;
	A[n] = key;
	while (A[i] != key) i++;
	return i != n;
}

int main(){
	long n, A[10001], q, key, sum = 0;
	cin >> n;
	for (long i = 0; i < n; i++) cin >> A[i];
	cin >> q;
	for (long i = 0; i < q; i++){
		cin >> key;
		if (search(A, n, key)) sum++;
	}
	cout << sum << endl;
	return 0;
}