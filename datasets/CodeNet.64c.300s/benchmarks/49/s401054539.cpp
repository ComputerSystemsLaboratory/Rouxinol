//============================================================================
// Name        : 0002.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,ans;
	while(cin>>a>>b){
		a += b;
		ans = 0;
		while( a>0 , ans++ , a/=10);
		cout << ans << endl;
	}
	return 0;
}