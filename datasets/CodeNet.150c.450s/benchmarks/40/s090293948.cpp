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
	int R;
	int T;
	string str;
	int M1,M2,M3,M4,M5,M6;
	cin>>a>>b>>c>>d>>e>>f;
	M1=a,M2=b,M3=c,M4=d,M5=e,M6=f;
	cin>>str;
	for (int j=0;j<str.size();j++){
		if(str[j]=='S')T=M6,M6=M2,M2=M1,M1=M5,M5=T;
		if(str[j]=='N')T=M1,M1=M2,M2=M6,M6=M5,M5=T;
		if(str[j]=='E')T=M3,M3=M1,M1=M4,M4=M6,M6=T;
		if(str[j]=='W')T=M1,M1=M3,M3=M6,M6=M4,M4=T;

	}
	R=M1;
	cout<<R<<endl;

	return 0;
}