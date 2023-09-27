//============================================================================
// Name        : 0019.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long n,x=1;
	cin >>n;
	for(int i=1; i<=n; i++){
		x *= i;
	}
	cout <<x<<endl;
	return 0;
}