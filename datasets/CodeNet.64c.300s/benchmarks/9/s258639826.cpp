//============================================================================
// Name        : 0007.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x=100000;
	for(int i=0; i<n; i++){
		x=0.05*x+x;
		x=ceil((double)x/1000)*1000;
	}
	cout <<x<<endl;

	return 0;
}