#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

char changeit(char c){
	char n = c;
	if(65 <= n && n <= 90){
		n = n + 32;
	}
	else if(97 <= n && n <= 122){
		n = n - 32;
	}
	return n;
}

int main(){
	string s;
	getline(cin, s);
	int n = s.length();
	for(int i = 0; i < n; i++){
		cout << changeit(s[i]);
	}
	cout << "\n";
}
