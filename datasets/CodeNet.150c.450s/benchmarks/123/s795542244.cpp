//============================================================================
// Name        : ALDS1_1_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,x,t=0;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		for(int j=2; j<(int)pow((double)x,0.5)+1; ++j) {
			if(x%j==0) {
				++t;
				break;
			}
		}
	}
	cout << (n-t) << endl;
	return 0;
}