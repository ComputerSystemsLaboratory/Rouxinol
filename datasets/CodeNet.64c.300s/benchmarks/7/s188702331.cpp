//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	char chr;
	int A;
	int card[4][14]={};




	cin>>n;
	for (int i=0;i<n;i++){
		cin>>chr>>A;

		if (chr=='S')card[0][A]=1;
		if (chr=='H')card[1][A]=1;
		if (chr=='C')card[2][A]=1;
		if (chr=='D')card[3][A]=1;
	}

	for (int i=1;i<14;i++){
		if (card[0][i]==0){
			cout<<"S "<<i<<endl;
		}
	}
	for (int i=1;i<14;i++){
		if (card[1][i]==0){
			cout<<"H "<<i<<endl;
		}
	}
	for (int i=1;i<14;i++){
		if (card[2][i]==0){
			cout<<"C "<<i<<endl;
		}
	}
	for (int i=1;i<14;i++){
		if (card[3][i]==0){
			cout<<"D "<<i<<endl;
		}
	}




	return 0;
}