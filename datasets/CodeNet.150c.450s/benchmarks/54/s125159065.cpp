#include <iostream>
#include <string>
#include <cctype>
//#include <stdio.h>
using namespace std;

string toUpper(string s){
	string t = s;
	for (int i = 0;i < t.size(); i++){
		t[i] = toupper(s[i]);
	}
	return t;
	
}

int main(){
	string W, T[20001];
	string s = "END_OF_TEXT";
	int num = 0;
	cin >> W;
	W = toUpper(W);
	
	for (int i = 0; i < 20000; i++){
		cin >> T[i];
		if (T[i] == s) break;
		T[i] = toUpper(T[i]);
		if (T[i] == W) num++;
		
	}

	cout << num << endl;
	return 0;
}