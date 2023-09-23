#include<iostream>

using namespace std;

int main( )
{
	int r, c;
	int rc[102][102] = { {0} } ;
	
	cin>>r>>c;
	for( int i=0; i<r; i++ ) {
		for( int j=0; j<c; j++ ) {
			cin>>rc[i][j];
			rc[r][j] += rc[i][j];
			rc[i][c] += rc[i][j];		
		}
		rc[r][c] += rc[i][c];
	}
	for( int i=0; i<=r; i++ ) {
		for( int j=0; j<=c; j++ ) {
			if( j < c ) {
				cout<<rc[i][j]<<" ";
			} else {
				cout<<rc[i][j]<<endl;
			}
		}
	}
	
	return 0;
}