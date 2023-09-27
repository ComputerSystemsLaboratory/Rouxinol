#include <iostream>
using namespace std;
int main(){
	int n,m,l;
	cin >>n>>m>>l;
	long long int a[101][101],b[101][101];
	long long int x;
	for( int i=0 ; i<n ; i++ )
		for( int j=0 ; j<m ; j++ )
			cin >> a[i][j];
	for( int i=0 ; i<m ; i++ )
		for( int j=0 ; j<l ; j++ )
			cin >> b[i][j];
	for( int i=0 ; i<n ; i++ ){
		for( int j=0 ; j<l ; j++ ){
			x=0;
			for( int k=0 ; k<m ; k++ ){
				x += a[i][k]*b[k][j];
			}
			cout << x;
			if( j!=l-1 )
				cout <<" ";
		}
		cout << endl;
	}
	return 0;
}