#include<iostream>
#include<string>

using namespace std;

int main( )
{
	string str;
	int i;
	
	getline(  cin, str );
	
	for( i=0; '\0'!=str[i]; i++ ) {
		if( islower( str[i] ) ) {
			str[i] = toupper( str[i] );
		} else if(  isupper( str[i] ) ) {
			str[i] = tolower( str[i] );
		} 
	}
	
	cout<<str<<endl;
	
	return 0;
}