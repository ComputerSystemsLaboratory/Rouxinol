#include<iostream>

using namespace std;
int main() {
	
	int n;
	while( cin >> n && n != 0 ) {
		
		int A[2] = {};
		
		for(int i=0;i<n;i++) {
		
		int a, b;
		cin >> a >> b;
		
		if( a > b)
		A[0] += ( a + b );
		
		if( a == b) {
		A[0] += a; 
		A[1] += b;
		
	}
		if( a < b)
		A[1] += ( a + b);
		
}
		cout << A[0] << " " << A[1] << "\n";
	}
	
	return 0;
}
