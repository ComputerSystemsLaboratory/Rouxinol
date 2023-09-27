#include<iostream>

using namespace std;

int main( )
{
	char str[1201];
	int i;
	
	
	cin.getline(  str, sizeof( str ) );
	
	for( i=0; '\0'!=str[i]; i++ ) {
		if( 'A'<=str[i] && str[i]<='Z' ) {
			str[i] += 32;
		} else if(  'a'<=str[i] && str[i]<='z'  ) {
			str[i] -= 32;
		} 
	}
	str[i]='\0';
	
	cout<<str<<endl;
	
	return 0;
}