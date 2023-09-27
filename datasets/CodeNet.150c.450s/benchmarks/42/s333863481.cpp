#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	int n, q;
	cin>>n>>q;
	
	queue< pair<string, int> > ps;
	string p;
	int t;
	for( int i=0; i<n; i++ ) {
		cin>>p>>t;
		ps.push( make_pair( p, t ) );
	}
	
	int progress = 0;
	pair<string, int> tmp;
	while( !ps.empty( ) ) {
		tmp = ps.front( );
		ps.pop( );
		if( tmp.second <= q ) {
			progress += tmp.second;
			cout<<tmp.first<<' '<<progress<<'\n';
		} else {
			ps.push( make_pair( tmp.first, tmp.second - q ) );
			progress += q;
		}	 
	}

    return 0;
}