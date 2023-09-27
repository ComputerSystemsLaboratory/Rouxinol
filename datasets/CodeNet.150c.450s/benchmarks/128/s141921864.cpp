//============================================================================
// Name        : 0006.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	while( cin >> s ){
		reverse(s.begin() , s.end());
		cout << s <<endl;
	}
	return 0;
}