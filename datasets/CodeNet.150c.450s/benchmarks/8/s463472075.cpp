//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string A,B;
	int T=0,H=0;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>A>>B;
		if(A>B)T+=3;
		else if(A<B)H+=3;
		else{
			T+=1,H+=1;
		}
	}
	cout<<T<<" "<<H<<endl;
	return 0;
}