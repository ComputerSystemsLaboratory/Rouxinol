#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int A[10];
	int i;

	for(i=0; i<10; i++){
		cin >> A[i];
	}


	sort(A, A+10);

	cout << A[9] << endl;
	cout << A[8] << endl;
	cout << A[7] << endl;
}