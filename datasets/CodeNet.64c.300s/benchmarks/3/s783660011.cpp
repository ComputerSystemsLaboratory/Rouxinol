#include<iostream>
using namespace std;

int main(){
	int n, A[100];
	cin >> n;
	for ( int i = 0; i < n; i++ ) cin >> A[i];
	
	for ( int i = n-1; i >= 0; i-- ) {
		if ( i != n-1 ) cout << " ";
		cout << A[i];
	}
	cout << endl;
	
	return 0;
}
