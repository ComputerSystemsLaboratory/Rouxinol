//============================================================================
// Name        : ITP_1_9_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str_taro, str_hanako;
	int st=0,sh=0,n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> str_taro >> str_hanako;
		if(str_taro>str_hanako) {
			st+=3;
		} else if(str_taro<str_hanako) {
			sh+=3;
		} else {
			++st;
			++sh;
		}
	}
	cout << st << " " << sh << endl;
	return 0;
}