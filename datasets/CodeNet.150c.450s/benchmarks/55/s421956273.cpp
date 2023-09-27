#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main( )
{
	string str;
	int i;
	
	while( true ) {
		getline(  cin, str );
		if( '0' == str[0] ) { break; }
		
		int sum = 0;
		for( i=0; '\0'!=str[i]; i++ ) {
			if( isdigit( str[i] ) ) {
				sum += ( str[i]-'0' );
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}