//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int a,b,c,d,e,f;
	int n,m,h;
	int M1,M2,M3,M4,M5,M6;
	cin>>a>>b>>c>>d>>e>>f;
	M1=a,M2=b,M3=c,M4=d,M5=e,M6=f;
	cin>>n;

	for (int i=0;i<n;i++){
		cin>>m>>h;
		if(m==M1){
			if(h==M2)cout<<M3;
			if(h==M3)cout<<M5;
			if(h==M4)cout<<M2;
			if(h==M5)cout<<M4;
		}
		if(m==M2){
			if(h==M6)cout<<M3;
			if(h==M3)cout<<M1;
			if(h==M1)cout<<M4;
			if(h==M4)cout<<M6;
		}
		if(m==M3){
			if(h==M6)cout<<M5;
			if(h==M5)cout<<M1;
			if(h==M1)cout<<M2;
			if(h==M2)cout<<M6;
		}
		if(m==M4){
			if(h==M1)cout<<M5;
			if(h==M5)cout<<M6;
			if(h==M6)cout<<M2;
			if(h==M2)cout<<M1;
		}
		if(m==M5){
			if(h==M3)cout<<M6;
			if(h==M6)cout<<M4;
			if(h==M4)cout<<M1;
			if(h==M1)cout<<M3;
		}
		if(m==M6){
			if(h==M2)cout<<M4;
			if(h==M4)cout<<M5;
			if(h==M5)cout<<M3;
			if(h==M3)cout<<M2;
		}
		cout<<endl;
	}


	return 0;
}