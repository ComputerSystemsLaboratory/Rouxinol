#include<iostream>

using namespace std;

int main( )
{
	int a[102][102] = { {0} } ;
	int n, m, l;
	int i, j, k;

	cin>>n>>m>>l;

	for( int i=0; i<n; i++ ) {
		for( int j=0; j<m; j++ ) {
			cin>>a[i][j];
		}
	}
	int b[102][102] = { {0} } ;
	for( i=0; i<m; i++ ) {
		for( j=0; j<l; j++ ) {
			cin>>b[i][j];
		}
	}

	long long c[102][102] = { {0} } ;	
	for( i=0; i<n; i++ ) {
		for( j=0; j<l; j++ ) {
			for( k=0; k<m; k++ ) {
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}

	for( i=0; i<n; i++ ) {
		for( j=0; j<l-1; j++ ) {
			cout<<c[i][j]<<" ";
		}
		cout<<c[i][j]<<endl;
	}
	return 0;
}