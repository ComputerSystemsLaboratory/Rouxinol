#include<iostream>
#include<set>

using namespace std;

int main()
{
	ios::sync_with_stdio( false );
	int n;
	cin>>n;
	set< string > dict;
	string cmd, key;
	for( int i=0; i<n; i++ ) {
		cin>>cmd>>key;
		if( "insert" == cmd ) {
			dict.insert( key );
		} else {
			if( dict.end() != dict.find( key ) ) {
				cout<<"yes\n";
			} else {
				cout<<"no\n";
			}
		}
	}
    return 0;
}