#include <iostream>
#include <string>
#include <cctype>
//#include <stdio.h>
using namespace std;

string shuffle(string s, int n){
	string s1 = s;
	string s2 = s;
	s1.erase(s1.begin() + 0, s1.begin() + n);
	s2.erase(s2.begin() + n, s2.begin() + s2.size());
	return s1 + s2;
}


int main(){
	string str[200];
	int m, n;
	
	for (int i = 0; i < 200; i++){
		//cout << "string:";
		cin >> str[i];
		if (str[i] == "-") break;
		//cout << "m:";
		cin >> m;
		for (int j=0; j < m; j++){
			//cout << j << "-";
			cin >> n;
			str[i] = shuffle(str[i] , n);
		}
	}	
	for (int k = 0; k < 200; k++){
		if (str[k] == "-") break;
		cout << str[k] << endl;
	}
	return 0;
}