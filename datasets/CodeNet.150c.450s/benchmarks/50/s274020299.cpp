//============================================================================
// Name        : 0521.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x;
	int c[6]={
		500,100,50,10,5,1
	};
	while(1){
		int ans=0;
	cin>>x;
	x=1000-x;
	if(x==1000){
		break;
	}
	for(int i=0;i<6;i++){
		ans=x/c[i]+ans;
		x=x%c[i];

	}
	cout <<ans<<endl;
	}
	return 0;
}