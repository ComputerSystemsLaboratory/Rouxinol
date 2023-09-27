 #include <iostream>
#include <string>
#include <cctype>
using namespace std ;
int main(){
	int n , i , s ;
	string str ;
	while( 1 ){
		cin >> str ;
		int num = 0 ;
		if( str == "0" ) break ;
		for( i=0 ; i<str.size() ; i++ ){
			n = str[i] - '0' ;
			num += n ;
		}
		cout << num << endl ;
	}
}