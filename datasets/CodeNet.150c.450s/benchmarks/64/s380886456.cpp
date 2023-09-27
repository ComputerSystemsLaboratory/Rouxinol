#include<iostream>
#include<vector>

using namespace std;

int n, q;
vector<int> A(n);
vector<bool> isE(2001);

void solve( const int p, int t )
{
	isE.at( t ) = true;
	if( p < n ) {
		solve( p+1, t - A.at( p ) );
		solve( p+1, t );
	}
	return;
}

int main()
{
	cin>>n;
	int num, sum;
	sum = 0;
	for( int i=0; i<n; i++ ) {
		cin>>num;
		A.push_back( num );
		sum += num;
	}
	solve( 0, sum );
	cin>>q;
	for( int i=0; i<q; i++ ) {
		cin>>num;
		if( isE.at( num ) ) {
			cout<<"yes"<<'\n';			
		} else {
			cout<<"no"<<'\n';
		}
	}
    return 0;
}	