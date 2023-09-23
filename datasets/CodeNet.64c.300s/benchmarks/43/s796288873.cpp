#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A=0,B=0;
	for(int i=0;i<4;i++){
		int temp;
		cin >> temp;
		A+=temp;
	}
	for(int i=0;i<4;i++){
		int temp;
		cin >> temp;
		B+=temp;
	}
	if(A<B)
		cout << B << endl;
	else
		cout << A << endl;
	return 0;
}