#include<iostream>
#include<algorithm>
using namespace std;

long long A[128], N;
int main(){
	A[0] = 1;
	for (int i = 1; i <= 32; i++){
		A[i] = A[i - 1];
		if (i > 1)A[i] += A[i - 2];
		if (i > 2)A[i] += A[i - 3];
	}

	for (;;){
		cin >> N;
		if (N == 0)break;
		cout << (A[N] / 3650) + 1 << endl;
	}
}