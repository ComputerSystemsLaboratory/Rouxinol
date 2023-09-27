//============================================================================
// Name        : ku.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;
#include<cstdio>
int main(){
	double x,y;
	for(;;){
	cin>>x>>y;
	if(x<y){
		cout<<x<<" "<<y<<endl;
	}
	else if(x>y){
		cout<<y<<" "<<x<<endl;
	}
	else if(x==y && x!=0){
		cout<<x<<" "<<y<<endl;
	}
	else if( x== 0 && y == 0){
		break;
	}
	}

	return 0;
}