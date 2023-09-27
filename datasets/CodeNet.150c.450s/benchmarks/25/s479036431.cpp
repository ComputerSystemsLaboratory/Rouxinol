#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s1=" ";
	int count[26] = {};
	char out;

	while (cin >> s1){
		for(int i=0;i<s1.length();i++){
			if(s1[i]==' ' | s1[i]=='.') continue;
			count[tolower(s1[i])-'a'] += 1;
		}
	}

	for(int i=0;i<26;i++){
		out = i + 'a';
		cout << out << " : " << count[i] << endl;
	}

	return 0;
}