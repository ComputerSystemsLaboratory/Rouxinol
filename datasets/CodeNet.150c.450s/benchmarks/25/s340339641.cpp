#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string alpha="abcdefghijklmnopqrstuvwxyz";
	int c[26]={0};
	while(1) {
		getline(cin,str);
		if(str=="") break;
		for(int i=0; i<(int)str.length(); ++i) {
			if(str[i]>='a' && str[i]<='z') {
				++c[str[i]-'a'];
			} else if (str[i]>='A' && str[i]<='Z') {
				++c[str[i]-'A'];
			}
		}
	}
	for(int i=0; i<26; ++i) {
		cout << alpha[i] << " : " << c[i] << endl;
	}
	return 0;
}