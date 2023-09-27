#include<iostream>
#include<queue>
#include<string>

using namespace std;

deque<int> dll;

void printList( )
{
	deque<int>::iterator itr = dll.begin( );
	deque<int>::iterator itrE = dll.end( );
	for( ; itr!=itrE; itr++ ) {
		cout<<*itr;
		if( itr != itrE-1 ) cout<<' ';
	}
	cout<<endl;
}
	
int main()
{
	int n;
	ios::sync_with_stdio( false );
	cin>>n;
	
	string cmd;
	int key;
	for( int i=0; i<n; i++ ) {
		cin>>cmd;
		if( "insert" == cmd ) {
			cin>>key;
			dll.push_front( key );
		} else if( "deleteFirst" == cmd ) {
			dll.pop_front( );
		} else if( "deleteLast" == cmd ) {
			dll.pop_back( );
		} else if( "delete" == cmd ) {
			cin>>key;
			deque<int>::iterator itr = dll.begin( );
			deque<int>::iterator itrE = dll.end( );
			for( ; itr!=itrE; itr++ ) {
				if( key == *itr ) {
					dll.erase( itr );
					break;
				}
			}
		}
	}
	printList( );

    return 0;
}