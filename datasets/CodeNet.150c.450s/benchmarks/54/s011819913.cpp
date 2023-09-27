#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main( )
{
	string w, p;
	int i;
	
	cin>>w;
	
	int cnt = 0;
	while( true ) {
		cin>>p;
		if( "END_OF_TEXT" == p ) { break; }
		
		for( i=0; i<p.length(); i++ ) {
			p[i] = tolower( p[i] );
		}
		if( p == w ) {
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
	
	return 0;
}