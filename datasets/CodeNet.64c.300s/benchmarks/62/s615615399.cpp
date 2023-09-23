//============================================================================
// Name        : AOL.cpp
// Author      : Akari Fujii
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int a[101][101];
	int n;
	int m;
	int b[101];
	int c;
    cin>>n>>m;

	for( int i=1; i<n+1; i++){
		for( int j=1; j<m+1; j++){
			cin>>a[i][j];
		}
	}
	for( int i=1; i<m+1; i++)cin>>b[i];
	for( int i=1; i<n+1; i++){
		c=0;
		for( int j=1; j<m+1; j++){
			c+=a[i][j]*b[j];
		}
		cout<<c<<endl;
	}

}