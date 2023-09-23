//============================================================================
// Name        : HelloCPP.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int a[100] = {};
	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int j = n - 1; j >= 0; j--){
		cout << a[j];
		if (!(j == 0)){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}