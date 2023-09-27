#include <iostream>
#include <string>
using namespace std;

string reverseString(string str){
	string strTemp;
	
	for(int i=0 ; i<str.size() ; i++){
		strTemp[str.size()-i-1] = str[i];
	}
	for(int i=0 ; i<str.size() ; i++){
		str[i] = strTemp[i];
	}
	return str;
} 
 
int main(){
	string str;

	while ( cin >> str ) {
		cout << reverseString( str ) << endl;
	}
} 