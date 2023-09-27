 #include <iostream>
#include <cctype>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	int i , n ;
	string str ;
	getline(cin,str) ;
	for( i=0 ; i<str.size() ; i++ ){
		if( !islower(str[i]) )
			printf( "%c", tolower(str[i]) ) ;
		else if( !isupper( str[i] ) )
			printf( "%c" , toupper( str[i] ) ) ;
		else 
			printf( "%c" , str[i] ) ;
	}
	cout << endl ;
}