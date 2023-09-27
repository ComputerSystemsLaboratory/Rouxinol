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
	double x;
	int i=0;
	for(;;){
		cin>>x;
		if(x == 0){
			break;
		}
		i++;
		cout<<"Case "<<i<<": "<<x<<endl;
	}
	return 0;}