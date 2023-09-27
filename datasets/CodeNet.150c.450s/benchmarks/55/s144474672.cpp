//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char str[1001];
	int A;

	while(1){
		cin>>str;
		if (str[0]=='0')break;
		A=0;
		int B=strlen(str);
		for (int i=0;i<B;i++){
			A+=(str[i]-'0');
		}
		cout<<A<<endl;
	}



	return 0;
}