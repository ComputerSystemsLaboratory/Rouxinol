#include <stdio.h>
#include <string>
#include <ctype.h>
#include <iostream>
using namespace std;

char check(char s3){
	if(isupper(s3)!=0)
		return tolower(s3);
	if(islower(s3)!=0)
		return toupper(s3);
	return s3;
}

int main(){
	string s1;
	string s2;
	getline(cin, s1);
	s2 = s1;

	for(int i=0; i<s1.length(); i++){
		s2[i] = check(s1[i]);
	}
	cout << s2 << endl;

	return 0;
}