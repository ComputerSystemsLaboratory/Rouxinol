#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	string fields;
	
	getline( cin, fields );
	
	stack<int> st;
	deque< pair<int, int> > areas;
	int  pool, sum = 0;
	for( int i=0; i<fields.length( ); i++ ) {
		if( '\\' == fields[i] ) {
			st.push( i );
		} else {
			if( !st.empty( ) && '/' == fields[i] ) {
				int j = st.top( );
				st.pop( );
				pool = i - j;
				sum += pool;
				
				while( !areas.empty( ) ) {
					pair<int, int> preArea = areas.back( );
					if( j < preArea.first ) {
						pool += preArea.second;
						areas.pop_back( );
					} else {
						break;
					}
				}
				areas.push_back( make_pair( j, pool ) );
			}
		}
	}
	cout<<sum<<'\n';
	if( 0 < areas.size( ) ) {
		cout<<areas.size( )<<' ';
	} else {
		cout<<areas.size( );
	}
	deque< pair<int, int> >::iterator itr = areas.begin( );
	deque< pair<int, int> >::iterator itrE = areas.end( );
	for( ; itr!=itrE; itr++ ) {
		cout<<itr->second;
		if( itr != itrE-1 ) cout<<' ';
	}
	cout<<endl;
	
    return 0;
}