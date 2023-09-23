//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
	char chr;
	while(1){
		chr=cin.get();
		if(chr =='\n')break;
		if (isalpha(chr)){
				if (islower(chr))chr=toupper(chr);
				else chr=tolower(chr);
		}
		cout<<chr;
	}
	cout<<endl;
	return 0;
}