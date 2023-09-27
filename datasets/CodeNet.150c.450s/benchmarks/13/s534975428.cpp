#include<iostream>
#include<string>

using namespace std;

int main( )
{
	string s, p;
	
	getline( cin, s );
	getline( cin, p );
	
	s += s;
	int	 j=0;
	for( int i=0; i<s.length()/2; i++ ) {
		if( s[i] == p[j] ) {
			while( s[ i+j ] == p[j] ) { j++; }
			if( p.length() == j ) { 
				break;
			} else {
				j = 0;
			}
		}
	}
	if( p.length() == j ) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
	
	return 0;
}