#include<iostream>
#include<string>

using namespace std;

int main( )
{
	string str, cmd, p;
	int q;
	int a, b;

	cin>>str;
	cin>>q;
	
	while( q-- ) {	
		cin>>cmd;
		if( "print" == cmd ) {
			cin>>a>>b;
			cout<<str.substr( a, b-a+1 )<<endl;
		} else if( "reverse" == cmd ) {
			cin>>a>>b;
			char t;
			for( int i=0; i<=(b-a)/2; i++ ) {
				t = str[ a+i ];
				str[ a+i ] = str[ b-i ];
				str[ b-i ] = t;
			}
		} else if( "replace" == cmd ) {
			cin>>a>>b>>p;
			str.replace( a, b-a+1, p );
		}
	}
	
	return 0;
}