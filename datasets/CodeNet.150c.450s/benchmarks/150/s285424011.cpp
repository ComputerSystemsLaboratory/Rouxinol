

#include <iostream>
#include <vector>

typedef long long int llint;
using namespace std;
const int LIMIT = 10000;

int main() {

	llint n;
	cin >> n;


	vector<llint> A,B,C;
	A.resize(n);
	B.resize(n);
	C.resize(LIMIT,0);

	for (llint i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (llint i = 0; i < n; i++) {
		C[A[i]]++;
	}
	for (int i = 1; i < LIMIT; i++) {
		C[i] += C[i - 1]; // => c--;
		//C[i+1] += C[i]; i = 0; i < LIMIT -1; => c++
	}
	for (llint i = 0; i < n; i++) {
		B[C[A[i]]-1] = A[i];
		C[A[i]] = C[A[i]] - 1;
	}
	for (llint i = 0; i < n; i++) {
		if (i != n - 1)
			cout << B[i] << " ";
		else
			cout << B[i] << endl;
	}

	return 0;
}