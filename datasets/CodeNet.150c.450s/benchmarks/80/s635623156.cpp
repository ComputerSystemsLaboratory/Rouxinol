#include<iostream>
using namespace std;

int main() {
	int A[8];
	int n = 0;
	while (n < 8) {
		cin >> A[n];
		n++;
	}
	int M = A[0] + A[1] + A[2] + A[3];
	int N = A[4] + A[5] + A[6] + A[7];
	if (M > N) {
		cout << M << endl;
	}
	else {
		cout << N << endl;
	}
	return 0;
}