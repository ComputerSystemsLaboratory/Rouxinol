//============================================================================
// Name        : JOI.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int A[4],B[4];
int main() {
	int S=0,T=0;
	for(int i=0;i<4;i++){
		cin>>A[i];
		S+=A[i];
	}
	for(int j=0;j<4;j++){
		cin>>B[j];
		T+=B[j];
	}
	if(S<T)cout<<T<<endl;
	if(S>T || S==T)cout<<S<<endl;


	return 0;
}