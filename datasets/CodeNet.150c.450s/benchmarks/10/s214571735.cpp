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
	int a[5][4][11];
	int n;
	int b;
	int f;
	int r;
	int v;
	cin>>n;
	for(int i=0;  i<5; i++){
		for(int j=0;  j<4; j++){
			for(int k=0;  k<11; k++){
				a[i][j][k]=0;
			}
		}
	}

	for(int i=0;  i<n; i++){
		cin>>b>>f>>r>>v;
		a[b][f][r]+=v;
	}
	for(int i=1;  i<4; i++){
		for(int j=1;  j<4; j++){
			for(int k=1; k<11; k++){
				cout<<" "<<a[i][j][k];
			}
			cout<<endl;
		}
		cout<<"####################"<<endl;
	}
	for(int j=1;  j<4; j++){
		for(int k=1;  k<11; k++){
			cout<<" "<<a[4][j][k];
		}
		cout<<endl;
	}
}