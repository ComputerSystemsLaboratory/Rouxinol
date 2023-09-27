//============================================================================
// Name        : ITP_1_7_D.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<long long>> a, b;
	long long temp;
	int l,m,n;
	cin >> n >> m >> l;
	a.resize(n);
	b.resize(m);
	for(int i=0; i<n; ++i) {
		a[i].reserve(m);
		for(int j=0; j<m; ++j) {
			cin >> temp;
			a[i].push_back(temp);
		}
	}
	for(int i=0; i<m; ++i) {
		b[i].reserve(l);
		for(int j=0; j<l; ++j) {
			cin >> temp;
			b[i].push_back(temp);
		}
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<l; ++j) {
			temp=0;
			for(int k=0; k<m; ++k) {
				temp+=a[i][k]*b[k][j];
			}
			cout << temp;
			if(j!=l-1) {
				cout << " ";
			} else {
				cout << endl;
			}
		}
	}
	return 0;
}