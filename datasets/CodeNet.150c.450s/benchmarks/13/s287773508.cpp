//============================================================================
// Name        : ITP_1_8_D.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str_s, str_p;
	int i,j;
	bool able=false;
	getline(cin,str_s);
	getline(cin,str_p);
	for(i=0; i<(int)str_p.length()-1; ++i) {
		str_s+=str_s[i];
	}
	for(i=0; i<(int)str_s.length()-(int)str_p.length()+1;++i) {
		for(j=0; j<(int)str_p.length(); ++j) {
			if(str_s[i+j]!=str_p[j]) {
				break;
			}
		}
		if(j==(int)str_p.length()) {
			able=true;
		}
	}
	cout << (able?"Yes":"No") << endl;
	return 0;
}