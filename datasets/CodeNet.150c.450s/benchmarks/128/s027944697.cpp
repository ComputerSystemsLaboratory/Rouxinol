#include <iostream>
#include <string>

using namespace std;

std::string reverse( std::string src ){
	std::string str = src;

	for( int i=0; i<src.size(); i++ )
		str[i] = src[src.size()-1-i];

	return str;
}

int main(void){
	string str;

	cin >> str;
	cout << reverse(str) << endl;

	return 0;
}