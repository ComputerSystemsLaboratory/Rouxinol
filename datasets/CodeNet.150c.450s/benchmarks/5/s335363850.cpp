//============================================================================
// Name        : ITP_1_6_A.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> a;
	cin >> n;
	a.resize(n);
	for(int i=0;i<n;++i) {
		cin >> a[i];
	}
	for(int i=n-1;i>0;--i) {
		printf("%d ",a[i]);
	}
	printf("%d\n",a[0]);
	return 0;
}