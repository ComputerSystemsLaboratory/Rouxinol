#include<iostream>
#include<cstring>

using namespace std;

int main() {
	
	char A[1201];
	
	while( cin.getline(A,1201)) {
	
	for(int i=0;i<strlen(A);i++) {
		
		if( A[i] > 96 && A[i] < 123 )
		A[i] -= 32;
		else if( A[i] > 64 && A[i] < 91 )
		A[i] += 32;
		
	}
	
	cout << A << "\n";
}
	return 0;
}
