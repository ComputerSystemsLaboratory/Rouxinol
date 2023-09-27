#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	/*
	int A[100];
	for (int i = 0; i <= 99; i++){
		A[i] = 99-i;
	}
	sort(A,A+100);
	for (int i = 0; i <= 99; i++){
		cout << A[i] << endl;
	}
	*/

	while(1){
		int n;
		cin >> n;
		if(n == 0){
			break;
		}
		int A[n];
		for (int i = 0; i <= n-1; i++){
			cin >> A[i];
		}
		sort(A,A+n);
		int sum = 0;
		for (int i = 1; i<= n-2; i++){
			sum += A[i];
		}
		cout << (int)(sum/(n-2)) << endl;
	}

}