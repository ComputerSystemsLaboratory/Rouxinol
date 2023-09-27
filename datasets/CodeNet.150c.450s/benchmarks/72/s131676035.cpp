#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	//cin >> str;
	
	for (int i=0; i<str.length(); i++) {
	    char c = str[i];
	    if ('A' <= c && c <= 'Z') {
	        //str[i] = tolower(c);
	        cout << (char)tolower(c);
	    } else if ('a' <= c && c <= 'z') {
	        //str[i] = toupper(c);
	        cout << (char)toupper(c);
	    } else {
	        cout << str[i];
	    }
	}
	
	cout << endl;
	
	return 0;
}