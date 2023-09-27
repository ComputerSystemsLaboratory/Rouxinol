#include<iostream>
#include<string>

using namespace std;

int main() {
	
	string A, B, C;
	int n, w;
	
	while( cin >> A) {
		
		if( A == "-")
		break;
		
		cin >> n;
		
		for(int i=0;i<n;i++) {
		 cin >> w;
		 
		 for(int j=w;j<A.length();j++)
		 	C.push_back(A[j]);
		 			 	
		for(int j=0;j<w;j++)
		 	C.push_back(A[j]);
		
			A = C;
			B = C;
			C.clear();
	}
			cout << B << "\n";
	}
	return 0;
}
