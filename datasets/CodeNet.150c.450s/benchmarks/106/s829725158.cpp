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
	int a,b,c,sum=0;
	cin>>a>>b>>c;
	for(a;a<=b;a++){
		if(c%a==0){
			sum=sum+1;}
	}
	cout<<sum<<endl;
	return 0;
}