#include <algorithm>
#include <iostream>
using namespace std;
int A[32], N;
int main(){
	A[0] = 1;
	for (int i=1; i<=31; i++){
		A[i] = A[i-1];
		if (i>1) A[i] += A[i-2];
		if (i>2) A[i] += A[i-3];
	}
	while (cin >> N && N!=0){
		int year = A[N]/3650+1;
		cout << year << endl;
	}
}