#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str(""), s;
	int i;
	i = 0;

	getline(cin, str);
	//cout << str << endl;

	for(i = 0; i < str.size(); i++) {
		if('a' <= str[i] && str[i] <= 'z') {
			str[i] = toupper(str[i]);
		} else if('A' <= str[i] && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
	}
	cout << str << endl;
	return 0;
}