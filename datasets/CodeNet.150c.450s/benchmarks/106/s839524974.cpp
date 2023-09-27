//============================================================================
// Name        : YakusuuTest.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,c,amo,div,i;
	cin>>a>>b>>c;
	for(i=a-1;i<b;i++){
		div=c%a;
		a++;
		if(div==0){
			amo++;
		}
	}
	cout<<amo<<endl;
}

