#include<iostream>
#include<vector>

using namespace std;

int n, q;
vector<int> A(n);

bool solve( const int p, int t )
{
	if( 0 == t ) { return true; }
	if( p < n ) {
		return solve( p+1, t - A.at( p ) ) | solve( p+1, t );
	} else {
		return false;
	}
}

int main()
{
	cin>>n;
	int num;
	for( int i=0; i<n; i++ ) {
		cin>>num;
		A.push_back( num );
	}
	cin>>q;
	for( int i=0; i<q; i++ ) {
		cin>>num;
		if( solve( 0, num ) ) {
			cout<<"yes"<<'\n';			
		} else {
			cout<<"no"<<'\n';
		}
	}
    return 0;
}		
	