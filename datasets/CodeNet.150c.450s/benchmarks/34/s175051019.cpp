#include <algorithm>
#include <iostream>
using namespace std;

int A[128],N;
int main() {
	A[0] = 1;
	cin >> N;
	while(N != 0) {
		for(int i=0; i<N+1; ++i) {
			if(A[i] ==0) {
				A[i] = A[i-1];
				if(i>1) A[i] += A[i-2];
				if(i>2) A[i] += A[i-3];
			}
		}
		cout << ((A[N]+9)/10 + 364)/365 << endl;
		cin >> N;
	}
}