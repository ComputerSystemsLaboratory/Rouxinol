#include <iostream>
#include <string>

using namespace std;

string revstr( string str ) {
	string ret;
	for(int i = str.length() - 1; i >= 0; i--)
		ret += str[i];
	return ret;
}

int main(void){
	string str;
	cin >> str;
	cout << revstr( str ) << endl;
	return 0;
}