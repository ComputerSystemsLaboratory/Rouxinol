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
	int r;
	int c;
    cin>>r>>c;
    int d;
	int e;
    for(int i=1; i<r+1; i++){
		for(int j=1; j<c+1; j++){
			cin>>a[i][j];
		}
	}


	for(int i=1; i<r+1; i++){
		d=0;
		for(int j=1; j<c+1; j++){
			cout<<a[i][j] <<" ";
			d+=a[i][j];
		}
		cout<<d<<endl;
	}
	for(int j=1; j<c+1; j++){
		d=0;
		for(int i=1; i<r+1; i++){
			d+=a[i][j];
		}
			cout<<d<<" ";
	}
    e=0;
	for(int j=1; j<c+1; j++){
		d=0;
		for(int i=1; i<r+1; i++){
			d+=a[i][j];
		}
        e+=d;
	}
	cout<<e<<endl;
}