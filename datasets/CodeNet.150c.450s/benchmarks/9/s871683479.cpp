#include<iostream>
#include<string>

using namespace std;

int main( )
{
	string cards, tmp;
	int m, h;
	
	while( cin>>cards ) {
		if( "-" == cards ) { break; }
	
		cin>>m;
		while( m-- ) {
			cin>>h;
			tmp = cards.substr( 0, h );
			cards = cards.substr( h );
			cards.append( tmp );
		}
		cout<<cards<<endl;
	}
	
	return 0;
}